


#ifndef BUYERS_H
#define BUYERS_H

#include <QWidget>
#include <QtSql>

class BuyerInfo{
public:
    QString *Name, *Surname, *Patronymic, *Login;
    double The_cost_of_all_purchases;
    int ID;
    BuyerInfo(){
        Name = new QString;
        Surname = new QString;
        Patronymic = new QString;
        Login = new QString;
        The_cost_of_all_purchases = 0.0;
        ID = 0;
    }
    ~BuyerInfo(){
        delete Name;
        delete Surname;
        delete Patronymic;
        delete Login;
    }
};

namespace Ui {
class buyers;
}

class buyers : public QWidget
{
    Q_OBJECT

public:
    explicit buyers(int ID, QWidget *parent = 0);
    ~buyers();

private slots:
    void on_ButtonSearchProducts_clicked();

    void on_next_clicked();

    void on_prev_clicked();

    void on_aBasket_linkActivated(const QString &link);

    void on_printReceipt_clicked();

private:
    Ui::buyers *ui;
    BuyerInfo *aBuyerInfo;
    QStringList *aListCategory;
};

#endif // BUYERS_H
