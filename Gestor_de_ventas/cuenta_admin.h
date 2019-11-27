#ifndef CUENTA_ADMIN_H
#define CUENTA_ADMIN_H

#include <QDialog>

namespace Ui {
class cuenta_admin;
}

class cuenta_admin : public QDialog
{
    Q_OBJECT

public:
    explicit cuenta_admin(QWidget *parent = nullptr);
    ~cuenta_admin();

private slots:
    void on_pushButton_clicked();

    void on_radioButton_clicked(bool checked);

private:
    Ui::cuenta_admin *ui;
};

#endif // CUENTA_ADMIN_H
