/********************************************************************************
** Form generated from reading UI file 'set_properties.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SET_PROPERTIES_H
#define UI_SET_PROPERTIES_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_set_properties
{
public:
    QPushButton *Enter;
    QLabel *LDate;
    QSpinBox *day;
    QSpinBox *month;
    QSpinBox *year;
    QPushButton *pushButton;

    void setupUi(QWidget *set_properties)
    {
        if (set_properties->objectName().isEmpty())
            set_properties->setObjectName(QStringLiteral("set_properties"));
        set_properties->resize(400, 300);
        Enter = new QPushButton(set_properties);
        Enter->setObjectName(QStringLiteral("Enter"));
        Enter->setGeometry(QRect(80, 200, 75, 23));
        LDate = new QLabel(set_properties);
        LDate->setObjectName(QStringLiteral("LDate"));
        LDate->setGeometry(QRect(40, 120, 41, 31));
        day = new QSpinBox(set_properties);
        day->setObjectName(QStringLiteral("day"));
        day->setGeometry(QRect(100, 130, 42, 22));
        day->setMinimum(1);
        day->setMaximum(31);
        month = new QSpinBox(set_properties);
        month->setObjectName(QStringLiteral("month"));
        month->setGeometry(QRect(160, 130, 42, 22));
        month->setMinimum(1);
        month->setMaximum(28);
        year = new QSpinBox(set_properties);
        year->setObjectName(QStringLiteral("year"));
        year->setGeometry(QRect(221, 130, 61, 22));
        year->setMinimum(2015);
        year->setMaximum(3000);
        pushButton = new QPushButton(set_properties);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(190, 200, 75, 23));

        retranslateUi(set_properties);

        QMetaObject::connectSlotsByName(set_properties);
    } // setupUi

    void retranslateUi(QWidget *set_properties)
    {
        set_properties->setWindowTitle(QApplication::translate("set_properties", "Form", 0));
        Enter->setText(QApplication::translate("set_properties", "\320\227\320\260\320\277\320\270\321\201\320\260\321\202\320\270", 0));
        LDate->setText(QApplication::translate("set_properties", "<html><head/><body><p><span style=\" font-size:12pt;\">\320\224\320\260\321\202\320\260</span></p></body></html>", 0));
        pushButton->setText(QApplication::translate("set_properties", "\320\222\321\226\320\264\320\274\321\226\320\275\320\270\321\202\320\270", 0));
    } // retranslateUi

};

namespace Ui {
    class set_properties: public Ui_set_properties {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SET_PROPERTIES_H
