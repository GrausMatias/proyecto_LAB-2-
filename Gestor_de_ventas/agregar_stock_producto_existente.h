#ifndef AGREGAR_STOCK_PRODUCTO_EXISTENTE_H
#define AGREGAR_STOCK_PRODUCTO_EXISTENTE_H

#include <QWidget>

namespace Ui {
class agregar_stock_producto_existente;
}

class agregar_stock_producto_existente : public QWidget
{
    Q_OBJECT

public:
    explicit agregar_stock_producto_existente(QWidget *parent = nullptr);
    ~agregar_stock_producto_existente();
    QString _codigo () const;
    QString _cantidad() const;

private slots:
    void on_pushButton_Agregar_clicked();

private:
    Ui::agregar_stock_producto_existente *ui;
};

#endif // AGREGAR_STOCK_PRODUCTO_EXISTENTE_H
