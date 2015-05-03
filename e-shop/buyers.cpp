#include "buyers.h"
#include "ui_buyers.h"
#include <time.h>
#include <QTime>
#include <QDate>
#include <QTreeWidgetItem>

buyers::buyers(int ID, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::buyers)
{
    ui->setupUi(this);

    aBuyerInfo = new BuyerInfo;
    aBuyerInfo->ID = ID;
    QSqlQuery qr;
    qr.exec(QString("SELECT Surname, Name, Patronymic, Login, "
                    "The_cost_of_all_purchases FROM buyers WHERE ID=%1;").arg(aBuyerInfo->ID));
    qr.next();
    aBuyerInfo->Surname = &qr.value(0).toString();
    aBuyerInfo->Name = &qr.value(1).toString();
    aBuyerInfo->Patronymic = &qr.value(2).toString();
    aBuyerInfo->Login = &qr.value(3).toString();
    aBuyerInfo->The_cost_of_all_purchases = qr.value(4).toDouble();
    ui->LName->setText(*aBuyerInfo->Surname + " " + *aBuyerInfo->Name + " " + *aBuyerInfo->Patronymic);

    QTime rawtime;
    QDate d;
    ui->dateTimeEdit->setTime(rawtime.currentTime());
    ui->dateTimeEdit->setDate(d.currentDate());
    //ui->treeWidget->setColumnCount(2);
    QTreeWidgetItem *q;
    QString l;
    l="composition";
   // q->setText(0, l);
   // ui->treeWidget->setCurrentItem(q);
}

buyers::~buyers()
{
    delete aBuyerInfo;
    delete ui;
}
