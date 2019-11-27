#ifndef MOSTRAR_INFORMES_VENTAS_H
#define MOSTRAR_INFORMES_VENTAS_H

#include <QWidget>

namespace Ui {
class mostrar_informes_ventas;
}

class mostrar_informes_ventas : public QWidget
{
    Q_OBJECT

public:
    explicit mostrar_informes_ventas(QWidget *parent = nullptr);
    ~mostrar_informes_ventas();

private slots:
    void on_filtrar_clicked();

    void on_comboBox_informes_ventas_activated(const QString &arg1);

    void on_pushButton_buscar_clicked();

    void on_comboBox_marca_activated(const QString &arg1);

private:
    Ui::mostrar_informes_ventas *ui;
    enum Columna {
        CODIGOVENTA, NOMBRECLIENTE, APELLIDOCLIENTE, DNICLIENTE, USUARIOVENDEDOR, DIA, MES, ANIO, TOTALVENTA
    };
};

#endif // MOSTRAR_INFORMES_VENTAS_H
