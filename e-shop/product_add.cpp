#include "product_add.h"
#include "ui_product_add.h"
#include <QSqlQueryModel>

product_add::product_add(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::product_add)
{
    ui->setupUi(this);
    ui->comboBox->addItem("account");
    ui->comboBox->addItem("administrators");
    ui->comboBox->addItem("buyers");
    ui->comboBox->addItem("CalendarOfAddingProducts");
    ui->comboBox->addItem("ChangeCurrency");
    ui->comboBox->addItem("CurrencyType");
    ui->comboBox->addItem("Delivery");
    ui->comboBox->addItem("history");
    ui->comboBox->addItem("orders");
    ui->comboBox->addItem("product_price");
    ui->comboBox->addItem("ProductCurrency");
    ui->comboBox->addItem("ProductProperties");
    ui->comboBox->addItem("products");
    ui->comboBox->addItem("properties");
    ui->comboBox->addItem("Status");
    ui->comboBox->addItem("warehouses");
    model = new QSqlQueryModel;
    model->setQuery(QString("SELECT * FROM '%1';").arg(ui->comboBox->currentText()));
    ui->tableView->setModel(model);
}

product_add::~product_add()
{
    delete ui;
}

void product_add::on_comboBox_currentIndexChanged()
{
    if(model) model->setQuery(QString("SELECT * FROM '%1';").arg(ui->comboBox->currentText()));;
}

