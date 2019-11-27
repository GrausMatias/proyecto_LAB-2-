#ifndef ELIMINAR_VENDEDOR_H
#define ELIMINAR_VENDEDOR_H

#include <QWidget>

namespace Ui {
class eliminar_vendedor;
}

class eliminar_vendedor : public QWidget
{
    Q_OBJECT

public:
    explicit eliminar_vendedor(QWidget *parent = nullptr);
    ~eliminar_vendedor();

private slots:
    void on_eliminar_clicked();

private:
    Ui::eliminar_vendedor *ui;
};

#endif // ELIMINAR_VENDEDOR_H
