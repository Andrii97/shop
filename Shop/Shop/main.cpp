#include "mainwindow.h"
#include <QApplication>
#include "sqlite3.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    char *errmsq = 0;
    int rc = sqlite3_open("shop.db", &db);
    if (rc != SQLITE_OK){
        //printf("Error while oppening", sqlite3_errmsg(db));
        return 1;
    } else
   printf("Good");
    w.unsetCursor();

    return a.exec();

}
