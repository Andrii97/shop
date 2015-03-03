/********************************************************************************
** Form generated from reading UI file 'registration.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRATION_H
#define UI_REGISTRATION_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_registration
{
public:
    QLabel *label;
    QSplitter *splitter;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *LSurname;
    QLabel *LName;
    QLabel *LLogin;
    QLabel *LPassword;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout_2;
    QLineEdit *TSurname;
    QLineEdit *TName;
    QLineEdit *TLogin;
    QLineEdit *TPassword;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout;
    QPushButton *Enter;
    QPushButton *pushButton_2;

    void setupUi(QDialog *registration)
    {
        if (registration->objectName().isEmpty())
            registration->setObjectName(QStringLiteral("registration"));
        registration->resize(411, 321);
        label = new QLabel(registration);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 10, 181, 51));
        splitter = new QSplitter(registration);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setGeometry(QRect(90, 90, 206, 100));
        splitter->setOrientation(Qt::Horizontal);
        layoutWidget = new QWidget(splitter);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        LSurname = new QLabel(layoutWidget);
        LSurname->setObjectName(QStringLiteral("LSurname"));

        verticalLayout->addWidget(LSurname);

        LName = new QLabel(layoutWidget);
        LName->setObjectName(QStringLiteral("LName"));
        LName->setTextFormat(Qt::AutoText);

        verticalLayout->addWidget(LName);

        LLogin = new QLabel(layoutWidget);
        LLogin->setObjectName(QStringLiteral("LLogin"));

        verticalLayout->addWidget(LLogin);

        LPassword = new QLabel(layoutWidget);
        LPassword->setObjectName(QStringLiteral("LPassword"));

        verticalLayout->addWidget(LPassword);

        splitter->addWidget(layoutWidget);
        layoutWidget1 = new QWidget(splitter);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        verticalLayout_2 = new QVBoxLayout(layoutWidget1);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(0, 0, 0, 0);
        TSurname = new QLineEdit(layoutWidget1);
        TSurname->setObjectName(QStringLiteral("TSurname"));

        verticalLayout_2->addWidget(TSurname);

        TName = new QLineEdit(layoutWidget1);
        TName->setObjectName(QStringLiteral("TName"));

        verticalLayout_2->addWidget(TName);

        TLogin = new QLineEdit(layoutWidget1);
        TLogin->setObjectName(QStringLiteral("TLogin"));

        verticalLayout_2->addWidget(TLogin);

        TPassword = new QLineEdit(layoutWidget1);
        TPassword->setObjectName(QStringLiteral("TPassword"));
        TPassword->setEchoMode(QLineEdit::Password);

        verticalLayout_2->addWidget(TPassword);

        splitter->addWidget(layoutWidget1);
        layoutWidget2 = new QWidget(registration);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(110, 240, 177, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget2);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Enter = new QPushButton(layoutWidget2);
        Enter->setObjectName(QStringLiteral("Enter"));
        Enter->setEnabled(true);
        Enter->setAutoFillBackground(false);

        horizontalLayout->addWidget(Enter);

        pushButton_2 = new QPushButton(layoutWidget2);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        retranslateUi(registration);

        QMetaObject::connectSlotsByName(registration);
    } // setupUi

    void retranslateUi(QDialog *registration)
    {
        registration->setWindowTitle(QApplication::translate("registration", "Dialog", 0));
        label->setText(QApplication::translate("registration", "<html><head/><body><p><span style=\" font-size:26pt;\">\320\240\320\265\321\224\321\201\321\202\321\200\320\260\321\206\321\226\321\217</span></p></body></html>", 0));
        LSurname->setText(QApplication::translate("registration", "<html><head/><body><p><span style=\" font-size:12pt;\">\320\237\321\200\321\226\320\267\320\262\320\270\321\211\320\265</span></p></body></html>", 0));
        LName->setText(QApplication::translate("registration", "<html><head/><body><p><span style=\" font-size:12pt;\">\320\206\320\274'\321\217</span></p></body></html>", 0));
        LLogin->setText(QApplication::translate("registration", "<html><head/><body><p><span style=\" font-size:12pt;\">\320\233\320\276\320\263\321\226\320\275</span></p></body></html>", 0));
        LPassword->setText(QApplication::translate("registration", "<html><head/><body><p><span style=\" font-size:12pt;\">\320\237\320\260\321\200\320\276\320\273\321\214</span></p></body></html>", 0));
        TPassword->setInputMask(QString());
        Enter->setText(QApplication::translate("registration", "\320\227\320\260\321\200\320\265\321\224\321\201\321\202\321\200\321\203\320\262\320\260\321\202\320\270\321\201\321\217", 0));
        pushButton_2->setText(QApplication::translate("registration", "\320\235\320\260\320\267\320\260\320\264", 0));
    } // retranslateUi

};

namespace Ui {
    class registration: public Ui_registration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATION_H
