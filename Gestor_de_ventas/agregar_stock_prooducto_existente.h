#ifndef AGREGAR_STOCK_PROODUCTO_EXISTENTE_H
#define AGREGAR_STOCK_PROODUCTO_EXISTENTE_H

#include <QWidget>

namespace Ui {
class agregar_stock_prooducto_existente;
}

class agregar_stock_prooducto_existente : public QWidget
{
    Q_OBJECT

public:
    explicit agregar_stock_prooducto_existente(QWidget *parent = nullptr);
    ~agregar_stock_prooducto_existente();

private slots:
    void on_pushButton_Agregar_clicked();

private:
    Ui::agregar_stock_prooducto_existente *ui;
};

#endif // AGREGAR_STOCK_PROODUCTO_EXISTENTE_H
