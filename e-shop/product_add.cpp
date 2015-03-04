#include "product_add.h"
#include "ui_product_add.h"

product_add::product_add(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::product_add)
{
    ui->setupUi(this);
}

product_add::~product_add()
{
    delete ui;
}

void product_add::on_pushButton_clicked()
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

    //QSqlQuery query;
    query.prepare("INSERT INTO products (Name, Photo) "
                  "VALUES (?, ?)");
    query.addBindValue(ui->TName->text());
    query.addBindValue(ui->TPhoto->text());
    if (query.exec())
        QMessageBox::information(this,"Information","Add product was successful");
}
