#include "cuenta_admin.h"
#include "ui_cuenta_admin.h"
#include "usuarios.h"
#include <QMessageBox>

cuenta_admin::cuenta_admin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cuenta_admin)
{
    ui->setupUi(this);
}

cuenta_admin::~cuenta_admin()
{
    delete ui;
}

void cuenta_admin::on_pushButton_clicked()
{
    Administrador admin;
    QMessageBox msg;
    QString usuario, contrasena, aux;


    usuario= ui->line_adminusu->text();
    QByteArray usubyte=usuario.toLatin1();
    char *u=usubyte.data();
    admin.set_usuario(u);

    contrasena= ui->line_admincontra->text();
    QByteArray conbyte=contrasena.toLatin1();
    char *c=conbyte.data();
    admin.set_contrasena(c);

    admin.grabar_admin();
    msg.setText("El administrador " + usuario + " ha sido registrado exitosamente.");
    msg.exec();
    close();
}

void cuenta_admin::on_radioButton_clicked(bool checked)
{
    if(checked){
    ui->line_admincontra->setEchoMode(QLineEdit::Normal);

    }
    else {
    ui->line_admincontra->setEchoMode(QLineEdit::Password);
    }
}
