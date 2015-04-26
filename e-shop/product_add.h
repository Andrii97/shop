#ifndef PRODUCT_ADD_H
#define PRODUCT_ADD_H

#include <QWidget>
#include <QtSql>
#include <QMessageBox>
#include <QSqlQueryModel>
namespace Ui {
class product_add;
}

class product_add : public QWidget
{
    Q_OBJECT

public:
    explicit product_add(QWidget *parent = 0);
    ~product_add();
    QSqlQueryModel *model;

private slots:

    void on_comboBox_currentIndexChanged();

private:
    Ui::product_add *ui;
};

#endif // PRODUCT_ADD_H
