/********************************************************************************
** Form generated from reading UI file 'product_add.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PRODUCT_ADD_H
#define UI_PRODUCT_ADD_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_product_add
{
public:
    QTableView *tableView;
    QComboBox *comboBox;

    void setupUi(QWidget *product_add)
    {
        if (product_add->objectName().isEmpty())
            product_add->setObjectName(QStringLiteral("product_add"));
        product_add->resize(571, 419);
        tableView = new QTableView(product_add);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 10, 551, 341));
        comboBox = new QComboBox(product_add);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(10, 380, 211, 22));

        retranslateUi(product_add);

        QMetaObject::connectSlotsByName(product_add);
    } // setupUi

    void retranslateUi(QWidget *product_add)
    {
        product_add->setWindowTitle(QApplication::translate("product_add", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class product_add: public Ui_product_add {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PRODUCT_ADD_H
