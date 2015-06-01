/********************************************************************************
** Form generated from reading UI file 'manager.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANAGER_H
#define UI_MANAGER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QScrollArea>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_manager
{
public:
    QTabWidget *tabWidget;
    QWidget *statistics;
    QWidget *products;
    QTabWidget *tabWidget_2;
    QWidget *add;
    QLabel *label_5;
    QPushButton *CreateNewProduct;
    QSplitter *splitter_14;
    QSplitter *splitter_7;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *LLength;
    QLabel *LWidth;
    QLabel *LHeight;
    QLabel *LCategory;
    QSplitter *splitter_13;
    QLineEdit *TName;
    QLineEdit *TPhoto;
    QDoubleSpinBox *dSpinBoxLength;
    QDoubleSpinBox *dSpinBoxWidth;
    QDoubleSpinBox *dSpinBoxHeight;
    QComboBox *CCategory;
    QWidget *set_properties;
    QPushButton *Enter;
    QSplitter *splitter_3;
    QSplitter *splitter;
    QLabel *label;
    QComboBox *CName;
    QSplitter *splitter_2;
    QLabel *label_2;
    QComboBox *CProperties;
    QSplitter *splitter_6;
    QSplitter *splitter_4;
    QLabel *LProperties;
    QLabel *LValue;
    QSplitter *splitter_5;
    QLineEdit *TProperties;
    QLineEdit *TValue;
    QWidget *composition;
    QTabWidget *tabWidget_3;
    QWidget *tab_2;
    QSplitter *splitter_11;
    QPushButton *addProductToWarehouse;
    QPushButton *addToTheDeliverySchedule;
    QSplitter *splitter_9;
    QComboBox *CProduct;
    QComboBox *CCurrency;
    QDoubleSpinBox *dSpinBoxPrice;
    QLabel *LRateValue;
    QSpinBox *spinBoxNumber;
    QSplitter *splitter_8;
    QLabel *LProduct;
    QLabel *LCurrency;
    QLabel *LPrice;
    QLabel *LRate;
    QLabel *lNumber;
    QWidget *tab_5;
    QTableWidget *tableCurrency;
    QSplitter *splitter_12;
    QSplitter *splitter_10;
    QComboBox *CChangeCurrency;
    QDoubleSpinBox *dSpinBoxChangeCurrency;
    QPushButton *SetCurrency;
    QWidget *tab_3;
    QScrollArea *scrollArea;
    QWidget *scrollAreaWidgetContents;
    QTextEdit *textEdit;
    QWidget *tab_4;
    QGridLayout *gridLayout;
    QTableWidget *tableProducts;
    QPushButton *RefreshProductInWarehouse;
    QWidget *tab;
    QTableWidget *tableWidget;
    QPushButton *pushButton_2;
    QLabel *LName;

    void setupUi(QWidget *manager)
    {
        if (manager->objectName().isEmpty())
            manager->setObjectName(QStringLiteral("manager"));
        manager->resize(526, 364);
        tabWidget = new QTabWidget(manager);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(10, 50, 511, 311));
        tabWidget->setTabPosition(QTabWidget::North);
        tabWidget->setTabShape(QTabWidget::Triangular);
        tabWidget->setElideMode(Qt::ElideNone);
        tabWidget->setTabsClosable(false);
        tabWidget->setMovable(false);
        tabWidget->setTabBarAutoHide(false);
        statistics = new QWidget();
        statistics->setObjectName(QStringLiteral("statistics"));
        tabWidget->addTab(statistics, QString());
        products = new QWidget();
        products->setObjectName(QStringLiteral("products"));
        tabWidget_2 = new QTabWidget(products);
        tabWidget_2->setObjectName(QStringLiteral("tabWidget_2"));
        tabWidget_2->setGeometry(QRect(0, 0, 511, 301));
        add = new QWidget();
        add->setObjectName(QStringLiteral("add"));
        label_5 = new QLabel(add);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(100, 0, 301, 51));
        label_5->setStyleSheet(QStringLiteral(""));
        CreateNewProduct = new QPushButton(add);
        CreateNewProduct->setObjectName(QStringLiteral("CreateNewProduct"));
        CreateNewProduct->setGeometry(QRect(200, 230, 75, 23));
        splitter_14 = new QSplitter(add);
        splitter_14->setObjectName(QStringLiteral("splitter_14"));
        splitter_14->setGeometry(QRect(100, 50, 301, 161));
        splitter_14->setOrientation(Qt::Horizontal);
        splitter_7 = new QSplitter(splitter_14);
        splitter_7->setObjectName(QStringLiteral("splitter_7"));
        splitter_7->setOrientation(Qt::Vertical);
        label_3 = new QLabel(splitter_7);
        label_3->setObjectName(QStringLiteral("label_3"));
        splitter_7->addWidget(label_3);
        label_4 = new QLabel(splitter_7);
        label_4->setObjectName(QStringLiteral("label_4"));
        splitter_7->addWidget(label_4);
        LLength = new QLabel(splitter_7);
        LLength->setObjectName(QStringLiteral("LLength"));
        splitter_7->addWidget(LLength);
        LWidth = new QLabel(splitter_7);
        LWidth->setObjectName(QStringLiteral("LWidth"));
        splitter_7->addWidget(LWidth);
        LHeight = new QLabel(splitter_7);
        LHeight->setObjectName(QStringLiteral("LHeight"));
        splitter_7->addWidget(LHeight);
        LCategory = new QLabel(splitter_7);
        LCategory->setObjectName(QStringLiteral("LCategory"));
        splitter_7->addWidget(LCategory);
        splitter_14->addWidget(splitter_7);
        splitter_13 = new QSplitter(splitter_14);
        splitter_13->setObjectName(QStringLiteral("splitter_13"));
        splitter_13->setOrientation(Qt::Vertical);
        TName = new QLineEdit(splitter_13);
        TName->setObjectName(QStringLiteral("TName"));
        TName->setStyleSheet(QStringLiteral("font: 75 italic 12pt \"MS Shell Dlg 2\";"));
        splitter_13->addWidget(TName);
        TPhoto = new QLineEdit(splitter_13);
        TPhoto->setObjectName(QStringLiteral("TPhoto"));
        TPhoto->setStyleSheet(QStringLiteral("font: 75 italic 12pt \"MS Shell Dlg 2\";"));
        splitter_13->addWidget(TPhoto);
        dSpinBoxLength = new QDoubleSpinBox(splitter_13);
        dSpinBoxLength->setObjectName(QStringLiteral("dSpinBoxLength"));
        splitter_13->addWidget(dSpinBoxLength);
        dSpinBoxWidth = new QDoubleSpinBox(splitter_13);
        dSpinBoxWidth->setObjectName(QStringLiteral("dSpinBoxWidth"));
        splitter_13->addWidget(dSpinBoxWidth);
        dSpinBoxHeight = new QDoubleSpinBox(splitter_13);
        dSpinBoxHeight->setObjectName(QStringLiteral("dSpinBoxHeight"));
        splitter_13->addWidget(dSpinBoxHeight);
        CCategory = new QComboBox(splitter_13);
        CCategory->setObjectName(QStringLiteral("CCategory"));
        splitter_13->addWidget(CCategory);
        splitter_14->addWidget(splitter_13);
        tabWidget_2->addTab(add, QString());
        set_properties = new QWidget();
        set_properties->setObjectName(QStringLiteral("set_properties"));
        Enter = new QPushButton(set_properties);
        Enter->setObjectName(QStringLiteral("Enter"));
        Enter->setGeometry(QRect(220, 240, 75, 23));
        splitter_3 = new QSplitter(set_properties);
        splitter_3->setObjectName(QStringLiteral("splitter_3"));
        splitter_3->setGeometry(QRect(70, 10, 351, 41));
        splitter_3->setOrientation(Qt::Horizontal);
        splitter = new QSplitter(splitter_3);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        label = new QLabel(splitter);
        label->setObjectName(QStringLiteral("label"));
        splitter->addWidget(label);
        CName = new QComboBox(splitter);
        CName->setObjectName(QStringLiteral("CName"));
        splitter->addWidget(CName);
        splitter_3->addWidget(splitter);
        splitter_2 = new QSplitter(splitter_3);
        splitter_2->setObjectName(QStringLiteral("splitter_2"));
        splitter_2->setOrientation(Qt::Vertical);
        label_2 = new QLabel(splitter_2);
        label_2->setObjectName(QStringLiteral("label_2"));
        splitter_2->addWidget(label_2);
        CProperties = new QComboBox(splitter_2);
        CProperties->setObjectName(QStringLiteral("CProperties"));
        CProperties->setFrame(true);
        splitter_2->addWidget(CProperties);
        splitter_3->addWidget(splitter_2);
        splitter_6 = new QSplitter(set_properties);
        splitter_6->setObjectName(QStringLiteral("splitter_6"));
        splitter_6->setGeometry(QRect(70, 60, 202, 40));
        splitter_6->setOrientation(Qt::Horizontal);
        splitter_4 = new QSplitter(splitter_6);
        splitter_4->setObjectName(QStringLiteral("splitter_4"));
        splitter_4->setOrientation(Qt::Vertical);
        LProperties = new QLabel(splitter_4);
        LProperties->setObjectName(QStringLiteral("LProperties"));
        splitter_4->addWidget(LProperties);
        LValue = new QLabel(splitter_4);
        LValue->setObjectName(QStringLiteral("LValue"));
        splitter_4->addWidget(LValue);
        splitter_6->addWidget(splitter_4);
        splitter_5 = new QSplitter(splitter_6);
        splitter_5->setObjectName(QStringLiteral("splitter_5"));
        splitter_5->setOrientation(Qt::Vertical);
        TProperties = new QLineEdit(splitter_5);
        TProperties->setObjectName(QStringLiteral("TProperties"));
        TProperties->setEnabled(true);
        splitter_5->addWidget(TProperties);
        TValue = new QLineEdit(splitter_5);
        TValue->setObjectName(QStringLiteral("TValue"));
        splitter_5->addWidget(TValue);
        splitter_6->addWidget(splitter_5);
        tabWidget_2->addTab(set_properties, QString());
        tabWidget->addTab(products, QString());
        composition = new QWidget();
        composition->setObjectName(QStringLiteral("composition"));
        tabWidget_3 = new QTabWidget(composition);
        tabWidget_3->setObjectName(QStringLiteral("tabWidget_3"));
        tabWidget_3->setGeometry(QRect(0, 0, 501, 291));
        tab_2 = new QWidget();
        tab_2->setObjectName(QStringLiteral("tab_2"));
        splitter_11 = new QSplitter(tab_2);
        splitter_11->setObjectName(QStringLiteral("splitter_11"));
        splitter_11->setGeometry(QRect(80, 220, 321, 23));
        splitter_11->setOrientation(Qt::Horizontal);
        addProductToWarehouse = new QPushButton(splitter_11);
        addProductToWarehouse->setObjectName(QStringLiteral("addProductToWarehouse"));
        splitter_11->addWidget(addProductToWarehouse);
        addToTheDeliverySchedule = new QPushButton(splitter_11);
        addToTheDeliverySchedule->setObjectName(QStringLiteral("addToTheDeliverySchedule"));
        splitter_11->addWidget(addToTheDeliverySchedule);
        splitter_9 = new QSplitter(tab_2);
        splitter_9->setObjectName(QStringLiteral("splitter_9"));
        splitter_9->setGeometry(QRect(250, 40, 231, 151));
        splitter_9->setOrientation(Qt::Vertical);
        CProduct = new QComboBox(splitter_9);
        CProduct->setObjectName(QStringLiteral("CProduct"));
        CProduct->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));
        splitter_9->addWidget(CProduct);
        CCurrency = new QComboBox(splitter_9);
        CCurrency->setObjectName(QStringLiteral("CCurrency"));
        CCurrency->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));
        splitter_9->addWidget(CCurrency);
        dSpinBoxPrice = new QDoubleSpinBox(splitter_9);
        dSpinBoxPrice->setObjectName(QStringLiteral("dSpinBoxPrice"));
        dSpinBoxPrice->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));
        dSpinBoxPrice->setMaximum(9999.99);
        splitter_9->addWidget(dSpinBoxPrice);
        LRateValue = new QLabel(splitter_9);
        LRateValue->setObjectName(QStringLiteral("LRateValue"));
        LRateValue->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));
        splitter_9->addWidget(LRateValue);
        spinBoxNumber = new QSpinBox(splitter_9);
        spinBoxNumber->setObjectName(QStringLiteral("spinBoxNumber"));
        spinBoxNumber->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));
        spinBoxNumber->setMaximum(9999);
        splitter_9->addWidget(spinBoxNumber);
        splitter_8 = new QSplitter(tab_2);
        splitter_8->setObjectName(QStringLiteral("splitter_8"));
        splitter_8->setGeometry(QRect(30, 40, 191, 151));
        splitter_8->setOrientation(Qt::Vertical);
        LProduct = new QLabel(splitter_8);
        LProduct->setObjectName(QStringLiteral("LProduct"));
        splitter_8->addWidget(LProduct);
        LCurrency = new QLabel(splitter_8);
        LCurrency->setObjectName(QStringLiteral("LCurrency"));
        splitter_8->addWidget(LCurrency);
        LPrice = new QLabel(splitter_8);
        LPrice->setObjectName(QStringLiteral("LPrice"));
        splitter_8->addWidget(LPrice);
        LRate = new QLabel(splitter_8);
        LRate->setObjectName(QStringLiteral("LRate"));
        splitter_8->addWidget(LRate);
        lNumber = new QLabel(splitter_8);
        lNumber->setObjectName(QStringLiteral("lNumber"));
        splitter_8->addWidget(lNumber);
        tabWidget_3->addTab(tab_2, QString());
        tab_5 = new QWidget();
        tab_5->setObjectName(QStringLiteral("tab_5"));
        tableCurrency = new QTableWidget(tab_5);
        tableCurrency->setObjectName(QStringLiteral("tableCurrency"));
        tableCurrency->setGeometry(QRect(10, 10, 471, 191));
        tableCurrency->setStyleSheet(QStringLiteral("font: 11pt \"MS Shell Dlg 2\";"));
        splitter_12 = new QSplitter(tab_5);
        splitter_12->setObjectName(QStringLiteral("splitter_12"));
        splitter_12->setGeometry(QRect(10, 210, 471, 51));
        splitter_12->setOrientation(Qt::Vertical);
        splitter_10 = new QSplitter(splitter_12);
        splitter_10->setObjectName(QStringLiteral("splitter_10"));
        splitter_10->setOrientation(Qt::Horizontal);
        CChangeCurrency = new QComboBox(splitter_10);
        CChangeCurrency->setObjectName(QStringLiteral("CChangeCurrency"));
        splitter_10->addWidget(CChangeCurrency);
        dSpinBoxChangeCurrency = new QDoubleSpinBox(splitter_10);
        dSpinBoxChangeCurrency->setObjectName(QStringLiteral("dSpinBoxChangeCurrency"));
        dSpinBoxChangeCurrency->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));
        dSpinBoxChangeCurrency->setMaximum(9999.99);
        splitter_10->addWidget(dSpinBoxChangeCurrency);
        splitter_12->addWidget(splitter_10);
        SetCurrency = new QPushButton(splitter_12);
        SetCurrency->setObjectName(QStringLiteral("SetCurrency"));
        SetCurrency->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));
        splitter_12->addWidget(SetCurrency);
        tabWidget_3->addTab(tab_5, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QStringLiteral("tab_3"));
        scrollArea = new QScrollArea(tab_3);
        scrollArea->setObjectName(QStringLiteral("scrollArea"));
        scrollArea->setGeometry(QRect(20, 10, 241, 141));
        scrollArea->setWidgetResizable(true);
        scrollAreaWidgetContents = new QWidget();
        scrollAreaWidgetContents->setObjectName(QStringLiteral("scrollAreaWidgetContents"));
        scrollAreaWidgetContents->setGeometry(QRect(0, 0, 239, 139));
        textEdit = new QTextEdit(scrollAreaWidgetContents);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(0, 10, 251, 161));
        scrollArea->setWidget(scrollAreaWidgetContents);
        tabWidget_3->addTab(tab_3, QString());
        tab_4 = new QWidget();
        tab_4->setObjectName(QStringLiteral("tab_4"));
        gridLayout = new QGridLayout(tab_4);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        tableProducts = new QTableWidget(tab_4);
        tableProducts->setObjectName(QStringLiteral("tableProducts"));
        tableProducts->setStyleSheet(QStringLiteral("font: 11pt \"MS Shell Dlg 2\";"));

        gridLayout->addWidget(tableProducts, 0, 0, 1, 1);

        RefreshProductInWarehouse = new QPushButton(tab_4);
        RefreshProductInWarehouse->setObjectName(QStringLiteral("RefreshProductInWarehouse"));
        RefreshProductInWarehouse->setStyleSheet(QStringLiteral("font: 10pt \"MS Shell Dlg 2\";"));

        gridLayout->addWidget(RefreshProductInWarehouse, 1, 0, 1, 1);

        tabWidget_3->addTab(tab_4, QString());
        tabWidget->addTab(composition, QString());
        tab = new QWidget();
        tab->setObjectName(QStringLiteral("tab"));
        tableWidget = new QTableWidget(tab);
        if (tableWidget->columnCount() < 1)
            tableWidget->setColumnCount(1);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem);
        if (tableWidget->rowCount() < 5)
            tableWidget->setRowCount(5);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem5);
        QFont font;
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        __qtablewidgetitem6->setFont(font);
        tableWidget->setItem(0, 0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        __qtablewidgetitem7->setFont(font);
        tableWidget->setItem(1, 0, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        __qtablewidgetitem8->setFont(font);
        tableWidget->setItem(2, 0, __qtablewidgetitem8);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(120, 20, 211, 181));
        tableWidget->setStyleSheet(QStringLiteral("font: 12pt \"MS Shell Dlg 2\";"));
        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(200, 230, 75, 23));
        tabWidget->addTab(tab, QString());
        LName = new QLabel(manager);
        LName->setObjectName(QStringLiteral("LName"));
        LName->setGeometry(QRect(10, 10, 501, 21));

        retranslateUi(manager);

        tabWidget->setCurrentIndex(1);
        tabWidget_2->setCurrentIndex(0);
        tabWidget_3->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(manager);
    } // setupUi

    void retranslateUi(QWidget *manager)
    {
        manager->setWindowTitle(QApplication::translate("manager", "Form", 0));
        tabWidget->setTabText(tabWidget->indexOf(statistics), QApplication::translate("manager", "\320\241\321\202\320\260\321\202\320\270\321\201\321\202\320\270\320\272\320\260", 0));
        label_5->setText(QApplication::translate("manager", "<html><head/><body><p><span style=\" font-size:16pt; font-weight:600; font-style:italic;\">\320\224\320\276\320\264\320\260\320\262\320\260\320\275\320\275\321\217 \320\275\320\276\320\262\320\276\320\263\320\276 \321\202\320\276\320\262\320\260\321\200\321\203</span></p></body></html>", 0));
        CreateNewProduct->setText(QApplication::translate("manager", "\320\224\320\276\320\264\320\260\321\202\320\270", 0));
        label_3->setText(QApplication::translate("manager", "<html><head/><body><p><span style=\" font-size:12pt;\">\320\235\320\260\320\267\320\262\320\260</span></p></body></html>", 0));
        label_4->setText(QApplication::translate("manager", "<html><head/><body><p><span style=\" font-size:12pt;\">\320\244\320\276\321\202\320\276</span></p></body></html>", 0));
        LLength->setText(QApplication::translate("manager", "<html><head/><body><p><span style=\" font-size:12pt;\">\320\224\320\276\320\262\320\266\320\270\320\275\320\260</span></p></body></html>", 0));
        LWidth->setText(QApplication::translate("manager", "<html><head/><body><p><span style=\" font-size:12pt;\">\320\250\320\270\321\200\320\270\320\275\320\260</span></p></body></html>", 0));
        LHeight->setText(QApplication::translate("manager", "<html><head/><body><p><span style=\" font-size:12pt;\">\320\222\320\270\321\201\320\276\321\202\320\260</span></p></body></html>", 0));
        LCategory->setText(QApplication::translate("manager", "<html><head/><body><p><span style=\" font-size:12pt;\">\320\232\320\260\321\202\320\265\320\263\320\276\321\200\321\226\321\217</span></p></body></html>", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(add), QApplication::translate("manager", "\320\224\320\276\320\264\320\260\321\202\320\270", 0));
        Enter->setText(QApplication::translate("manager", "\320\224\320\276\320\264\320\260\321\202\320\270", 0));
        label->setText(QApplication::translate("manager", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\235\320\260\320\267\320\262\320\260 \321\202\320\276\320\262\320\260\321\200\321\203</span></p></body></html>", 0));
        label_2->setText(QApplication::translate("manager", "<html><head/><body><p><span style=\" font-size:10pt;\">\320\222\320\273\320\260\321\201\321\202\320\270\320\262\321\226\321\201\321\202\321\214</span></p></body></html>", 0));
        LProperties->setText(QApplication::translate("manager", "<html><head/><body><p><span style=\" font-size:12pt;\">\320\235\320\260\320\267\320\262\320\260</span></p></body></html>", 0));
        LValue->setText(QApplication::translate("manager", "<html><head/><body><p><span style=\" font-size:12pt;\">\320\227\320\275\320\260\321\207\320\265\320\275\320\275\321\217</span></p></body></html>", 0));
        tabWidget_2->setTabText(tabWidget_2->indexOf(set_properties), QApplication::translate("manager", "\320\227\320\260\320\264\320\260\321\202\320\270 \320\262\320\273\320\260\321\201\321\202\320\270\320\262\321\226\321\201\321\202\321\214", 0));
        tabWidget->setTabText(tabWidget->indexOf(products), QApplication::translate("manager", "\320\242\320\276\320\262\320\260\321\200\320\270", 0));
        addProductToWarehouse->setText(QApplication::translate("manager", "\320\224\320\276\320\264\320\260\321\202\320\270", 0));
        addToTheDeliverySchedule->setText(QApplication::translate("manager", "\320\227\320\260\320\277\320\270\321\201\320\260\321\202\320\270 \320\262 \320\263\321\200\320\260\321\204\321\226\320\272 \320\277\320\276\321\201\321\202\320\260\320\262\320\276\320\272", 0));
        LRateValue->setText(QApplication::translate("manager", "<html><head/><body><p><span style=\" font-size:12pt;\">TextLabel</span></p></body></html>", 0));
        LProduct->setText(QApplication::translate("manager", "<html><head/><body><p><span style=\" font-size:14pt;\">\320\242\320\276\320\262\320\260\321\200</span></p></body></html>", 0));
        LCurrency->setText(QApplication::translate("manager", "<html><head/><body><p><span style=\" font-size:14pt;\">\320\236\320\261\320\265\321\200\321\226\321\202\321\214 \320\262\320\260\320\273\321\216\321\202\321\203</span></p></body></html>", 0));
        LPrice->setText(QApplication::translate("manager", "<html><head/><body><p><span style=\" font-size:14pt;\">\320\246\321\226\320\275\320\260</span></p></body></html>", 0));
        LRate->setText(QApplication::translate("manager", "<html><head/><body><p><span style=\" font-size:14pt;\">\320\232\321\203\321\200\321\201 \320\262\321\226\320\264\320\275\320\276\321\201\320\275\320\276 \320\263\321\200\320\270\320\262\320\275\321\226</span></p></body></html>", 0));
        lNumber->setText(QApplication::translate("manager", "<html><head/><body><p><span style=\" font-size:14pt;\">\320\232\321\226\320\273\321\214\320\272\321\226\321\201\321\202\321\214</span></p></body></html>", 0));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_2), QApplication::translate("manager", "\320\224\320\276\320\264\320\260\321\202\320\270 \321\202\320\276\320\262\320\260\321\200", 0));
        SetCurrency->setText(QApplication::translate("manager", "\320\222\321\201\321\202\320\260\320\275\320\276\320\262\320\270\321\202\320\270 \320\275\320\276\320\262\320\270\320\271 \320\272\321\203\321\200\321\201", 0));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_5), QApplication::translate("manager", "\320\227\320\274\321\226\320\275\320\270\321\202\320\270 \320\272\321\203\321\200\321\201 \320\262\320\260\320\273\321\216\321\202", 0));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_3), QApplication::translate("manager", "\320\223\321\200\320\260\321\204\321\226\320\272 \320\277\320\276\321\201\321\202\320\260\320\262\320\276\320\272", 0));
        RefreshProductInWarehouse->setText(QApplication::translate("manager", "\320\236\320\275\320\276\320\262\320\270\321\202\320\270", 0));
        tabWidget_3->setTabText(tabWidget_3->indexOf(tab_4), QApplication::translate("manager", "\320\242\320\276\320\262\320\260\321\200\320\270 \320\275\320\260 \321\201\320\272\320\273\320\260\320\264\321\226", 0));
        tabWidget->setTabText(tabWidget->indexOf(composition), QApplication::translate("manager", "\320\241\320\272\320\273\320\260\320\264", 0));
        QTableWidgetItem *___qtablewidgetitem = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("manager", "\320\227\320\275\320\260\321\207\320\265\320\275\320\275\321\217", 0));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem1->setText(QApplication::translate("manager", "\320\237\321\200\321\226\320\267\320\262\320\270\321\211\320\265", 0));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem2->setText(QApplication::translate("manager", "\320\206\320\274'\321\217", 0));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem3->setText(QApplication::translate("manager", "\320\237\320\276 \320\261\320\260\321\202\321\214\320\272\320\276\320\262\321\226", 0));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem4->setText(QApplication::translate("manager", "\320\233\320\276\320\263\321\226\320\275", 0));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem5->setText(QApplication::translate("manager", "\320\237\320\276\321\201\320\260\320\264\320\260", 0));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        tableWidget->setSortingEnabled(__sortingEnabled);

        pushButton_2->setText(QApplication::translate("manager", "\320\227\320\274\321\226\320\275\320\270\321\202\320\270", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("manager", "\320\236\321\201\320\276\320\261\320\270\321\201\321\202\321\226 \320\264\320\260\320\275\321\226", 0));
        LName->setText(QApplication::translate("manager", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600; font-style:italic; text-decoration: underline;\">TextLabel</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class manager: public Ui_manager {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANAGER_H
