#include "mainwindow.h"
#include <QApplication>
#include "registration.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    registration m;
    m.show();
    return a.exec();
}
