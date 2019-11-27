#ifndef MODIFICAR_PRECIO_H
#define MODIFICAR_PRECIO_H

#include <QWidget>

namespace Ui {
class modificar_precio;
}

class modificar_precio : public QWidget
{
    Q_OBJECT

public:
    explicit modificar_precio(QWidget *parent = nullptr);
    ~modificar_precio();
    QString _codigo () const;
    QString _precio() const;

private slots:
    void on_pushButton_modificar_clicked();

private:
    Ui::modificar_precio *ui;
};

#endif // MODIFICAR_PRECIO_H
