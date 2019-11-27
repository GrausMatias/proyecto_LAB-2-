#include "ventana_principal.h"

#include <QApplication>


int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    a.setStyle("fusion");
    ventana_principal w;
    w.setWindowTitle("Programa de gestion");
    w.show();

    return a.exec();
}
