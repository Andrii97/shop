#include "mainwindow.h"
#include <QApplication>
#include <QtSql>
#include <QMessageBox>
#include "registration.h"
#include "product_add.h"
#include "set_properties.h"
#include "manager.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    QString path = QDir::currentPath()+QString("/shop.db");
    db.setDatabaseName(path);
    if(!db.open())
            qDebug()<<"database not found";
    else
        qDebug()<<"database OK";
    qDebug()<<QDir::currentPath();
    MainWindow w;
    w.show();
    //registration m;
    //m.show();
    //product_add p;
    //p.show();
    //set_properties s;
    //s.show();
    //manager m;
    //m.show();
    return a.exec();
}
