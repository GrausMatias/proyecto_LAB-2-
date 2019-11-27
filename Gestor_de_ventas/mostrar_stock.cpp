#include "mostrar_stock.h"
#include "ui_mostrar_stock.h"
#include "celulares.h"

mostrar_stock::mostrar_stock(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::mostrar_stock)
{
    QStringList titulos;
    ui->setupUi(this);
    ui->tableWidget_stock->setColumnCount(10);
    titulos<< "Codigo de celular" << "Marca"<< "Modelo" << "Interna" << "RAM" <<"Principal"<< "Frontal"<< "Huella"<< "Precio"<< "Cantidad";
    ui->tableWidget_stock->setHorizontalHeaderLabels(titulos);
    int fila;
    Celulares obj;
    int pos=0;
    while (obj.leer_de_disco(pos++)==1) {
    ui->tableWidget_stock->insertRow(ui->tableWidget_stock->rowCount());
    fila= ui->tableWidget_stock->rowCount() - 1;
    ui->tableWidget_stock->setItem(fila, CODIGO, new QTableWidgetItem(QString::number(obj.get_codigo_celular())));
    ui->tableWidget_stock->setItem(fila, MARCA, new QTableWidgetItem(obj.get_marca()));
    ui->tableWidget_stock->setItem(fila, MODELO, new QTableWidgetItem (obj.get_modelo()));
    ui->tableWidget_stock->setItem(fila, INTERNA, new QTableWidgetItem (QString::number(obj.get_interna())));
    ui->tableWidget_stock->setItem(fila, RAM, new QTableWidgetItem(QString::number(obj.get_ram())));
    ui->tableWidget_stock->setItem(fila, PRINCIPAL, new QTableWidgetItem(QString::number(obj.get_trasera())));
    ui->tableWidget_stock->setItem(fila, FRONTAL, new QTableWidgetItem(QString::number(obj.get_delantera())));
    if(obj.get_huella()==true){
            ui->tableWidget_stock->setItem(fila, HUELLA, new QTableWidgetItem("Si"));
    }
    else {
            ui->tableWidget_stock->setItem(fila, HUELLA, new QTableWidgetItem("No"));
    }
    ui->tableWidget_stock->setItem(fila, PRECIO, new QTableWidgetItem(QString::number(obj.get_precio())));
    ui->tableWidget_stock->setItem(fila, CANTIDAD, new QTableWidgetItem(QString::number(obj.get_stock())));

    }

}

mostrar_stock::~mostrar_stock()
{
    delete ui;
}
