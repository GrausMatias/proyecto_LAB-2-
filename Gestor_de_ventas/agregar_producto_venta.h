#ifndef AGREGAR_PRODUCTO_VENTA_H
#define AGREGAR_PRODUCTO_VENTA_H

#include <QDialog>

namespace Ui {
class agregar_producto_venta;
}

class agregar_producto_venta : public QDialog
{
    Q_OBJECT

public:
    explicit agregar_producto_venta(QWidget *parent = nullptr);
    ~agregar_producto_venta();
    QString _codigo_venta() const;
    QString _codigo_celular() const;
    QString _forma_pago () const;
    QString _cantidad () const;
    QString _precio (float) const;

private slots:
    void on_buttonBox_2_accepted();

    void on_line_codigo_selectionChanged();

    void on_line_codigo_textChanged(const QString &arg1);

    void on_buttonBox_2_rejected();

private:
    Ui::agregar_producto_venta *ui;
};

#endif // AGREGAR_PRODUCTO_VENTA_H
