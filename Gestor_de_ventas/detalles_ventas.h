#ifndef DETALLES_VENTAS_H
#define DETALLES_VENTAS_H

#endif // DETALLES_VENTAS_H
#include <iostream>
#include <QString>
#include <string.h>
using namespace std;

class DetalleVentas{
private:
    int _codigo_venta;
    int _codigo_celular;
    float _precio;
    char _forma_pago [10];
    int _cantidad;
public:
    int get_codigo_venta () {return _codigo_venta;}
    int get_codigo_celular (){return _codigo_celular;}
    float get_precio (){return _precio;}
    char *get_forma_pago() {return _forma_pago;}
    int get_cantidad () {return _cantidad;}
    void set_codigo_venta (int codigo) {_codigo_venta=codigo;}
    void set_codigo_celular (int codigo){_codigo_celular=codigo;}
    void set_precio (float precio){_precio=precio;}
    void set_forma_pago (char *forma_pago){strcpy(_forma_pago, forma_pago);}
    void set_cantidad (int cantidad) {_cantidad=cantidad;}
    int leer_de_disco (int pos) {
        FILE *p;
        int x;
        p=fopen("datos/detalleventas.dat", "rb");
        if(p==NULL){return 0;}
        fseek(p, pos*sizeof*this, 0);
        x=fread(this, sizeof*this, 1, p);
        fclose(p);
        return x;
    }
    bool grabar_detalleventa (){
        FILE *p;
        p=fopen("datos/detalleventas.dat", "ab");
        if(p==NULL){return false;}
        fwrite(this, sizeof*this, 1, p);
        fclose(p);
        return true;
    }

};
