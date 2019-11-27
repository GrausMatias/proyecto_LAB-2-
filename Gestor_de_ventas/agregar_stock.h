#ifndef AGREGAR_STOCK_H
#define AGREGAR_STOCK_H

#include <QWidget>

namespace Ui {
class agregar_stock;
}

class agregar_stock : public QWidget
{
    Q_OBJECT

public:
    explicit agregar_stock(QWidget *parent = nullptr);
    ~agregar_stock();
private slots:
    void on_agregar_clicked();

    void on_checkBox_clicked(bool checked);

private:
    Ui::agregar_stock *ui;
};

#endif // AGREGAR_STOCK_H
