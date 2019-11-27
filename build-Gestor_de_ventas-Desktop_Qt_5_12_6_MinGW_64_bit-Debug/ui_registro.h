/********************************************************************************
** Form generated from reading UI file 'registro.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTRO_H
#define UI_REGISTRO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_registro
{
public:
    QLineEdit *line_nom;
    QLineEdit *line_ape;
    QLineEdit *line_dni;
    QLineEdit *line_sue;
    QLineEdit *line_usu;
    QLineEdit *line_con;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QRadioButton *radioButton;

    void setupUi(QWidget *registro)
    {
        if (registro->objectName().isEmpty())
            registro->setObjectName(QString::fromUtf8("registro"));
        registro->resize(232, 314);
        line_nom = new QLineEdit(registro);
        line_nom->setObjectName(QString::fromUtf8("line_nom"));
        line_nom->setGeometry(QRect(100, 10, 113, 20));
        line_ape = new QLineEdit(registro);
        line_ape->setObjectName(QString::fromUtf8("line_ape"));
        line_ape->setGeometry(QRect(100, 50, 113, 20));
        line_dni = new QLineEdit(registro);
        line_dni->setObjectName(QString::fromUtf8("line_dni"));
        line_dni->setGeometry(QRect(100, 90, 113, 20));
        line_sue = new QLineEdit(registro);
        line_sue->setObjectName(QString::fromUtf8("line_sue"));
        line_sue->setGeometry(QRect(100, 130, 113, 20));
        line_usu = new QLineEdit(registro);
        line_usu->setObjectName(QString::fromUtf8("line_usu"));
        line_usu->setGeometry(QRect(100, 170, 113, 20));
        line_con = new QLineEdit(registro);
        line_con->setObjectName(QString::fromUtf8("line_con"));
        line_con->setGeometry(QRect(100, 210, 113, 20));
        line_con->setEchoMode(QLineEdit::Password);
        label = new QLabel(registro);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 10, 61, 20));
        label_2 = new QLabel(registro);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 50, 51, 16));
        label_3 = new QLabel(registro);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 90, 51, 16));
        label_4 = new QLabel(registro);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 130, 51, 16));
        label_5 = new QLabel(registro);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 170, 51, 16));
        label_6 = new QLabel(registro);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 210, 61, 16));
        pushButton = new QPushButton(registro);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(30, 270, 75, 23));
        pushButton_2 = new QPushButton(registro);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(110, 270, 75, 23));
        radioButton = new QRadioButton(registro);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(100, 240, 121, 17));

        retranslateUi(registro);

        QMetaObject::connectSlotsByName(registro);
    } // setupUi

    void retranslateUi(QWidget *registro)
    {
        registro->setWindowTitle(QApplication::translate("registro", "Registro de vendedor", nullptr));
        label->setText(QApplication::translate("registro", "Nombre:", nullptr));
        label_2->setText(QApplication::translate("registro", "Apellido:", nullptr));
        label_3->setText(QApplication::translate("registro", "DNI:", nullptr));
        label_4->setText(QApplication::translate("registro", "Sueldo:", nullptr));
        label_5->setText(QApplication::translate("registro", "Usuario:", nullptr));
        label_6->setText(QApplication::translate("registro", "Contrase\303\261a:", nullptr));
        pushButton->setText(QApplication::translate("registro", "Registrar", nullptr));
        pushButton_2->setText(QApplication::translate("registro", "Cancelar", nullptr));
        radioButton->setText(QApplication::translate("registro", "Mostrar contrase\303\261a", nullptr));
    } // retranslateUi

};

namespace Ui {
    class registro: public Ui_registro {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTRO_H
