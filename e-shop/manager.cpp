#include "manager.h"
#include "ui_manager.h"

manager::manager(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::manager)
{
    ui->setupUi(this);
    QSqlQuery qr;
    qr.exec("SELECT Job_title, Surname, Name, Patronymic FROM administrators;");
    qr.next();
    ui->LName->setText(qr.value(0).toString() + " - " + qr.value(1).toString() + " " +
                       qr.value(2).toString() + " " + qr.value(3).toString());
    // add properties
    qr.exec("SELECT Name FROM products;");
    QString Name;
    ui->CProperties->addItem("Додати характеристику");
    while (qr.next())
    {
        Name = qr.value(0).toString();
        ui->CName->addItem(Name);
        qDebug() << Name;
        ui->CProduct->addItem(Name);
    }

    qr.exec("SELECT Name FROM properties;");
    QString properties;
    QStringList list;
    while (qr.next())
    {
        properties = qr.value(0).toString();
        //ui->CProperties->addItem(properties);
        list << properties;
        qDebug() << properties;
    }
    this->properties->setStringList(list);
    qDebug() << this->properties->stringList();
    ui->CProperties->setModel(this->properties);
    // look information about manager
    qr.exec("SELECT Surname, Name, Patronymic, Login, Job_title FROM administrators;");
    while(qr.next())
    {
        for(int pos = 0; pos < 5; pos++)
        {
            QTableWidgetItem *item = new QTableWidgetItem();
            item->setText(qr.value(pos).toString());
            ui->tableWidget->setItem(pos, 0, item);
            ui->tableWidget->item(pos, 0)->setFlags(Qt::ItemFlags(32));
        }
    }
    // set table of products
    ui->tableProducts->setColumnCount(3);
    ui->tableProducts->setHorizontalHeaderLabels(QStringList() << "ID" << "Назва" << "Кількість");
    fillTableProducts();

    ui->tableCurrency->setColumnCount(4);
    ui->tableCurrency->setHorizontalHeaderLabels(QStringList() << "Цифровий код" << "Буквений код" << "Валюта" << "Еквівалент");
    fillTableCurrency();
    initExchangeRates();
}

manager::~manager()
{
    delete ui;
}

void manager::selectTable()
{
   // ui->tableProducts->setColumnCount(3);
   // ui->tableProducts->setHorizontalHeaderLabels(QStringList() << "ID" << "Назва" << "Кількість");
    ui->tableProducts->clear();
    QSqlQuery qr;
    qr.exec("SELECT Surname, Name, Patronymic, Login, Job_title FROM administrators;");
    while(qr.next())
    {
        for(int pos = 0; pos < 5; pos++)
        {
            QTableWidgetItem *item = new QTableWidgetItem();
            item->setText(qr.value(pos).toString());
            ui->tableWidget->setItem(pos, 0, item);
            ui->tableWidget->item(pos, 0)->setFlags(Qt::ItemFlags(32));
        }
    }
    // set table of products
    //ui->tableProducts->setColumnCount(3);
    //ui->tableProducts->setHorizontalHeaderLabels(QStringList() << "ID" << "Назва" << "Кількість");
    fillTableProducts();
}

void manager::on_Enter_clicked()
{
    QString value = ui->TValue->text();
    if (NULL == value) return;
    QSqlQuery qr;
    if (ui->CProperties->currentIndex() > 0)
    {
        qr.prepare("INSERT INTO ProductProperties (ProductID, PropertiesID, Value) VALUES (?, ?, ?);");
        qr.addBindValue(ui->CName->currentIndex() + 1);
        qr.addBindValue(ui->CProperties->currentIndex());
        qr.addBindValue(value);
        if (qr.exec())
            QMessageBox::information(this,"Information","Set properties was successful");
    }
    else
    {
        if (NULL == ui->TProperties->text()) return;
        qr.exec("SELECT Name, ID FROM properties;");
        QString name;
        int id;
        while (qr.next())
        {
            name = qr.value(0).toString();
            id = qr.value(1).toInt();
            if (name == ui->TProperties->text())
            {
                QMessageBox::critical(this,"Error","This property exists");
                return;
            }
            qDebug() << name;
        }
        qr.prepare("INSERT INTO properties (Name) VALUES (?);");
        qr.addBindValue(ui->TProperties->text());
        if (qr.exec())
            QMessageBox::information(this,"Information","Add properties was successful");
        qr.prepare("INSERT INTO ProductProperties (ProductID, PropertiesID, Value) VALUES (?, ?, ?);");
        qr.addBindValue(ui->CName->currentIndex() + 1);
        qr.addBindValue(id + 1);
        qr.addBindValue(value);
        if (qr.exec())
            QMessageBox::information(this,"Information","Set properties was successful");
        ui->CProperties->addItem(ui->TProperties->text());
        ui->TProperties->setText("");
    }
    ui->TValue->setText(NULL);
}

