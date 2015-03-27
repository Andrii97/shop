#include "manager.h"
#include "ui_manager.h"
#include <QTableWidgetItem>

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
    while (qr.next())
    {
        properties = qr.value(0).toString();
        ui->CProperties->addItem(properties);
        qDebug() << properties;
    }

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
    qr.exec("SELECT * FROM composition;");
    //ui->tableProducts->setDisabled(true);
    while(qr.next())
    {
        QSqlQuery qr1;
        qr1.exec("SELECT Name FROM products WHERE ID='"+qr.value(0).toString()+"';");
        qr1.next();
        ui->tableProducts->setRowCount(ui->tableProducts->rowCount()+1);
        //ui->tableProducts->(qr.value(0), qr1.value(0), qr.value(1));
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
    initExchangeRates();
}

manager::~manager()
{
    delete ui;
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

void manager::on_pushButton_clicked()
{
    if (ui->TName->text() == NULL)
    {
        qDebug() << "error";
        return;
    }

    QSqlQuery query;
    query.exec("SELECT Name FROM products;");
    QString Name;
    while (query.next())
    {
        Name = query.value(0).toString();
        if (Name == ui->TName->text())
        {
             QMessageBox::warning(this,"Error","This Name already exists");
             return;
        }
        qDebug() << Name;
    }
    query.prepare("INSERT INTO products (Name, Photo) "
                  "VALUES (?, ?)");
    query.addBindValue(ui->TName->text());
    query.addBindValue(ui->TPhoto->text());
    if (query.exec())
        QMessageBox::information(this,"Information","Add product was successful");
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
// Maybe it is error that I took currentIndex
void manager::on_addProductToWarehouse_clicked()
{
    QSqlQuery qr;
    qr.prepare("INSERT INTO composition (ID_product, number) VALUES (?, ?);");
    qr.addBindValue(ui->CProduct->currentIndex() + 1); // it will be error if I delete anyone product
    qr.addBindValue(ui->spinBoxNumber->value());
    qDebug() << ui->CProduct->currentIndex() + 1 << ui->spinBoxNumber->value();
    if (!qr.exec())
        QMessageBox::information(this,"Information","Set properties wasn't successful");
    qr.prepare("INSERT INTO ProductCurrency (ID_product, ID_currency, Price) VALUES (?, ?, ?)");
    qr.addBindValue(ui->CProduct->currentIndex() + 1); // it will be error if I delete anyone product
    qr.addBindValue(ui->CCurrency->currentIndex() + 1); // it will be error if I delete anyone product
    qr.addBindValue(ui->dSpinBoxPrice->value());
    qDebug() << ui->CProduct->currentIndex() + 1 << ui->CCurrency->currentIndex() + 1 << ui->dSpinBoxPrice->value();
    if (!qr.exec())
        QMessageBox::information(this,"Information","Set properties wasn't successful");
    qr.prepare("INSERT INTO product_price (ID, Purchase_price, Сoefficient) VALUES (?, ?, ?)");
    qr.addBindValue(ui->CProduct->currentIndex() + 1); // it will be error if I delete anyone product
    qr.addBindValue(ui->dSpinBoxPrice->value() * ui->LRateValue->text().toDouble()); // it will be error if I delete anyone product
    qr.addBindValue(2);
    qDebug() << ui->CProduct->currentIndex() + 1 << ui->dSpinBoxPrice->value() * ui->LRateValue->text().toDouble();
    if (!qr.exec())
        QMessageBox::information(this,"Information","Set properties wasn't successful");
    else QMessageBox::information(this,"Information","Set properties was successful");
}
