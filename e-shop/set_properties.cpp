#include "set_properties.h"
#include "ui_set_properties.h"

set_properties::set_properties(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::set_properties)
{
    ui->setupUi(this);
    QSqlQuery qr;
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

set_properties::~set_properties()
{
    delete ui;
}


void set_properties::on_CProperties_currentIndexChanged(int index)
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

void set_properties::on_Enter_clicked()
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




    /*qr.exec("SELECT ID, Name FROM properties;");
    QString name;
    int id;
    bool flag = 0;
    ui->CProperties->addItem("Додати характеристику");
    while (qr.next())
    {
        id = qr.value(0).toInt();
        name = qr.value(1).toString();
        if (name == ui->TProperties->text())
        {
            flag = 1;
            break;
        }
        qDebug() << id << name;
    }
    */
}
