#ifndef MANAGER_H
#define MANAGER_H

#include <QWidget>
#include <QtSql>
#include <QMessageBox>

namespace Ui {
class manager;
}

class manager : public QWidget
{
    Q_OBJECT

public:
    explicit manager(QWidget *parent = 0);
    ~manager();

private slots:
    void on_Enter_clicked();

    void on_CProperties_currentIndexChanged(int index);

    void on_pushButton_clicked();

private:
    Ui::manager *ui;
};

#endif // MANAGER_H
