#ifndef MENU_ADMINISTRADOR_H
#define MENU_ADMINISTRADOR_H

#include <QMainWindow>

namespace Ui {
class menu_administrador;
}

class menu_administrador : public QMainWindow
{
    Q_OBJECT

public:
    explicit menu_administrador(QWidget *parent = nullptr);
    ~menu_administrador();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_10_clicked();

    void on_pushButton_3_clicked();

private:
    Ui::menu_administrador *ui;
};

#endif // MENU_ADMINISTRADOR_H
