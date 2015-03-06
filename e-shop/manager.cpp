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
    qr.exec("SELECT Name FROM products;");
    QString Name;
    ui->CProperties->addItem("Додати характеристику");
    while (qr.next())
    {
        Name = qr.value(0).toString();
        ui->CName->addItem(Name);
        qDebug() << Name;
    }

    qr.exec("SELECT Name FROM properties;");
    QString properties;
    while (qr.next())
    {
        properties = qr.value(0).toString();
        ui->CProperties->addItem(properties);
        qDebug() << properties;
    }
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
}
