#include "modificar_vendedor.h"
#include "ui_modificar_vendedor.h"
#include <QMessageBox>

modificar_vendedor::modificar_vendedor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::modificar_vendedor)
{
    ui->setupUi(this);
}

modificar_vendedor::~modificar_vendedor()
{
    delete ui;
}

void modificar_vendedor::on_modificar_clicked()
{
    QString aux;
    Usuarios usu;
    QMessageBox msg;

    aux= ui->line_dni->text();
    int documento= aux.toInt();
    usu.set_documento(documento);

    aux= ui->line_sueldo->text();
    float sueldo=aux.toFloat();

    if (usu.buscar_vendedor(documento)!=-1){
        usu.leer_de_disco(usu.buscar_vendedor(documento));
        usu.set_sueldo(sueldo);
        usu.modificar_en_disco(usu.buscar_vendedor(documento));

        msg.setText("Se actualizó el sueldo correctamente.");
        msg.exec();
        close();
    }
    else {
        msg.setText("No se encontró el DNI buscado.");
        msg.exec();
        close();
    }
}
