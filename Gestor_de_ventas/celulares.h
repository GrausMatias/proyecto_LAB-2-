#ifndef CELULARES_H
#define CELULARES_H
#include <iostream>
#include <QMessageBox>

using namespace std;

class Celulares {
private:
    int _codigo_celular;
    char _marca [30];
    char _modelo [10];
    int _interna;
    float _ram;
    float _delantera;
    float _trasera;
    bool _huella;
    float _precio;
    int _stock;
    bool _estado;
public:
///gets
    int get_codigo_celular (){return _codigo_celular;}
    char* get_marca (){return _marca;}
    char* get_modelo (){return _modelo;}
    int get_interna (){return _interna;}
    float get_ram (){return _ram;}
    float get_delantera (){return _delantera;}
    float get_trasera () {return _trasera;}
    bool get_huella (){return _huella;}
    float get_precio (){return _precio;}
    int get_stock (){return _stock;}
    bool get_estado (){return _estado;}
///sets
    void set_codigo_celular (int codigo){_codigo_celular=codigo;}
    void set_marca(char* marca) {strcpy(_marca, marca);}
    void set_modelo(char* modelo) {strcpy(_modelo, modelo);}
    void set_interna (int interna){_interna=interna;}
    void set_ram(float ram){_ram=ram;}
    void set_delantera (float delantera){_delantera=delantera;}
    void set_trasera(float trasera){_trasera=trasera;}
    void set_huella (bool huella){_huella=huella;}
    void set_precio (float precio){_precio=precio;}
    void set_stock(int stock){_stock=stock;}
    void set_estado (bool estado){_estado=estado;}
///grabar
    bool grabar_celulares (void) {
        FILE *p;
        p = fopen("datos/celulares.dat","ab");
        if(p == NULL){
           return false;
        }
        fwrite(this ,sizeof * this, 1, p);
        fclose(p);
        return true;
    }
///leer
    int leer_de_disco(int pos)
        {
        int x;
        FILE *p;
        p=fopen("datos/celulares.dat","rb");
        if(p==NULL)
            {
            return 0;
            }
        fseek(p,pos*sizeof*this,0);
        x=fread(this,sizeof*this,1,p);
        fclose(p);
        return x;
    }

    void modificar_en_disco(int pos)
        {
        FILE *p;
        p=fopen("datos/celulares.dat","rb+");
        if(p==NULL){
            return;
        }
        fseek(p,pos*sizeof *this,0);
        fwrite(this,sizeof *this,1,p);
        fclose(p);
        }


    int buscar_celular (int codigo){
      int i=0;
      int pos=0;
      FILE *p;
      p = fopen("datos/celulares.dat", "rb");
      if (p==NULL){
        return -1;
      }
      while(leer_de_disco(pos ++)){
        if(_codigo_celular==codigo){
          fclose(p);
          return i;
        }
        i++;
      }
      fclose(p);
      return -1;
    }

};

#endif // CELULARES_H
