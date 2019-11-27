/********************************************************************************
** Form generated from reading UI file 'cuenta_admin.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CUENTA_ADMIN_H
#define UI_CUENTA_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>

QT_BEGIN_NAMESPACE

class Ui_cuenta_admin
{
public:
    QLineEdit *line_adminusu;
    QLineEdit *line_admincontra;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QRadioButton *radioButton;

    void setupUi(QDialog *cuenta_admin)
    {
        if (cuenta_admin->objectName().isEmpty())
            cuenta_admin->setObjectName(QString::fromUtf8("cuenta_admin"));
        cuenta_admin->resize(306, 211);
        line_adminusu = new QLineEdit(cuenta_admin);
        line_adminusu->setObjectName(QString::fromUtf8("line_adminusu"));
        line_adminusu->setGeometry(QRect(120, 60, 113, 20));
        line_admincontra = new QLineEdit(cuenta_admin);
        line_admincontra->setObjectName(QString::fromUtf8("line_admincontra"));
        line_admincontra->setGeometry(QRect(120, 100, 113, 20));
        line_admincontra->setEchoMode(QLineEdit::Password);
        label = new QLabel(cuenta_admin);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 60, 51, 21));
        label_2 = new QLabel(cuenta_admin);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 100, 71, 21));
        pushButton = new QPushButton(cuenta_admin);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(60, 170, 75, 23));
        pushButton_2 = new QPushButton(cuenta_admin);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(150, 170, 75, 23));
        radioButton = new QRadioButton(cuenta_admin);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(120, 130, 121, 17));

        retranslateUi(cuenta_admin);
        QObject::connect(pushButton_2, SIGNAL(clicked()), cuenta_admin, SLOT(close()));

        QMetaObject::connectSlotsByName(cuenta_admin);
    } // setupUi

    void retranslateUi(QDialog *cuenta_admin)
    {
        cuenta_admin->setWindowTitle(QApplication::translate("cuenta_admin", "Administrador", nullptr));
        label->setText(QApplication::translate("cuenta_admin", "Usuario:", nullptr));
        label_2->setText(QApplication::translate("cuenta_admin", "Contrase\303\261a:", nullptr));
        pushButton->setText(QApplication::translate("cuenta_admin", "Registrarse", nullptr));
        pushButton_2->setText(QApplication::translate("cuenta_admin", "Cancelar", nullptr));
        radioButton->setText(QApplication::translate("cuenta_admin", "Mostrar contrase\303\261a", nullptr));
    } // retranslateUi

};

namespace Ui {
    class cuenta_admin: public Ui_cuenta_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CUENTA_ADMIN_H