void manager::on_CProperties_currentIndexChanged(int index)
{
    if (index == 0)
    {
        ui->TProperties->setReadOnly(false);
        ui->TProperties->setText(NULL);
    }
    else
    {
        ui->TProperties->setReadOnly(true);
        ui->TProperties->setText(ui->CProperties->currentText());
    }
}

void manager::on_CreateNewProduct_clicked()
{
    if (ui->TName->text() == NULL)
    {
        qDebug() << "error";
        return;
    }
    QSqlQuery qr;
    qr.exec("SELECT Name FROM products;");
    QString Name;
    while (qr.next())
    {
        Name = qr.value(0).toString();
        if (Name == ui->TName->text())
        {
             QMessageBox::warning(this,"Error","This Name already exists");
             return;
        }
        qDebug() << Name;
    }
    qr.prepare("INSERT INTO products (Name, Photo, Length, Width, Height) "
                  "VALUES (?, ?, ?, ?, ?)");
    qr.addBindValue(ui->TName->text());
    qr.addBindValue(ui->TPhoto->text());
    qr.addBindValue(ui->dSpinBoxLength->value());
    qr.addBindValue(ui->dSpinBoxWidth->value());
    qr.addBindValue(ui->dSpinBoxHeight->value());
    if (qr.exec())
    {
        QMessageBox::information(this,"Information","Add product was successful");
        ui->dSpinBoxLength->setValue(0);
        ui->dSpinBoxWidth->setValue(0);
        ui->dSpinBoxHeight->setValue(0);
        if (ui->CCategory->currentIndex() != 0)
        {
            qDebug() << "<--<>-<>-<>-->";
        }
    }
    ui->CName->addItem(ui->TName->text());
    ui->TName->setText("");
}

void manager::initExchangeRates()
{
    QSqlQuery qr;
    qr.exec("SELECT Currency_purchases, Сonversion_factor FROM CurrencyType;");
    ui->LRateValue->setText(qr.value(1).toString());
    while (qr.next())
    {
        qDebug() << qr.value(0).toString();
        ui->CCurrency->addItem(qr.value(0).toString());
    }
}

void manager::on_CCurrency_currentIndexChanged(int index)
{
    QSqlQuery qr;
    qr.exec("SELECT Currency_purchases, Сonversion_factor FROM CurrencyType;");
    while (qr.next())
    {
        if (qr.value(0) == ui->CCurrency->currentText())
        {
            ui->LRateValue->setText(qr.value(1).toString());
            return;
        }
    }
}

void manager::insertToCalendarOfAddingProducts()
{
    QSqlQuery qr;
    qr.prepare("INSERT INTO CalendarOfAddingProducts (ID_product, Price, Number, Date) VALUES (?, ?, ?, ?);");
    qr.addBindValue(ui->CProduct->currentIndex() + 1); // it will be error if I delete anyone product
    qr.addBindValue(ui->spinBoxNumber->value());
    qr.addBindValue(ui->spinBoxNumber->value());
    QDate date;
    qr.addBindValue(date.currentDate());
    if(qr.exec())
        QMessageBox::information(this,"Information","InsertToCalendar was successful");
}

