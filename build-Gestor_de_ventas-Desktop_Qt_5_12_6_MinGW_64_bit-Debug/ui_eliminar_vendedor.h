/********************************************************************************
** Form generated from reading UI file 'eliminar_vendedor.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ELIMINAR_VENDEDOR_H
#define UI_ELIMINAR_VENDEDOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_eliminar_vendedor
{
public:
    QPushButton *eliminar;
    QLabel *label;
    QLabel *label_3;
    QLineEdit *line_dni;

    void setupUi(QWidget *eliminar_vendedor)
    {
        if (eliminar_vendedor->objectName().isEmpty())
            eliminar_vendedor->setObjectName(QString::fromUtf8("eliminar_vendedor"));
        eliminar_vendedor->resize(240, 170);
        eliminar = new QPushButton(eliminar_vendedor);
        eliminar->setObjectName(QString::fromUtf8("eliminar"));
        eliminar->setGeometry(QRect(70, 120, 91, 31));
        label = new QLabel(eliminar_vendedor);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 80, 81, 16));
        label_3 = new QLabel(eliminar_vendedor);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 20, 231, 41));
        line_dni = new QLineEdit(eliminar_vendedor);
        line_dni->setObjectName(QString::fromUtf8("line_dni"));
        line_dni->setGeometry(QRect(100, 80, 113, 20));

        retranslateUi(eliminar_vendedor);

        QMetaObject::connectSlotsByName(eliminar_vendedor);
    } // setupUi

    void retranslateUi(QWidget *eliminar_vendedor)
    {
        eliminar_vendedor->setWindowTitle(QApplication::translate("eliminar_vendedor", "Eliminar vendedor", nullptr));
        eliminar->setText(QApplication::translate("eliminar_vendedor", "Eliminar", nullptr));
        label->setText(QApplication::translate("eliminar_vendedor", "DNI:", nullptr));
        label_3->setText(QApplication::translate("eliminar_vendedor", "<html><head/><body><p>Por favor ingrese el DNI del vendedor<br/>a eliminar:</p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class eliminar_vendedor: public Ui_eliminar_vendedor {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ELIMINAR_VENDEDOR_H
