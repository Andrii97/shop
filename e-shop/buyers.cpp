#include "buyers.h"
#include "ui_buyers.h"
#include <time.h>
#include <QTime>
#include <QDate>
#include <QTreeWidgetItem>

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
    if(qr.exec("SELECT DISTINCT Value FROM ProductProperties, properties "
               "WHERE properties.ID=ProductProperties.PropertiesID AND properties.ID=1"))
        while(qr.next())
            aListCategory->append(qr.value(0).toString());
    qDebug() << *aListCategory;
    QStringListModel *modelList = new QStringListModel;
    modelList->setStringList(*aListCategory);\
    ui->CCategory->setModel(modelList);


    QSqlQueryModel *model = new QSqlQueryModel;
    model->setQuery("SELECT products.ID, products.Name, properties.Name, ProductProperties.Value FROM properties, ProductProperties, products "
                    "WHERE products.ID=ProductProperties.ProductID AND properties.ID=ProductProperties.PropertiesID");
    //QTableView *table = new QTableView;
    //ui->columnView->setModel(model);
    //table->setModel(model);
    //table->show();
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
        qr->setQuery(QString("SELECT * FROM products, product_price, ProductProperties WHERE products.ID=product_price.ID AND"
                             " AND products.ID=ProductProperties.PropertiesID AND product_price.Purchase_price>%1 AND "
                                          "product_price.Purchase_price<%2;").arg(ui->dSBFrom->value()).arg(ui->dSBTo->value()));
    }
}
