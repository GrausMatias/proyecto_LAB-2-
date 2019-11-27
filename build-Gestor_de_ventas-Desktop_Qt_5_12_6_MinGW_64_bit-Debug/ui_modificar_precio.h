/********************************************************************************
** Form generated from reading UI file 'modificar_precio.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFICAR_PRECIO_H
#define UI_MODIFICAR_PRECIO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_modificar_precio
{
public:
    QLineEdit *line_precio;
    QLabel *label_5;
    QLabel *label_4;
    QPushButton *pushButton_modificar;
    QLineEdit *line_codigo;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *modificar_precio)
    {
        if (modificar_precio->objectName().isEmpty())
            modificar_precio->setObjectName(QString::fromUtf8("modificar_precio"));
        modificar_precio->resize(240, 253);
        line_precio = new QLineEdit(modificar_precio);
        line_precio->setObjectName(QString::fromUtf8("line_precio"));
        line_precio->setGeometry(QRect(90, 160, 113, 20));
        label_5 = new QLabel(modificar_precio);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 160, 51, 16));
        label_4 = new QLabel(modificar_precio);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 100, 201, 71));
        pushButton_modificar = new QPushButton(modificar_precio);
        pushButton_modificar->setObjectName(QString::fromUtf8("pushButton_modificar"));
        pushButton_modificar->setGeometry(QRect(80, 200, 91, 31));
        line_codigo = new QLineEdit(modificar_precio);
        line_codigo->setObjectName(QString::fromUtf8("line_codigo"));
        line_codigo->setGeometry(QRect(90, 80, 113, 20));
        label = new QLabel(modificar_precio);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 0, 201, 71));
        label_2 = new QLabel(modificar_precio);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 80, 51, 16));

        retranslateUi(modificar_precio);

        QMetaObject::connectSlotsByName(modificar_precio);
    } // setupUi

    void retranslateUi(QWidget *modificar_precio)
    {
        modificar_precio->setWindowTitle(QApplication::translate("modificar_precio", "Modificaci\303\263n de precio", nullptr));
        label_5->setText(QApplication::translate("modificar_precio", "Precio:", nullptr));
        label_4->setText(QApplication::translate("modificar_precio", "<html><head/><body><p>Ingrese el nuevo precio:</p></body></html>", nullptr));
        pushButton_modificar->setText(QApplication::translate("modificar_precio", "Modificar", nullptr));
        label->setText(QApplication::translate("modificar_precio", "<html><head/><body><p>Ingrese el c\303\263digo del celular<br/>a agregar stock:</p></body></html>", nullptr));
        label_2->setText(QApplication::translate("modificar_precio", "Codigo:", nullptr));
    } // retranslateUi

};

namespace Ui {
    class modificar_precio: public Ui_modificar_precio {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFICAR_PRECIO_H
