#include "agregar_stock.h"
#include "ui_agregar_stock.h"
#include "celulares.h"

agregar_stock::agregar_stock(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::agregar_stock)
{
    ui->setupUi(this);
}

agregar_stock::~agregar_stock()
{
    delete ui;
}

void agregar_stock::on_checkBox_clicked(bool checked)
{
    Celulares cel;
    QString aux;

    aux= ui->line_codigo->text();
    int cod=aux.toInt();

    if (cel.buscar_celular(cod)!=-1){
        cel.leer_de_disco(cel.buscar_celular(cod));
        if(checked){
        cel.set_huella(true);
        }
        else {
        cel.set_huella(false);
        }
        cel.grabar_celulares();
    }
}

void agregar_stock::on_agregar_clicked()
{
    Celulares cel;
        QMessageBox msg;
        QString marca, modelo, aux;

        aux= ui->line_codigo->text();
        int codigo=aux.toInt();
        cel.set_codigo_celular(codigo);

        marca= ui->line_marca->text();
        QByteArray marbyte=marca.toLatin1();
        char *m=marbyte.data();
        cel.set_marca(m);


        modelo= ui->line_modelo->text();
        QByteArray modbyte=modelo.toLatin1();
        char *mo=modbyte.data();
        cel.set_modelo(mo);

        aux= ui->line_precio->text();
        float precio=aux.toFloat();
        cel.set_precio(precio);

        aux= ui->line_interna->text();
        int interna= aux.toInt();
        cel.set_interna(interna);

        aux= ui->line_ram->text();
        float ram= aux.toFloat();
        cel.set_ram(ram);

        aux= ui->line_delantera->text();
        float delantera= aux.toFloat();
        cel.set_delantera(delantera);

        aux= ui->line_trasera->text();
        float trasera= aux.toFloat();
        cel.set_trasera(trasera);

        QByteArray opcbyte=ui->comboBox->currentText().toLatin1();
        char *huella=opcbyte.data();
        if(strcmp(huella,"Si")==0){
            cel.set_huella(true);
        }
        else{
            cel.set_huella(false);
        }


        aux= ui->line_stock->text();
        int stock= aux.toInt();
        cel.set_stock(stock);

        cel.set_estado(true);


        if(cel.grabar_celulares()==false) {
            msg.setText("No se pudo registrar el producto.");
            msg.exec();
            close();
        }
        else{
            msg.setText("Se registró el producto correctamente.");
            msg.exec();
            close();
        }
}


