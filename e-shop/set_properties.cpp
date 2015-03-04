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
