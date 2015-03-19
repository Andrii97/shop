#include "buyers.h"
#include "ui_buyers.h"
#include <time.h>
#include <QTime>
#include <QDate>

buyers::buyers(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::buyers)
{
    ui->setupUi(this);
    QTime rawtime;
    QDate d;
    ui->dateTimeEdit->setTime(rawtime.currentTime());
    ui->dateTimeEdit->setDate(d.currentDate());
}

buyers::~buyers()
{
    delete ui;
}
