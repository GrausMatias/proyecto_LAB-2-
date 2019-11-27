#ifndef MOSTRAR_VENDEDORES_H
#define MOSTRAR_VENDEDORES_H

#include <QWidget>

namespace Ui {
class mostrar_vendedores;
}

class mostrar_vendedores : public QWidget
{
    Q_OBJECT

public:
    explicit mostrar_vendedores(QWidget *parent = nullptr);
    ~mostrar_vendedores();

private slots:
    void on_pushButton_clicked();

private:
    Ui::mostrar_vendedores *ui;

    enum Columna {
        NOMBRE, APELLIDO, DNI, SUELDO, USUARIO, ESTADO
    };
};

#endif // MOSTRAR_VENDEDORES_H
