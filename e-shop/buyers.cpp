#include "buyers.h"
#include "ui_buyers.h"
#include <time.h>
#include <QTime>
#include <QDate>
#include <QTreeWidgetItem>

buyers::buyers(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::buyers)
{
    ui->setupUi(this);
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
    delete ui;
}
