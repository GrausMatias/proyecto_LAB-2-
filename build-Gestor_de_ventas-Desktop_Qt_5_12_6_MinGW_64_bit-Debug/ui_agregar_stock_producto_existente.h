/********************************************************************************
** Form generated from reading UI file 'agregar_stock_producto_existente.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGREGAR_STOCK_PRODUCTO_EXISTENTE_H
#define UI_AGREGAR_STOCK_PRODUCTO_EXISTENTE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_agregar_stock_producto_existente
{
public:
    QLabel *label_5;
    QLineEdit *line_cantidad;
    QLineEdit *line_codigo;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_2;
    QPushButton *pushButton_Agregar;

    void setupUi(QWidget *agregar_stock_producto_existente)
    {
        if (agregar_stock_producto_existente->objectName().isEmpty())
            agregar_stock_producto_existente->setObjectName(QString::fromUtf8("agregar_stock_producto_existente"));
        agregar_stock_producto_existente->resize(240, 271);
        label_5 = new QLabel(agregar_stock_producto_existente);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 160, 51, 16));
        line_cantidad = new QLineEdit(agregar_stock_producto_existente);
        line_cantidad->setObjectName(QString::fromUtf8("line_cantidad"));
        line_cantidad->setGeometry(QRect(90, 160, 113, 20));
        line_codigo = new QLineEdit(agregar_stock_producto_existente);
        line_codigo->setObjectName(QString::fromUtf8("line_codigo"));
        line_codigo->setGeometry(QRect(90, 80, 113, 20));
        label = new QLabel(agregar_stock_producto_existente);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 0, 201, 71));
        label_4 = new QLabel(agregar_stock_producto_existente);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 100, 201, 71));
        label_2 = new QLabel(agregar_stock_producto_existente);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 80, 51, 16));
        pushButton_Agregar = new QPushButton(agregar_stock_producto_existente);
        pushButton_Agregar->setObjectName(QString::fromUtf8("pushButton_Agregar"));
        pushButton_Agregar->setGeometry(QRect(80, 200, 91, 31));

        retranslateUi(agregar_stock_producto_existente);

        QMetaObject::connectSlotsByName(agregar_stock_producto_existente);
    } // setupUi

    void retranslateUi(QWidget *agregar_stock_producto_existente)
    {
        agregar_stock_producto_existente->setWindowTitle(QApplication::translate("agregar_stock_producto_existente", "Agregar stock", nullptr));
        label_5->setText(QApplication::translate("agregar_stock_producto_existente", "Cantidad:", nullptr));
        label->setText(QApplication::translate("agregar_stock_producto_existente", "<html><head/><body><p>Ingrese el c\303\263digo del celular<br/>a agregar stock:</p></body></html>", nullptr));
        label_4->setText(QApplication::translate("agregar_stock_producto_existente", "<html><head/><body><p>Ingrese la cantidad que quiere agregar:</p></body></html>", nullptr));
        label_2->setText(QApplication::translate("agregar_stock_producto_existente", "Codigo:", nullptr));
        pushButton_Agregar->setText(QApplication::translate("agregar_stock_producto_existente", "Agregar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class agregar_stock_producto_existente: public Ui_agregar_stock_producto_existente {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGREGAR_STOCK_PRODUCTO_EXISTENTE_H
