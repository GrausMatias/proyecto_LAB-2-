/********************************************************************************
** Form generated from reading UI file 'modificar_vendedor.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MODIFICAR_VENDEDOR_H
#define UI_MODIFICAR_VENDEDOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_modificar_vendedor
{
public:
    QLabel *label;
    QLineEdit *line_dni;
    QLineEdit *line_sueldo;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *modificar;
    QPushButton *cancelar;

    void setupUi(QWidget *modificar_vendedor)
    {
        if (modificar_vendedor->objectName().isEmpty())
            modificar_vendedor->setObjectName(QString::fromUtf8("modificar_vendedor"));
        modificar_vendedor->resize(237, 168);
        label = new QLabel(modificar_vendedor);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 70, 81, 16));
        line_dni = new QLineEdit(modificar_vendedor);
        line_dni->setObjectName(QString::fromUtf8("line_dni"));
        line_dni->setGeometry(QRect(110, 70, 113, 20));
        line_sueldo = new QLineEdit(modificar_vendedor);
        line_sueldo->setObjectName(QString::fromUtf8("line_sueldo"));
        line_sueldo->setGeometry(QRect(110, 100, 113, 20));
        label_2 = new QLabel(modificar_vendedor);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 100, 81, 16));
        label_3 = new QLabel(modificar_vendedor);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 10, 231, 41));
        modificar = new QPushButton(modificar_vendedor);
        modificar->setObjectName(QString::fromUtf8("modificar"));
        modificar->setGeometry(QRect(30, 140, 75, 23));
        cancelar = new QPushButton(modificar_vendedor);
        cancelar->setObjectName(QString::fromUtf8("cancelar"));
        cancelar->setGeometry(QRect(130, 140, 75, 23));

        retranslateUi(modificar_vendedor);

        QMetaObject::connectSlotsByName(modificar_vendedor);
    } // setupUi

    void retranslateUi(QWidget *modificar_vendedor)
    {
        modificar_vendedor->setWindowTitle(QApplication::translate("modificar_vendedor", "Modificaci\303\263n de vendedor", nullptr));
        label->setText(QApplication::translate("modificar_vendedor", "DNI:", nullptr));
        label_2->setText(QApplication::translate("modificar_vendedor", "Nuevo sueldo:", nullptr));
        label_3->setText(QApplication::translate("modificar_vendedor", "<html><head/><body><p>Por favor ingrese el DNI del vendedor<br/>y su nuevo sueldo.</p></body></html>", nullptr));
        modificar->setText(QApplication::translate("modificar_vendedor", "Modificar", nullptr));
        cancelar->setText(QApplication::translate("modificar_vendedor", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class modificar_vendedor: public Ui_modificar_vendedor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MODIFICAR_VENDEDOR_H
