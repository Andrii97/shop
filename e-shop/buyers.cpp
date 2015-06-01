#include "buyers.h"
#include "ui_buyers.h"
#include <time.h>
#include <QTime>
#include <QDate>
#include <QTreeWidgetItem>
#include <QMap>
#include <QtPrintSupport/QPrinter>
#include <QMessageBox>
#include <qtextbrowser.h>
#include <QTime>


struct Node
{
    QString Name;
    QString Photo;
    double price;
};

buyers::buyers(int ID, QWidget *parent) :
    QWidget(parent),
    ui(new Ui::buyers)
{
    ui->setupUi(this);

    aBuyerInfo = new BuyerInfo;
    aBuyerInfo->ID = ID;
    QSqlQuery qr;
    qr.exec(QString("SELECT Surname, Name, Patronymic, Login, "
                    "The_cost_of_all_purchases FROM buyers WHERE ID=%1;").arg(aBuyerInfo->ID));
    qr.next();
    aBuyerInfo->Surname = &qr.value(0).toString();
    aBuyerInfo->Name = &qr.value(1).toString();
    aBuyerInfo->Patronymic = &qr.value(2).toString();
    aBuyerInfo->Login = &qr.value(3).toString();
    aBuyerInfo->The_cost_of_all_purchases = qr.value(4).toDouble();
    ui->LName->setText(*aBuyerInfo->Surname + " " + *aBuyerInfo->Name + " " + *aBuyerInfo->Patronymic);

    // personal data
    QSqlQueryModel *modelBuyerInfo = new QSqlQueryModel;
    modelBuyerInfo->setQuery(QString("SELECT Surname, Name, Patronymic, Login, The_cost_of_all_purchases "
                                     "FROM buyers WHERE ID=%1;").arg(aBuyerInfo->ID));
    ui->tableView->setModel(modelBuyerInfo);


    aListCategory = new QStringList;
    aListCategory->append("Будь-яка");
/*    if(qr.exec("SELECT DISTINCT Value FROM ProductProperties, properties "
               "WHERE properties.ID=ProductProperties.PropertiesID AND properties.ID=1"))
        while(qr.next())
            aListCategory->append(qr.value(0).toString());
    qDebug() << *aListCategory;*/
    if(qr.exec("SELECT DISTINCT Value FROM CategoryProperties"))
            while(qr.next())
                aListCategory->append(qr.value(0).toString());
    qDebug() << *aListCategory;
    QStringListModel *modelList = new QStringListModel;
    modelList->setStringList(*aListCategory);
    ui->CCategory->setModel(modelList);
    ui->treeView->setModel(modelList);
    ui->treeView->setToolTip("------------------------->");

    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("SELECT products.ID, products.Name, properties.Name, ProductProperties.Value FROM properties, ProductProperties, products "
                    "WHERE products.ID=ProductProperties.ProductID");
    //QTableView *table = new QTableView;
    //ui->columnView->setModel(model);
    //table->setModel(model);
    //table->show();

    ui->aBasket->setPixmap(QPixmap("photos/basket.jpg").scaled(ui->aBasket->size()));

    ui->stackedWidget->setWindowIconText(QString("Строрінка %1").arg(ui->stackedWidget->currentIndex()));
    ui->stackedWidget->setWindowTitle(QString("Строрінка %1").arg(ui->stackedWidget->currentIndex()));
    qDebug() << ui->dial->pos();
    ui->aImage1->setPixmap(QPixmap("photos/EPSONTX200.jpg").scaledToWidth(ui->aImage1->width()));
    ui->aProductName1->setText("EPSON TX200");
    ui->aImage2->setPixmap(QPixmap("photos/AcerAspireE13ES1-311-C01Y.jpg").scaledToWidth(ui->aImage2->width()));
    ui->aProductName2->setText("Acer Aspire E13ES1-311-C01Y");
    ui->aImage3->setPixmap(QPixmap("photos/DayanMegaminxCornerRiges.jpg").scaledToWidth(ui->aImage2->width()));//scaled(ui->aImage3->size()));
    ui->aProductName3->setText("Dayan Megaminx Corner Riges");

//    ui->aImage1->setVisible(false);
//      ui->aProductName1->setVisible(false);
//    ui->aImage2->setVisible(false);
//    ui->aProductName2->setVisible(false);
//    ui->aImage3->setVisible(false);
//    ui->aProductName3->setVisible(false);
    ui->aImage4->setVisible(false);
    ui->aProductName4->setVisible(false);
    ui->aImage5->setVisible(false);
    ui->aProductName5->setVisible(false);
    ui->aImage6->setVisible(false);
    ui->aProductName6->setVisible(false);
}

