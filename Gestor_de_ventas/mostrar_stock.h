#ifndef MOSTRAR_STOCK_H
#define MOSTRAR_STOCK_H

#include <QDialog>

namespace Ui {
class mostrar_stock;
}

class mostrar_stock : public QDialog
{
    Q_OBJECT

public:
    explicit mostrar_stock(QWidget *parent = nullptr);
    ~mostrar_stock();

private:
    Ui::mostrar_stock *ui;

    enum Columna {
        CODIGO, MARCA, MODELO, INTERNA, RAM, PRINCIPAL, FRONTAL, HUELLA, PRECIO, CANTIDAD
    };
};

#endif // MOSTRAR_STOCK_H