bool manager::fillSpace(int id, int number)
{
    QSqlQuery qr, query;
    if(!qr.exec(QString("SELECT Length, Width, Height FROM products WHERE ID=%1;").arg(id)))
        return 0;
    if(!query.exec("SELECT Сapacity, Occupied FROM warehouses;"))
        qDebug() << "I here2";
       // return 0;
    query.next();
    double space = (query.value(0).toDouble() - query.value(1).toDouble()) * 0.75;
    qr.next();
    double V = (double)number * qr.value(0).toDouble() * qr.value(1).toDouble() * qr.value(2).toDouble();
    qDebug() << "I here1" << V;
    if(V > space)
        return 0;
    else
    {
        qr.prepare("UPDATE warehouses SET Occupied = (?) WHERE ID = (?);"); // for 1 warehouses
        qr.addBindValue(V + query.value(1).toDouble());
        qr.addBindValue(1);
        qDebug() << "I here";
        if(qr.exec())
            return 1;
    }
     qDebug() << qr.value(1).toString();
    return 0;
}

// Maybe it is error that I took currentIndex
void manager::on_addProductToWarehouse_clicked()
{
    if (ui->spinBoxNumber->value() == 0) return;
    if (!fillSpace(ui->CProduct->currentIndex() + 1, ui->spinBoxNumber->value())) return;
    //return;
    QSqlQuery qr;
    insertToCalendarOfAddingProducts();
    // composition
    qr.prepare("INSERT INTO composition (ID_product, number) VALUES (?, ?);");
    qr.addBindValue(ui->CProduct->currentIndex() + 1); // it will be error if I delete anyone product
    qr.addBindValue(ui->spinBoxNumber->value());
    qDebug() << ui->CProduct->currentIndex() + 1 << ui->spinBoxNumber->value();
    if (!qr.exec())
    {
        QMessageBox::information(this,"Information","Set product wasn't successful");
        QSqlQuery q;
        q.prepare("SELECT number FROM composition WHERE ID_product = (?);");
        q.addBindValue(ui->CProduct->currentIndex()+1);
        q.exec();
        q.next();
        qr.prepare("UPDATE composition SET number = (?) WHERE ID_product = (?);");
        qr.addBindValue(ui->spinBoxNumber->value() + q.value(0).toInt());
        qr.addBindValue(ui->CProduct->currentIndex()+1);
        if(qr.exec())
            QMessageBox::information(this,"Information","Update product was successful");
    }

    // ProductCurrency
    qr.prepare("INSERT INTO ProductCurrency (ID_product, ID_currency, Price VALUES (?, ?, ?);");
    qr.addBindValue(ui->CProduct->currentIndex() + 1); // it will be error if I delete anyone product
    qr.addBindValue(ui->CCurrency->currentIndex() + 1); // it will be error if I delete anyone product
    qr.addBindValue(ui->dSpinBoxPrice->value());
    qDebug() << ui->CProduct->currentIndex() + 1 << ui->CCurrency->currentIndex() + 1 << ui->dSpinBoxPrice->value();
    if (!qr.exec())
    {
        QMessageBox::information(this,"Information","Set product wasn't successful");
    }
    QSqlQuery query;
    query.exec("SELECT Value account");
    query.next();
    double sum = query.value(0).toDouble();
    qDebug() << sum;
    query.prepare("UPDATE account SET Value = (?) WHERE ID=(?);"); // for 1 warehouses
    query.addBindValue(sum - ui->dSpinBoxPrice->value() * ui->LRateValue->text().toDouble());
    query.addBindValue(1);
    query.exec();
    // product_price
    qr.prepare("INSERT INTO product_price (ID, Purchase_price, Сoefficient) VALUES (?, ?, ?)");
    qr.addBindValue(ui->CProduct->currentIndex() + 1); // it will be error if I delete anyone product
    qr.addBindValue(ui->dSpinBoxPrice->value() * ui->LRateValue->text().toDouble()); // it will be error if I delete anyone product
    qr.addBindValue(2);
    qDebug() << ui->CProduct->currentIndex() + 1 << ui->dSpinBoxPrice->value() * ui->LRateValue->text().toDouble();
    if (!qr.exec())
        QMessageBox::information(this,"Information","Set product wasn't successful");
    else QMessageBox::information(this,"Information","Set product was successful");
}

