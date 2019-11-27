#include "menu_principal.h"
#include "ui_menu_principal.h"
#include "detalles_ventas.h"
#include "ventas.h"
#include "agregar_producto_venta.h"
#include "celulares.h"
#include "mostrar_stock.h"
#include "ventana_principal.h"

void menu_principal::usuario_ingresado(char *usuario){
    ui->label_usuario->setText(usuario);
}

menu_principal::menu_principal(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::menu_principal)
{
    QStringList titulos;
    ui->setupUi(this);
    ui->tabletWidget_informe_ventas->setColumnCount(7);
    titulos<< "Codigo de venta" << "Codigo de celular" << "Marca"<< "Modelo" << "Cantidad" << "Forma de pago" <<"Importe";
    ui->tabletWidget_informe_ventas->setHorizontalHeaderLabels(titulos);
}

menu_principal::~menu_principal()
{
    delete ui;
}

QString menu_principal::nombre() const {
    return ui->line_nombre->text();
}

QString menu_principal::apellido() const {
    return ui->line_apellido->text();
}

QString menu_principal::DNI() const {
    return ui->line_dni->text();
}

QString menu_principal::importe() const {

}

int buscar_codigo_venta(){
    int cant=0;
    int total=0;
    FILE *p;
    p=fopen("datos/detalleventas.dat","rb");
        if(p==NULL){
            return 1;
        }
    return 2;
}

float buscar_precio_cel (int codigo){
    Celulares obj;
    int pos=0;
    while (obj.leer_de_disco(pos++)==1){
        if(obj.get_codigo_celular()==codigo){
            return obj.get_precio();
        }
}
return 0;
}

QString buscar_marca (int codigo){
    Celulares obj;
    int pos=0;
    while(obj.leer_de_disco(pos ++)){
    if(obj.get_codigo_celular()==codigo){
      QString marca (obj.get_marca());
      return marca;
    }
  }
    return "F";
}

QString buscar_modelo (int codigo){
    Celulares obj;
    int pos=0;
    while(obj.leer_de_disco(pos ++)){
    if(obj.get_codigo_celular()==codigo){
        QString modelo (obj.get_modelo());
        return modelo;
    }
  }
    return "F";
}

void menu_principal::on_Agregar_venta_clicked()
{
    int res, fila;
    agregar_producto_venta ap(this);
    res=ap.exec();
    if (res==QDialog::Rejected){
        return;
    }
    else{
    int codigo_celular= ap._codigo_celular().toInt();
    ui->tabletWidget_informe_ventas->insertRow(ui->tabletWidget_informe_ventas->rowCount());
    fila=ui->tabletWidget_informe_ventas->rowCount() - 1;
    ui->tabletWidget_informe_ventas->setItem(fila, CODIGOVENTA, new QTableWidgetItem(ap._codigo_venta()));
    ui->tabletWidget_informe_ventas->setItem(fila, CODIGOCELULAR, new QTableWidgetItem(ap._codigo_celular()));
    ui->tabletWidget_informe_ventas->setItem(fila, MARCA, new QTableWidgetItem (buscar_marca(codigo_celular)));
    ui->tabletWidget_informe_ventas->setItem(fila, MODELO, new QTableWidgetItem (buscar_modelo(codigo_celular)));
    ui->tabletWidget_informe_ventas->setItem(fila, CANTIDAD, new QTableWidgetItem(ap._cantidad()));
    ui->tabletWidget_informe_ventas->setItem(fila, FORMAPAGO, new QTableWidgetItem(ap._forma_pago()));
    ui->tabletWidget_informe_ventas->setItem(fila, IMPORTE, new QTableWidgetItem(ap._precio(buscar_precio_cel(codigo_celular))));
    }
}

void descontar_stock (int codigo, int cantidad) { //se descuenta siempre del primer valor
    Celulares cel;
    int pos=0;
    int cant;
    while(cel.leer_de_disco(pos++)){
     if(codigo==cel.get_codigo_celular()){
        cant=cel.get_stock()-cantidad;
        cel.set_stock(cant);
        cel.modificar_en_disco(pos);
        if(cel.get_stock()==0){
            cel.set_estado(false);
            return;
        }
            else {
                return;
            }
        }
    }
}

void menu_principal::on_Pagar_clicked()
{
    Ventas ven;
    DetalleVentas aux;
    ventana_principal vp;
    QMessageBox msg;
    int pos=0;
    float total=0;
    int codigo=0;

    QByteArray nombyte= nombre().toLatin1();
    char *nombre= nombyte.data();

    QByteArray apebyte= apellido().toLatin1();
    char *apellido= apebyte.data();

    int documento= DNI().toInt();

    if(buscar_codigo_venta()==1){
        codigo=1;
    }
    else if (buscar_codigo_venta()==2) {
         while(aux.leer_de_disco(pos++)==1){
            codigo=aux.get_codigo_venta();
            }
    }
    pos=0;
    while(aux.leer_de_disco(pos++)==1){
        if(aux.get_codigo_venta()==codigo){
            total+=aux.get_cantidad()*aux.get_precio();
            descontar_stock(aux.get_codigo_celular(), aux.get_cantidad());
        }
    }

    ven.set_nombre_cliente(nombre);
    ven.set_apellido_cliente(apellido);
    ven.set_DNI_cliente(documento);
    QByteArray usubyte= ui->label_usuario->text().toLatin1();
    char *usuario=usubyte.data();
    ven.set_usuario_vendedor(usuario);
    ven.set_codigo_venta(codigo);
    ven.set_importe(total);

    if(ven.grabar_venta()==false) {
        msg.setText("No se pudo cargar la venta.");
        msg.exec();
    }
    else{
        msg.setText("Se cargó la venta.");
        msg.exec();
    }
}

void menu_principal::on_pushButton_2_clicked()
{
    int res;
    mostrar_stock ms (this);
    res= ms.exec();
}
