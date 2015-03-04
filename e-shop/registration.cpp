#include "registration.h"
#include "ui_registration.h"
#include <stdlib.h>

registration::registration(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::registration)
{
    ui->setupUi(this);
}

registration::~registration()
{
    db.close();
    delete ui;
}

void registration::on_Enter_clicked()
{
    QSqlQuery qr;
    qr.exec("SELECT Login FROM buyers;");
    QString login;
    bool flag = 0;
    while (qr.next())
    {
        login = qr.value(0).toString();
        if (login == ui->TLogin->text())
        {
             QMessageBox::warning(this,"Error","This login already exists");
             flag = 1;
        }
        qDebug() << login;
    }
    qDebug() << "---------->";
    if (flag == 0)
    {
        QSqlQuery query;
        query.prepare("INSERT INTO buyers (Surname, Name, Login, Password, The_cost_of_all_purchases) "
                      "VALUES (?, ?, ?, ?, ?)");
        query.addBindValue(ui->TSurname->text());
        query.addBindValue(ui->TName->text());
        query.addBindValue(ui->TLogin->text());
        query.addBindValue(ui->TPassword->text());
        query.addBindValue(0);
        if (query.exec())
            QMessageBox::information(this,"Information","Registration was successful");
    }
}
