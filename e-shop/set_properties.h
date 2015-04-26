#ifndef SET_PROPERTIES_H
#define SET_PROPERTIES_H

#include <QWidget>
#include <QtSql>
#include <QMessageBox>

namespace Ui {
class set_properties;
}

class set_properties : public QWidget
{
    Q_OBJECT

public:
    explicit set_properties(QWidget *parent = 0);
    ~set_properties();

private slots:

    void on_Enter_clicked();

private:
    Ui::set_properties *ui;
};

#endif // SET_PROPERTIES_H
