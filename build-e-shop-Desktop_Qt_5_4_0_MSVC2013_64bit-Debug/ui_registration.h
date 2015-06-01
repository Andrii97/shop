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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_registration
{
public:
    QLabel *label;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *Enter;
    QPushButton *pushButton_2;
    QSplitter *splitter_3;
    QSplitter *splitter_2;
    QLabel *LSurname;
    QLabel *LName;
    QLabel *LPatronymic;
    QLabel *LLogin;
    QLabel *LPassword;
    QSplitter *splitter;
    QLineEdit *TSurname;
    QLineEdit *TName;
    QLineEdit *TPatronymic;
    QLineEdit *TLogin;
    QLineEdit *TPassword;

    void setupUi(QDialog *registration)
    {
        if (registration->objectName().isEmpty())
            registration->setObjectName(QStringLiteral("registration"));
        registration->resize(411, 321);
        label = new QLabel(registration);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 10, 181, 51));
        layoutWidget = new QWidget(registration);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(110, 260, 177, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        Enter = new QPushButton(layoutWidget);
        Enter->setObjectName(QStringLiteral("Enter"));
        Enter->setEnabled(true);
        Enter->setAutoFillBackground(false);

        horizontalLayout->addWidget(Enter);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        splitter_3 = new QSplitter(registration);
        splitter_3->setObjectName(QStringLiteral("splitter_3"));
        splitter_3->setGeometry(QRect(50, 80, 301, 151));
        splitter_3->setOrientation(Qt::Horizontal);
        splitter_2 = new QSplitter(splitter_3);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        LSurname = new QLabel(splitter_2);
        LSurname->setObjectName(QStringLiteral("LSurname"));
        splitter_2->addWidget(LSurname);
        LName = new QLabel(splitter_2);
        LName->setObjectName(QStringLiteral("LName"));
        LName->setTextFormat(Qt::AutoText);
        splitter_2->addWidget(LName);
        LPatronymic = new QLabel(splitter_2);
        LPatronymic->setObjectName(QStringLiteral("LPatronymic"));
        splitter_2->addWidget(LPatronymic);
        LLogin = new QLabel(splitter_2);
        LLogin->setObjectName(QStringLiteral("LLogin"));
        splitter_2->addWidget(LLogin);
        LPassword = new QLabel(splitter_2);
        LPassword->setObjectName(QStringLiteral("LPassword"));
        splitter_2->addWidget(LPassword);
        splitter_3->addWidget(splitter_2);
        splitter = new QSplitter(splitter_3);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        TSurname = new QLineEdit(splitter);
        TSurname->setObjectName(QStringLiteral("TSurname"));
        TSurname->setStyleSheet(QStringLiteral("font: 12pt \"MS Shell Dlg 2\";"));
        splitter->addWidget(TSurname);
        TName = new QLineEdit(splitter);
        TName->setObjectName(QStringLiteral("TName"));
        TName->setStyleSheet(QStringLiteral("font: 12pt \"MS Shell Dlg 2\";"));
        splitter->addWidget(TName);
        TPatronymic = new QLineEdit(splitter);
        TPatronymic->setObjectName(QStringLiteral("TPatronymic"));
        TPatronymic->setStyleSheet(QStringLiteral("font: 12pt \"MS Shell Dlg 2\";"));
        splitter->addWidget(TPatronymic);
        TLogin = new QLineEdit(splitter);
        TLogin->setObjectName(QStringLiteral("TLogin"));
        TLogin->setStyleSheet(QStringLiteral("font: 12pt \"MS Shell Dlg 2\";"));
        splitter->addWidget(TLogin);
        TPassword = new QLineEdit(splitter);
        TPassword->setObjectName(QStringLiteral("TPassword"));
        TPassword->setStyleSheet(QStringLiteral("font: 12pt \"MS Shell Dlg 2\";"));
        TPassword->setEchoMode(QLineEdit::Password);
        splitter->addWidget(TPassword);
        splitter_3->addWidget(splitter);

        retranslateUi(registration);

        QMetaObject::connectSlotsByName(registration);
    } // setupUi

    void retranslateUi(QDialog *registration)
    {
        registration->setWindowTitle(QApplication::translate("registration", "Dialog", 0));
        label->setText(QApplication::translate("registration", "<html><head/><body><p><span style=\" font-size:26pt;\">\320\240\320\265\321\224\321\201\321\202\321\200\320\260\321\206\321\226\321\217</span></p></body></html>", 0));
        Enter->setText(QApplication::translate("registration", "\320\227\320\260\321\200\320\265\321\224\321\201\321\202\321\200\321\203\320\262\320\260\321\202\320\270\321\201\321\217", 0));
        pushButton_2->setText(QApplication::translate("registration", "\320\235\320\260\320\267\320\260\320\264", 0));
        LSurname->setText(QApplication::translate("registration", "<html><head/><body><p><span style=\" font-size:12pt;\">\320\237\321\200\321\226\320\267\320\262\320\270\321\211\320\265</span></p></body></html>", 0));
        LName->setText(QApplication::translate("registration", "<html><head/><body><p><span style=\" font-size:12pt;\">\320\206\320\274'\321\217</span></p></body></html>", 0));
        LPatronymic->setText(QApplication::translate("registration", "<html><head/><body><p><span style=\" font-size:12pt;\">\320\237\320\276 \320\261\320\260\321\202\321\214\320\272\320\276\320\262\321\226</span></p></body></html>", 0));
        LLogin->setText(QApplication::translate("registration", "<html><head/><body><p><span style=\" font-size:12pt;\">\320\233\320\276\320\263\321\226\320\275</span></p></body></html>", 0));
        LPassword->setText(QApplication::translate("registration", "<html><head/><body><p><span style=\" font-size:12pt;\">\320\237\320\260\321\200\320\276\320\273\321\214</span></p></body></html>", 0));
        TPassword->setInputMask(QString());
    } // retranslateUi

};

namespace Ui {
    class registration: public Ui_registration {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRATION_H
