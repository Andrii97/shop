/********************************************************************************
** Form generated from reading UI file 'buyers.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUYERS_H
#define UI_BUYERS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDial>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTimeEdit>
#include <QtWidgets/QTreeView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_buyers
{
public:
    QLabel *LName;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTabWidget *tabWidget_2;
    QWidget *tab_4;
    QTableView *tableView;
    QWidget *tab_5;
    QWidget *tab_2;
    QGroupBox *groupBoxSearchProduct;
    QPushButton *ButtonSearchProducts;
    QLabel *label;
    QLabel *label_2;
    QComboBox *CCategory;
    QSplitter *splitter_3;
    QSplitter *splitter_2;
    QLabel *label_3;
    QLabel *label_4;
    QSplitter *splitter;
    QDoubleSpinBox *dSBFrom;
    QDoubleSpinBox *dSBTo;
    QSplitter *splitter_5;
    QLabel *aProductName1;
    QLabel *aProductName2;
    QLabel *aProductName3;
    QSplitter *splitter_4;
    QLabel *aImage1;
    QLabel *aImage2;
    QLabel *aImage3;
    QSplitter *splitter_7;
    QLabel *aProductName4;
    QLabel *aProductName5;
    QLabel *aProductName6;
    QSplitter *splitter_6;
    QLabel *aImage4;
    QLabel *aImage5;
    QLabel *aImage6;
    QWidget *tab_3;
    QTreeView *treeView;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QTableView *tableViewSearch;
    QWidget *page_3;
    QTimeEdit *timeEdit;
    QDateEdit *dateEdit;
    QDateTimeEdit *dateTimeEdit;
    QGraphicsView *graphicsView;
    QWidget *page_2;
    QDial *dial;
    QPushButton *next;
    QPushButton *prev;
    QLabel *LPage;
    QWidget *tab_6;
    QPushButton *printReceipt;
    QLabel *label_5;
    QLabel *aBasket;

    void setupUi(QWidget *buyers)
    {
        if (buyers->objectName().isEmpty())
            buyers->setObjectName(QStringLiteral("buyers"));
        buyers->resize(525, 366);
        LName = new QLabel(buyers);
        LName->setObjectName(QStringLiteral("LName"));
        LName->setGeometry(QRect(10, 10, 501, 21));
        tabWidget = new QTabWidget(buyers);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 60, 521, 301));
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tabWidget_2 = new QTabWidget(tab);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(6, 9, 501, 261));
        tabWidget_2->setFocusPolicy(Qt::TabFocus);
        tabWidget_2->setAcceptDrops(false);
        tabWidget_2->setAutoFillBackground(false);
        tabWidget_2->setTabPosition(QTabWidget::North);
        tabWidget_2->setTabShape(QTabWidget::Triangular);
        tabWidget_2->setUsesScrollButtons(true);
        tabWidget_2->setDocumentMode(false);
        tabWidget_2->setTabsClosable(false);
        tabWidget_2->setMovable(false);
        tabWidget_2->setTabBarAutoHide(false);
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        tableView = new QTableView(tab_4);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(10, 10, 481, 231));
        tabWidget_2->addTab(tab_4, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        tabWidget_2->addTab(tab_5, QString());
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        groupBoxSearchProduct = new QGroupBox(tab_2);
        groupBoxSearchProduct->setObjectName(QStringLiteral("groupBoxSearchProduct"));
        groupBoxSearchProduct->setGeometry(QRect(0, 0, 171, 271));
        ButtonSearchProducts = new QPushButton(groupBoxSearchProduct);
        ButtonSearchProducts->setObjectName(QStringLiteral("ButtonSearchProducts"));
        ButtonSearchProducts->setGeometry(QRect(10, 240, 151, 23));
        label = new QLabel(groupBoxSearchProduct);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(60, 90, 51, 31));
        label_2 = new QLabel(groupBoxSearchProduct);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(40, 20, 91, 31));
        CCategory = new QComboBox(groupBoxSearchProduct);
        CCategory->setObjectName(QStringLiteral("CCategory"));
        CCategory->setGeometry(QRect(10, 60, 141, 21));
        splitter_3 = new QSplitter(groupBoxSearchProduct);
        splitter_3->setObjectName(QStringLiteral("splitter_3"));
        splitter_3->setGeometry(QRect(10, 120, 141, 51));
        splitter_3->setOrientation(Qt::Horizontal);
        splitter_2 = new QSplitter(splitter_3);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        label_3 = new QLabel(splitter_2);
        label_3->setObjectName(QStringLiteral("label_3"));
        splitter_2->addWidget(label_3);
        label_4 = new QLabel(splitter_2);
        label_4->setObjectName(QStringLiteral("label_4"));
        splitter_2->addWidget(label_4);
        splitter_3->addWidget(splitter_2);
        splitter = new QSplitter(splitter_3);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        dSBFrom = new QDoubleSpinBox(splitter);
        dSBFrom->setObjectName(QStringLiteral("dSBFrom"));
        dSBFrom->setMaximum(1e+06);
        splitter->addWidget(dSBFrom);
        dSBTo = new QDoubleSpinBox(splitter);
        dSBTo->setObjectName(QStringLiteral("dSBTo"));
        dSBTo->setWrapping(false);
        dSBTo->setAccelerated(false);
        dSBTo->setMaximum(1e+06);
        dSBTo->setValue(1e+06);
        splitter->addWidget(dSBTo);
        splitter_3->addWidget(splitter);
        splitter_5 = new QSplitter(tab_2);
        splitter_5->setObjectName(QStringLiteral("splitter_5"));
        splitter_5->setGeometry(QRect(190, 110, 311, 16));
        splitter_5->setOrientation(Qt::Horizontal);
        aProductName1 = new QLabel(splitter_5);
        aProductName1->setObjectName(QStringLiteral("aProductName1"));
        splitter_5->addWidget(aProductName1);
        aProductName2 = new QLabel(splitter_5);
        aProductName2->setObjectName(QStringLiteral("aProductName2"));
        splitter_5->addWidget(aProductName2);
        aProductName3 = new QLabel(splitter_5);
        aProductName3->setObjectName(QStringLiteral("aProductName3"));
        splitter_5->addWidget(aProductName3);
        splitter_4 = new QSplitter(tab_2);
        splitter_4->setObjectName(QStringLiteral("splitter_4"));
        splitter_4->setGeometry(QRect(190, 20, 311, 91));
        splitter_4->setOrientation(Qt::Horizontal);
        aImage1 = new QLabel(splitter_4);
        aImage1->setObjectName(QStringLiteral("aImage1"));
        splitter_4->addWidget(aImage1);
        aImage2 = new QLabel(splitter_4);
        aImage2->setObjectName(QStringLiteral("aImage2"));
        splitter_4->addWidget(aImage2);
        aImage3 = new QLabel(splitter_4);
        aImage3->setObjectName(QStringLiteral("aImage3"));
        splitter_4->addWidget(aImage3);
        splitter_7 = new QSplitter(tab_2);
        splitter_7->setObjectName(QStringLiteral("splitter_7"));
        splitter_7->setGeometry(QRect(190, 220, 311, 16));
        splitter_7->setOrientation(Qt::Horizontal);
        aProductName4 = new QLabel(splitter_7);
        aProductName4->setObjectName(QStringLiteral("aProductName4"));
        splitter_7->addWidget(aProductName4);
        aProductName5 = new QLabel(splitter_7);
        aProductName5->setObjectName(QStringLiteral("aProductName5"));
        splitter_7->addWidget(aProductName5);
        aProductName6 = new QLabel(splitter_7);
        aProductName6->setObjectName(QStringLiteral("aProductName6"));
        splitter_7->addWidget(aProductName6);
        splitter_6 = new QSplitter(tab_2);
        splitter_6->setObjectName(QStringLiteral("splitter_6"));
        splitter_6->setGeometry(QRect(190, 130, 311, 91));
        splitter_6->setOrientation(Qt::Horizontal);
        aImage4 = new QLabel(splitter_6);
        aImage4->setObjectName(QStringLiteral("aImage4"));
        splitter_6->addWidget(aImage4);
        aImage5 = new QLabel(splitter_6);
        aImage5->setObjectName(QStringLiteral("aImage5"));
        splitter_6->addWidget(aImage5);
        aImage6 = new QLabel(splitter_6);
        aImage6->setObjectName(QStringLiteral("aImage6"));
        splitter_6->addWidget(aImage6);
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        treeView = new QTreeView(tab_3);
        treeView->setObjectName(QStringLiteral("treeView"));
        treeView->setGeometry(QRect(0, 0, 121, 281));
        stackedWidget = new QStackedWidget(tab_3);
        stackedWidget->setObjectName(QStringLiteral("stackedWidget"));
        stackedWidget->setGeometry(QRect(130, 10, 381, 231));
        page = new QWidget();
        page->setObjectName(QStringLiteral("page"));
        tableViewSearch = new QTableView(page);
        tableViewSearch->setObjectName(QStringLiteral("tableViewSearch"));
        tableViewSearch->setGeometry(QRect(60, 60, 301, 141));
        stackedWidget->addWidget(page);
        page_3 = new QWidget();
        page_3->setObjectName(QStringLiteral("page_3"));
        timeEdit = new QTimeEdit(page_3);
        timeEdit->setObjectName(QStringLiteral("timeEdit"));
        timeEdit->setGeometry(QRect(110, 60, 118, 22));
        dateEdit = new QDateEdit(page_3);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(120, 110, 110, 22));
        dateTimeEdit = new QDateTimeEdit(page_3);
        dateTimeEdit->setObjectName(QStringLiteral("dateTimeEdit"));
        dateTimeEdit->setGeometry(QRect(120, 90, 194, 22));
        graphicsView = new QGraphicsView(page_3);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(20, 30, 51, 21));
        stackedWidget->addWidget(page_3);
        page_2 = new QWidget();
        page_2->setObjectName(QStringLiteral("page_2"));
        dial = new QDial(page_2);
        dial->setObjectName(QStringLiteral("dial"));
        dial->setGeometry(QRect(200, 60, 50, 64));
        stackedWidget->addWidget(page_2);
        next = new QPushButton(tab_3);
        next->setObjectName(QStringLiteral("next"));
        next->setGeometry(QRect(400, 240, 75, 23));
        prev = new QPushButton(tab_3);
        prev->setObjectName(QStringLiteral("prev"));
        prev->setGeometry(QRect(180, 240, 75, 23));
        LPage = new QLabel(tab_3);
        LPage->setObjectName(QStringLiteral("LPage"));
        LPage->setGeometry(QRect(290, 240, 51, 21));
        tabWidget->addTab(tab_3, QString());
        tab_6 = new QWidget();
        tab_6->setObjectName(QStringLiteral("tab_6"));
        printReceipt = new QPushButton(tab_6);
        printReceipt->setObjectName(QStringLiteral("printReceipt"));
        printReceipt->setGeometry(QRect(230, 230, 81, 31));
        label_5 = new QLabel(tab_6);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(200, 20, 121, 41));
        tabWidget->addTab(tab_6, QString());
        aBasket = new QLabel(buyers);
        aBasket->setObjectName(QStringLiteral("aBasket"));
        aBasket->setGeometry(QRect(430, 30, 91, 41));
        tabWidget->raise();
        LName->raise();
        aBasket->raise();

        retranslateUi(buyers);

        tabWidget->setCurrentIndex(3);
        tabWidget_2->setCurrentIndex(0);
        stackedWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(buyers);
    } // setupUi

    void retranslateUi(QWidget *buyers)
    {
        buyers->setWindowTitle(QApplication::translate("buyers", "Form", 0));
        LName->setText(QApplication::translate("buyers", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; font-style:italic; text-decoration: underline;\">TextLabel</span></p></body></html>", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_4), QApplication::translate("buyers", "\320\236\321\201\320\276\320\261\320\270\321\201\321\202\320\260 \321\226\320\275\321\204\320\276\321\200\320\274\320\260\321\206\321\226\321\217", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(tab_5), QApplication::translate("buyers", "\320\241\320\277\320\270\321\201\320\276\320\272 \320\277\320\276\320\272\321\203\320\277\320\276\320\272", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("buyers", "\320\236\321\201\320\276\320\261\320\270\321\201\321\202\320\270\320\271 \320\272\320\260\320\261\321\226\320\275\320\265\321\202", 0));
        groupBoxSearchProduct->setTitle(QApplication::translate("buyers", "\320\245\320\260\321\200\320\260\320\272\321\202\320\265\321\200\320\270\321\201\321\202\320\270\320\272\320\270", 0));
        ButtonSearchProducts->setText(QApplication::translate("buyers", "\320\237\321\226\320\264\321\226\320\261\321\200\320\260\321\202\320\270 \321\202\320\276\320\262\320\260\321\200", 0));
        label->setText(QApplication::translate("buyers", "<html><head/><body><p><span style=\" font-size:14pt;\">\320\246\321\226\320\275\320\260</span></p></body></html>", 0));
        label_2->setText(QApplication::translate("buyers", "<html><head/><body><p><span style=\" font-size:14pt;\">\320\232\320\260\321\202\320\265\320\263\320\276\321\200\321\226\321\217</span></p></body></html>", 0));
        label_3->setText(QApplication::translate("buyers", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\222\321\226\320\264</span></p></body></html>", 0));
        label_4->setText(QApplication::translate("buyers", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\224\320\276</span></p></body></html>", 0));
        aProductName1->setText(QApplication::translate("buyers", "TextLabel", 0));
        aProductName2->setText(QApplication::translate("buyers", "TextLabel", 0));
        aProductName3->setText(QApplication::translate("buyers", "TextLabel", 0));
        aImage1->setText(QApplication::translate("buyers", "TextLabel", 0));
        aImage2->setText(QApplication::translate("buyers", "TextLabel", 0));
        aImage3->setText(QApplication::translate("buyers", "TextLabel", 0));
        aProductName4->setText(QApplication::translate("buyers", "TextLabel", 0));
        aProductName5->setText(QApplication::translate("buyers", "TextLabel", 0));
        aProductName6->setText(QApplication::translate("buyers", "TextLabel", 0));
        aImage4->setText(QApplication::translate("buyers", "TextLabel", 0));
        aImage5->setText(QApplication::translate("buyers", "TextLabel", 0));
        aImage6->setText(QApplication::translate("buyers", "TextLabel", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("buyers", "\320\237\320\276\320\272\321\203\320\277\320\272\320\260 \321\202\320\276\320\262\320\260\321\200\321\226\320\262", 0));
        next->setText(QApplication::translate("buyers", "\320\224\320\260\320\273\321\226", 0));
        prev->setText(QApplication::translate("buyers", "\320\235\320\260\320\267\320\260\320\264", 0));
        LPage->setText(QApplication::translate("buyers", "\321\202\320\265\320\272\321\201\321\202", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("buyers", "Page", 0));
        printReceipt->setText(QApplication::translate("buyers", "\320\232\321\203\320\277\320\270\321\202\320\270", 0));
        label_5->setText(QApplication::translate("buyers", "<html><head/><body><p><span style=\" font-size:16pt;\">\320\222\320\260\321\210 \320\272\320\276\321\210\320\270\320\272</span></p></body></html>", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_6), QApplication::translate("buyers", "\320\232\320\276\321\210\320\270\320\272", 0));
        aBasket->setText(QApplication::translate("buyers", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class buyers: public Ui_buyers {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUYERS_H
