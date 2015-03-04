#include "mainwindow.h"
#include <QApplication>
#include <QtSql>
#include <QMessageBox>
#include "registration.h"
#include "product_add.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QSqlDatabase db = QSqlDatabase::addDatabase("QSQLITE");
    QString path = QDir::currentPath()+QString("/shop.db");
    db.setDatabaseName(path);
    if(!db.open())
            qDebug()<<"database not found";
    else
        qDebug()<<"database OK";
    qDebug()<<QDir::currentPath();
    w.show();
    registration m;
    m.show();
    product_add p;
    p.show();
    return a.exec();
}
