#ifndef PRODUCT_ADD_H
#define PRODUCT_ADD_H

#include <QWidget>

namespace Ui {
class product_add;
}

class product_add : public QWidget
{
    Q_OBJECT

public:
    explicit product_add(QWidget *parent = 0);
    ~product_add();

private slots:
    void on_pushButton_clicked();

private:
    Ui::product_add *ui;
};

#endif // PRODUCT_ADD_H
