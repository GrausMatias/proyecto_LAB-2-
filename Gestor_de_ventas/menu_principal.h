#ifndef MENU_PRINCIPAL_H
#define MENU_PRINCIPAL_H

#include <QMainWindow>

namespace Ui {
class menu_principal;
}

class menu_principal : public QMainWindow
{
    Q_OBJECT

public:
    explicit menu_principal(QWidget *parent = nullptr);
    ~menu_principal();
    QString nombre() const, apellido() const, DNI() const, importe () const;
    void usuario_ingresado (char*);

private slots:
    void on_Agregar_venta_clicked();

    void on_Pagar_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::menu_principal *ui;
    enum Columna {
        CODIGOVENTA, CODIGOCELULAR, MARCA, MODELO, CANTIDAD, FORMAPAGO, IMPORTE
    };
};

#endif // MENU_PRINCIPAL_H
