#include "mostrar_vendedores.h"
#include "ui_mostrar_vendedores.h"
#include "usuarios.h"

mostrar_vendedores::mostrar_vendedores(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::mostrar_vendedores)
{
    QStringList titulos;
    ui->setupUi(this);
    ui->tableWidget->setColumnCount(5);
    titulos<< "Nombre" << "Apellido" << "DNI" << "Sueldo" << "Usuario";
    ui->tableWidget->setHorizontalHeaderLabels(titulos);
    int fila;
    Usuarios usu;
    int pos=0;
    while (usu.leer_de_disco(pos++)==1) {
    ui->tableWidget->insertRow(ui->tableWidget->rowCount());
    fila= ui->tableWidget->rowCount() - 1;
    ui->tableWidget->setItem(fila, NOMBRE, new QTableWidgetItem(usu.get_nombre()));
    ui->tableWidget->setItem(fila, APELLIDO, new QTableWidgetItem(usu.get_apellido()));
    ui->tableWidget->setItem(fila, DNI, new QTableWidgetItem (QString::number(usu.get_documento())));
    ui->tableWidget->setItem(fila, SUELDO, new QTableWidgetItem (QString::number(usu.get_sueldo())));
    ui->tableWidget->setItem(fila, USUARIO, new QTableWidgetItem(usu.get_usuario()));;
    }
}

mostrar_vendedores::~mostrar_vendedores()
{
    delete ui;
}

void mostrar_vendedores::on_pushButton_clicked()
{

}
