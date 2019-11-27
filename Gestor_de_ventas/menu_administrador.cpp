#include "menu_administrador.h"
#include "ui_menu_administrador.h"
#include "registro.h"
#include "agregar_stock.h"
#include "modificar_vendedor.h"
#include "mostrar_vendedores.h"
#include "mostrar_informes_ventas.h"
#include "modificar_precio.h"
#include "agregar_stock_producto_existente.h"
#include "eliminar_vendedor.h"
#include "usuarios.h"

menu_administrador::menu_administrador(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::menu_administrador)
{
    ui->setupUi(this);
}

menu_administrador::~menu_administrador()
{
    delete ui;
}

void menu_administrador::on_pushButton_clicked()
{
    registro *ventana= new registro;
    ventana-> show();

}

void menu_administrador::on_pushButton_4_clicked()
{
    agregar_stock *ventana= new agregar_stock;
    ventana ->show();
}

void menu_administrador::on_pushButton_2_clicked()
{
    modificar_vendedor *ventana= new modificar_vendedor;
    ventana -> show();
}

void menu_administrador::on_pushButton_8_clicked()
{
    mostrar_vendedores *ventana= new mostrar_vendedores;
    ventana->show();

}

void menu_administrador::on_pushButton_9_clicked()
{
   mostrar_informes_ventas *ventana= new mostrar_informes_ventas;
   ventana->show();
}

void menu_administrador::on_pushButton_6_clicked()
{
    agregar_stock_producto_existente *ventana= new agregar_stock_producto_existente;
    ventana->show();
}

void menu_administrador::on_pushButton_10_clicked()
{
    modificar_precio *ventana= new modificar_precio;
    ventana->show();
}

void menu_administrador::on_pushButton_3_clicked()
{
    eliminar_vendedor *ventana= new eliminar_vendedor;
    ventana->show();
}
