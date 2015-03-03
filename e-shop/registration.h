#ifndef REGISTRATION_H
#define REGISTRATION_H

#include <QDialog>
#include <QtSql>
#include <QMessageBox>

namespace Ui {
class registration;
}

class registration : public QDialog
{
    Q_OBJECT

public:
    explicit registration(QWidget *parent = 0);
    ~registration();

private:
    Ui::registration *ui;
    QSqlDatabase db;

private slots:

    void on_Enter_clicked();

};

#endif // REGISTRATION_H
