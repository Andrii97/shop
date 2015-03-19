#ifndef BUYERS_H
#define BUYERS_H

#include <QWidget>

namespace Ui {
class buyers;
}

class buyers : public QWidget
{
    Q_OBJECT

public:
    explicit buyers(QWidget *parent = 0);
    ~buyers();

private:
    Ui::buyers *ui;
};

#endif // BUYERS_H
