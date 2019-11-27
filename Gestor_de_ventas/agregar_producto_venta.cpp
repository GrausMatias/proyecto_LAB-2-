#include "agregar_producto_venta.h"
#include "ui_agregar_producto_venta.h"
#include "detalles_ventas.h"
#include "celulares.h"
#include "ventas.h"
#include "menu_principal.h"
#include <QMessageBox>

agregar_producto_venta::agregar_producto_venta(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::agregar_producto_venta)
{
    ui->setupUi(this);
}

agregar_producto_venta::~agregar_producto_venta()
{
    delete ui;
}

float buscar_precio (int codigo){
    Celulares obj;
    int pos=0;
    while (obj.leer_de_disco(pos++)==1){
        if(obj.get_codigo_celular()==codigo){
            return obj.get_precio();
        }
}
return -1;
}

int buscar_codigo () {
    Ventas ven;
    int pos=0;
    int codigo=0;
    while (ven.leer_de_disco(pos++)==1){
            codigo=ven.get_codigo_venta();
    }
    return codigo;
}


void agregar_producto_venta::on_line_codigo_textChanged(const QString &aux)
{
    QString precio;
    int codigo_celular= aux.toInt();
    precio= QString::number(buscar_precio(codigo_celular));
    ui->precio->setText(precio);
}

QString agregar_producto_venta::_codigo_venta() const {
    QString cod;
    Ventas ven;
    int pos=0;
    int codigo=0;
    if(ven.leer_de_disco(pos)==0){
        cod=QString::number(1);
        return cod;
    }
    else { while (ven.leer_de_disco(pos++)==1){
            codigo=ven.get_codigo_venta();
        }
        cod=QString::number(codigo+1);
        return cod;
    }
}

QString agregar_producto_venta::_codigo_celular() const {
    return ui->line_codigo->text();
}
QString agregar_producto_venta::_forma_pago () const{
    return ui->combo_met_pago->currentText();
}
QString agregar_producto_venta::_cantidad () const{
    return ui->line_cantidad->text();
}
QString agregar_producto_venta::_precio (float precio) const{
    QString p;
    p=QString::number(precio);
    return p;
}


void agregar_producto_venta::on_buttonBox_2_accepted()
{
    DetalleVentas obj;
    Ventas ven;
    QString aux;
    QMessageBox msg;

    int codigo_venta=_codigo_venta().toInt();
    int codigo_celular= _codigo_celular().toInt();
    int cantidad= _cantidad().toInt();
    QByteArray opcbyte=_forma_pago().toLatin1();
    char *forma=opcbyte.data();
    float precio= _precio(buscar_precio(codigo_celular)).toFloat();

    obj.set_codigo_celular(codigo_celular);
    obj.set_codigo_venta(codigo_venta);
    obj.set_cantidad(cantidad);
    obj.set_precio(precio);
    obj.set_forma_pago(forma);


    if(obj.grabar_detalleventa()==false) {
        msg.setText("No se pudo agregar el producto seleccionado.");
        msg.exec();
        accept();
    }
    else{
        msg.setText("Se agregó el producto correctamente.");
        msg.exec();
        accept();
    }
}


void agregar_producto_venta::on_buttonBox_2_rejected()
{
    reject();
}



