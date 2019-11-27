#include "agregar_stock_producto_existente.h"
#include "ui_agregar_stock_producto_existente.h"
#include "celulares.h"
#include <string.h>
#include <iostream>
using namespace std;

agregar_stock_producto_existente::agregar_stock_producto_existente(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::agregar_stock_producto_existente)
{
    ui->setupUi(this);
}

agregar_stock_producto_existente::~agregar_stock_producto_existente()
{
    delete ui;
}


QString agregar_stock_producto_existente::_codigo () const{
    return ui->line_codigo->text();
}

QString agregar_stock_producto_existente::_cantidad() const{
    return ui->line_cantidad->text();
}

void agregar_stock_producto_existente::on_pushButton_Agregar_clicked()
{
    Celulares cel;
    QString codigo, aux;
    QMessageBox msg;

    int cod= _codigo().toInt();
    int cantidad= _cantidad().toInt();

    if (cel.buscar_celular(cod)!=-1){
        cel.leer_de_disco(cel.buscar_celular(cod));
        cel.set_stock(cantidad);
        cel.grabar_celulares();
        cel.set_estado(true);
    }

    if(cel.grabar_celulares()==false) {
        msg.setText("No se pudo agregar el stock.");
        msg.exec();
        close();
    }
    else{
        msg.setText("Se agregó el stock correctamente.");
        msg.exec();
        close();
    }
}
