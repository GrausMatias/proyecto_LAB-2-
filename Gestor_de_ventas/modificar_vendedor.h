#ifndef MODIFICAR_VENDEDOR_H
#define MODIFICAR_VENDEDOR_H

#include <QWidget>
#include "usuarios.h"
#include <QMessageBox>

namespace Ui {
class modificar_vendedor;
}

class modificar_vendedor : public QWidget
{
    Q_OBJECT

public:
    explicit modificar_vendedor(QWidget *parent = nullptr);
    ~modificar_vendedor();

private slots:
    void on_modificar_clicked();

private:
    Ui::modificar_vendedor *ui;
};

#endif // MODIFICAR_VENDEDOR_H
