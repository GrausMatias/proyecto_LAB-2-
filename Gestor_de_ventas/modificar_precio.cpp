#include "modificar_precio.h"
#include "ui_modificar_precio.h"
#include "celulares.h"
#include <string.h>
#include <iostream>
using namespace std;

modificar_precio::modificar_precio(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::modificar_precio)
{
    ui->setupUi(this);
}

modificar_precio::~modificar_precio()
{
    delete ui;
}

QString modificar_precio::_codigo () const{
    return ui->line_codigo->text();
}

QString modificar_precio::_precio() const{
    return ui->line_precio->text();
}

void modificar_precio::on_pushButton_modificar_clicked()
{
    Celulares cel;
    QString marca, modelo, aux;
    QMessageBox msg;

    int cod= _codigo().toInt();

    float precio= _precio().toFloat();

    if (cel.buscar_celular(cod)!=-1){
        cel.leer_de_disco(cel.buscar_celular(cod));
        cel.set_precio(precio);
        cel.grabar_celulares();
    }

    if(cel.grabar_celulares()==false) {
        msg.setText("No se pudo modificar el precio.");
        msg.exec();
        close();
    }
    else{
        msg.setText("Se modificó el precio correctamente.");
        msg.exec();
        close();
    }
}
