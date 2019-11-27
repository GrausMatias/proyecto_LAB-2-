#include "eliminar_vendedor.h"
#include "ui_eliminar_vendedor.h"
#include <QMessageBox>
#include "usuarios.h"

eliminar_vendedor::eliminar_vendedor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::eliminar_vendedor)
{
    ui->setupUi(this);
}

eliminar_vendedor::~eliminar_vendedor()
{
    delete ui;
}

void eliminar_vendedor::on_eliminar_clicked()
{
    QString aux;
    Usuarios usu;
    QMessageBox msg;

    aux= ui->line_dni->text();
    int documento= aux.toInt();

    if (usu.buscar_vendedor(documento)!=-1){
        usu.leer_de_disco(usu.buscar_vendedor(documento));
        usu.set_estado(false);
        usu.modificar_en_disco(usu.buscar_vendedor(documento));

        msg.setText("Se eliminó el vendedor correctamente.");
        msg.exec();
        close();
    }
    else {
        msg.setText("No se pudo eliminar el vendedor.");
        msg.exec();
        close();
    }

}