void manager::fillTableProducts()
{
    ui->tableProducts->setRowCount(0);
    QSqlQuery qr;
    qr.exec("SELECT * FROM composition;");
    while(qr.next())
    {
        QSqlQuery qr1;
        qr1.exec("SELECT Name FROM products WHERE ID='"+qr.value(0).toString()+"';");
        qr1.next();
        ui->tableProducts->setRowCount(ui->tableProducts->rowCount()+1);
        qDebug() << "-------->" << qr.value(0).toString() << qr1.value(0).toString() << qr.value(1).toString();
        QTableWidgetItem *item = new QTableWidgetItem();
        item->setText(qr.value(0).toString());
        ui->tableProducts->setItem(ui->tableProducts->rowCount()-1, 0, item);
        QTableWidgetItem *item1 = new QTableWidgetItem();
        item1->setText(qr1.value(0).toString());
        ui->tableProducts->setItem(ui->tableProducts->rowCount()-1, 1, item1);
        QTableWidgetItem *item2 = new QTableWidgetItem();
        item2->setText(qr.value(1).toString());
        ui->tableProducts->setItem(ui->tableProducts->rowCount()-1, 2, item2);
        ui->tableProducts->item(ui->tableProducts->rowCount()-1,0)->setFlags(Qt::ItemFlags(32));
        ui->tableProducts->item(ui->tableProducts->rowCount()-1,1)->setFlags(Qt::ItemFlags(32));
        ui->tableProducts->item(ui->tableProducts->rowCount()-1,2)->setFlags(Qt::ItemFlags(32));
    }
}

void manager::on_RefreshProductInWarehouse_clicked()
{
    fillTableProducts();
}

void manager::fillTableCurrency()
{
    ui->tableCurrency->setRowCount(0);
    QSqlQuery qr;
    qr.exec("SELECT * FROM CurrencyType;");
    while(qr.next())
    {
        ui->CChangeCurrency->addItem(qr.value(2).toString(), qr.value(0).toInt());

        ui->tableCurrency->setRowCount(ui->tableCurrency->rowCount()+1);
        //QTableWidgetItem *item = new QTableWidgetItem();
        //item->setText(qr.value(0).toString());
        //ui->tableCurrency->setItem(ui->tableCurrency->rowCount()-1, 0, item);
        QTableWidgetItem *item1 = new QTableWidgetItem();
        item1->setText(qr.value(1).toString());
        ui->tableCurrency->setItem(ui->tableCurrency->rowCount()-1, 0, item1);
        QTableWidgetItem *item2 = new QTableWidgetItem();
        item2->setText(qr.value(2).toString());
        ui->tableCurrency->setItem(ui->tableCurrency->rowCount()-1, 1, item2);
        QTableWidgetItem *item3 = new QTableWidgetItem();
        item3->setText(qr.value(3).toString());
        ui->tableCurrency->setItem(ui->tableCurrency->rowCount()-1, 2, item3);
        QTableWidgetItem *item4 = new QTableWidgetItem();
        item4->setText(qr.value(4).toString());
        ui->tableCurrency->setItem(ui->tableCurrency->rowCount()-1, 3, item4);
        ui->tableCurrency->item(ui->tableCurrency->rowCount()-1,0)->setFlags(Qt::ItemFlags(32));
        ui->tableCurrency->item(ui->tableCurrency->rowCount()-1,1)->setFlags(Qt::ItemFlags(32));
        ui->tableCurrency->item(ui->tableCurrency->rowCount()-1,2)->setFlags(Qt::ItemFlags(32));
        ui->tableCurrency->item(ui->tableCurrency->rowCount()-1,3)->setFlags(Qt::ItemFlags(32));
    }
}