buyers::~buyers()
{
    delete aBuyerInfo;
    delete ui;
}

void buyers::on_ButtonSearchProducts_clicked()
{
    QSqlQueryModel *qr = new QSqlQueryModel;
    if(ui->CCategory->currentIndex() == 0)
    {
        qr->setQuery(QString("SELECT products.ID, products.Name, product_price.Purchase_price FROM products, product_price WHERE products.ID=product_price.ID AND"
                " product_price.Purchase_price>%1 AND "
                             "product_price.Purchase_price<%2;").arg(ui->dSBFrom->value()).arg(ui->dSBTo->value()));
        ui->tableViewSearch->setModel(qr);
    }
    else
    {
        qr->setQuery(QString("SELECT products.*, product_price.Purchase_price FROM products, product_price, ProductProperties WHERE products.ID=product_price.ID AND"
                             " AND ProductProperties.PropertiesID=1 AND product_price.Purchase_price>%2 AND "
                                          "product_price.Purchase_price<%3;").arg(ui->dSBFrom->value()).arg(ui->dSBTo->value()));
    }
    QSqlQuery query;
    if(!query.exec(QString("SELECT products.ID, products.Name,  products.Photo, product_price.Purchase_price, product_price.Coefficient FROM products, product_price WHERE products.ID=product_price.ID;")))// AND"
                         //  " products.CategoryID=%1").arg(ui->CCategory->currentIndex())))
        qDebug() << "error";
    qr->setQuery(QString("SELECT products.ID, products.Name,  products.Photo, product_price.Purchase_price, product_price.Coefficient FROM products, product_price WHERE products.ID=product_price.ID;"));
    QMap<int, Node*> m;
    while(query.next())
    {
        Node *curr = new Node;
        curr->Name = query.value(1).toString();
        curr->Photo = query.value(2).toString();
        curr->price = query.value(3).toDouble() + query.value(4).toDouble();
        m[query.value(0).toInt()] = curr;
        //m.insert(query.value(0).toInt(), curr);
    }
    qDebug() << m;
}

void buyers::on_next_clicked()
{
    ui->stackedWidget->setCurrentIndex(ui->stackedWidget->currentIndex() + 1);
    QString str = "Сторінка ";
    str += QVariant(ui->stackedWidget->currentIndex()).toString();
    ui->LPage->setText(str);
}

void buyers::on_prev_clicked()
{
    ui->stackedWidget->setCurrentIndex(ui->stackedWidget->currentIndex() - 1);
    ui->LPage->setText(QString("Сторінка %1").arg(ui->stackedWidget->currentIndex()));
    qDebug() << QString("Сторінка %1").arg(ui->stackedWidget->currentIndex());
}

void buyers::on_aBasket_linkActivated(const QString &link)
{
    ;
}


void buyers::on_printReceipt_clicked()
{
    QPrinter printer;
    printer.setOutputFormat(QPrinter::PdfFormat);
    printer.setPageSize(QPrinter::A4);
    printer.setWinPageSize(767);

    printer.setOutputFileName("Receipt"+QDate::currentDate().toString("dd.MM.yyyy")+"_"+QTime::currentTime().toString("hh_mm_ss")+".pdf");

    QTextBrowser * br = new QTextBrowser();
    QString Price("6789.5");


    QString eShopName("The best shop"), aProductName("Ноутбук"), aProductCategory("Комп'ютери");
//    int aNumberOfReceipt = 123, aProductNumber = 12;
//    double aProductPrice = 13.4;
    QString aNumberOfReceipt("123"), aProductNumber("1"), aProductPrice("6789.5");

    QString curTD = QDate::currentDate().toString("dd.MM.yyyy")+" "+QTime::currentTime().toString("hh:mm:ss");
    br->setText("<p align=\"center\" style=\"color:#000000; font-size:35px\"><b>"+eShopName+"</b></p>"
                " <p align=\"right\"><b>"+curTD+"</b></p>"
                " <p align=\"center\" style=\"font-size:25px\"><b>Товарний чек №"+aNumberOfReceipt+"</b></p><p></p>"
                "<table border = '1' width = '100%' align = 'center' style=\"font-size:20px\">"
                    "<tr><td>№</td><td>Найменування</td><td>Категорія</td><td>Кількість</td><td>Ціна</td><td>Сума</td></tr>"
                    "<tr><td>1</td><td><i>"+aProductName+"</i></td><td>"+aProductCategory+"</td><td>"+aProductNumber+"</td><td>"+aProductPrice+"</td>"
                    "<td>"+aProductPrice+"</td></table><p></p><p style=\"font-size:25px\"><blockquote><ins>Всього на суму "+Price+"</ins></blockquote></p>"
                    "");

    br->print(&printer);

}
