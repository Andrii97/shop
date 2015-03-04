#include "product_add.h"
#include "ui_product_add.h"
#include <QtSql>
#include <QMessageBox>

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
    query.prepare("INSERT INTO products (Name, Photo) "
                  "VALUES (?, ?)");
    query.addBindValue(ui->TName->text());
    query.addBindValue(ui->TPhoto->text());
    if (query.exec())
        QMessageBox::information(this,"Information","Add product was successful");
}
