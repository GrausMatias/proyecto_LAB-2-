#include "mostrar_informes_ventas.h"
#include "ui_mostrar_informes_ventas.h"
#include <QString>
#include <QMessageBox>
#include "ventas.h"
#include "usuarios.h"
#include <iostream>
#include <stdlib.h>

using namespace std;

mostrar_informes_ventas::mostrar_informes_ventas(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mostrar_informes_ventas)
{
    ui->setupUi(this);
    QStringList titulos;
    ui->tabletWidget_informe_ventas->setColumnCount(9);
    titulos<< "Codigo de venta" << "Nombre cliente" << "Apellido Cliente" <<"DNI Cliente" << "Usuario vend." << "Día" << "Mes" << "Año" << "Total";
    ui->tabletWidget_informe_ventas->setHorizontalHeaderLabels(titulos);
}

mostrar_informes_ventas::~mostrar_informes_ventas()
{
    delete ui;
}

int cantidad_ventas (char *usuario){
    Ventas obj;
    int pos=0;
    int cant=0;
    while (obj.leer_de_disco(pos++)==1){
        if(strcmp(obj.get_usuario_vendedor(), usuario)==0){
                cant++;
        }
    }
    return cant;
}

int cantidad_compras (int dni){
    Ventas obj;
    int pos=0;
    int cant=0;
    while (obj.leer_de_disco(pos++)==1){
        if(obj.get_DNI_cliente()==dni){
                cant++;
        }
    }
    return cant;
}


void mostrar_informes_ventas::on_pushButton_buscar_clicked()
{
    Ventas obj;
    int fila;
    int pos=0;
    QString aux, marca, pago;
    aux= ui->lineEdit_vendedor->text();
    int documento= aux.toInt();

    marca= ui->comboBox_marca->currentText();
    QByteArray marbyte=marca.toLatin1();
    char *m=marbyte.data();


    pago=ui->comboBox_pago->currentText();

    aux=ui->lineEdit_dia->text();
    int dia= aux.toInt();

    aux=ui->lineEdit_mes->text();
    int mes= aux.toInt();

    aux=ui->lineEdit_anio->text();
    int anio= aux.toInt();

    while (obj.leer_de_disco(pos++)==1){
            ui->tabletWidget_informe_ventas->insertRow(ui->tabletWidget_informe_ventas->rowCount());
            fila=ui->tabletWidget_informe_ventas->rowCount() - 1;
            ui->tabletWidget_informe_ventas->setItem(fila, CODIGOVENTA, new QTableWidgetItem(QString::number(obj.get_codigo_venta())));
            ui->tabletWidget_informe_ventas->setItem(fila, NOMBRECLIENTE, new QTableWidgetItem(obj.get_nombre_cliente()));
            ui->tabletWidget_informe_ventas->setItem(fila, APELLIDOCLIENTE, new QTableWidgetItem(obj.get_apellido_cliente()));
            ui->tabletWidget_informe_ventas->setItem(fila, DNICLIENTE, new QTableWidgetItem(QString::number(obj.get_DNI_cliente())));
            ui->tabletWidget_informe_ventas->setItem(fila, USUARIOVENDEDOR, new QTableWidgetItem(obj.get_usuario_vendedor()));
            ui->tabletWidget_informe_ventas->setItem(fila, DIA, new QTableWidgetItem (QString::number(obj.get_dia())));
            ui->tabletWidget_informe_ventas->setItem(fila, MES, new QTableWidgetItem (QString::number(obj.get_mes())));
            ui->tabletWidget_informe_ventas->setItem(fila, ANIO, new QTableWidgetItem (QString::number(obj.get_anio())));
            ui->tabletWidget_informe_ventas->setItem(fila, TOTALVENTA, new QTableWidgetItem (QString::number(obj.get_importe())));
            }
        }