void manager::on_SetCurrency_clicked()
{
    if (ui->dSpinBoxChangeCurrency->value() == 0) return;
    QSqlQuery qr;
    qr.prepare("UPDATE CurrencyType SET Сonversion_factor = (?) WHERE ID = (?);");
    qr.addBindValue(ui->dSpinBoxChangeCurrency->value());
    qr.addBindValue(ui->CChangeCurrency->currentData().toInt());
    if(qr.exec())
    {
        qr.prepare("INSERT INTO ChangeCurrency (ID_currency, New, Date) VALUES (?,?,?);");
        qr.addBindValue(ui->CChangeCurrency->currentData().toInt());
        qr.addBindValue(ui->dSpinBoxChangeCurrency->value());
        QDate date;
        qr.addBindValue(date.currentDate());
        if(qr.exec())
        {
            QMessageBox::information(this,"Information","Update currency was successful");
            ui->tableCurrency->item(ui->CChangeCurrency->currentData().toInt() - 1, 3)->setText(QString::number(ui->dSpinBoxChangeCurrency->value()));
            ui->dSpinBoxChangeCurrency->setValue(0);
        }
    }
}

void manager::on_addToTheDeliverySchedule_clicked()
{
    QSqlQuery qr;

    // composition
    qr.prepare("INSERT INTO composition (ID_product, number) VALUES (?, ?);");
    qr.addBindValue(ui->CProduct->currentIndex() + 1);
    qr.addBindValue(ui->spinBoxNumber->value());
    qDebug() << ui->CProduct->currentIndex() + 1 << ui->spinBoxNumber->value();
    if (!qr.exec())
    {
        QMessageBox::information(this,"Information","Set product wasn't successful");
        QSqlQuery q;
        q.prepare("SELECT number FROM composition WHERE ID_product = (?);");
        q.addBindValue(ui->CProduct->currentIndex()+1);
        q.exec();
        q.next();
        qr.prepare("UPDATE composition SET number = (?) WHERE ID_product = (?);");
        qr.addBindValue(q.value(0).toInt());
        qr.addBindValue(ui->CProduct->currentIndex()+1);
        if(qr.exec())
            QMessageBox::information(this,"Information","Update product was successful");
    }

    // ProductCurrency
    qr.prepare("INSERT INTO ProductCurrency (ID_product, ID_currency, Price VALUES (?, ?, ?);");
    qr.addBindValue(ui->CProduct->currentIndex() + 1); // it will be error if I delete anyone product
    qr.addBindValue(ui->CCurrency->currentIndex() + 1); // it will be error if I delete anyone product
    qr.addBindValue(ui->dSpinBoxPrice->value());
    qDebug() << ui->CProduct->currentIndex() + 1 << ui->CCurrency->currentIndex() + 1 << ui->dSpinBoxPrice->value();
    if (!qr.exec())
    {
        QMessageBox::information(this,"Information","Set product wasn't successful");
    }

    // product_price
    qr.prepare("INSERT INTO product_price (ID, Purchase_price, Сoefficient) VALUES (?, ?, ?)");
    qr.addBindValue(ui->CProduct->currentIndex() + 1); // it will be error if I delete anyone product
    qr.addBindValue(ui->dSpinBoxPrice->value() * ui->LRateValue->text().toDouble()); // it will be error if I delete anyone product
    qr.addBindValue(2);
    qDebug() << ui->CProduct->currentIndex() + 1 << ui->dSpinBoxPrice->value() * ui->LRateValue->text().toDouble();
    if (!qr.exec())
        QMessageBox::information(this,"Information","Set product wasn't successful");
    else QMessageBox::information(this,"Information","Set product was successful");

    qr;
    qr.prepare("INSERT INTO Delivery (ID_product, Number, Date, Status_id VALUES (?, ?, ?, ?);");
    qr.addBindValue(ui->CProduct->currentIndex() + 1); // it will be error if I delete anyone product
    qr.addBindValue(ui->CCurrency->currentIndex() + 1); // it will be error if I delete anyone product
    qr.addBindValue("01.05.2015");
    qr.addBindValue(1);
    qDebug() << ui->CProduct->currentIndex() + 1 << ui->CCurrency->currentIndex() + 1 << ui->dSpinBoxPrice->value();
    if (!qr.exec())
    {
        QMessageBox::information(this,"Information","Set product wasn't successful");
    }
}
