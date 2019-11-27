/********************************************************************************
** Form generated from reading UI file 'mostrar_informes_ventas.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOSTRAR_INFORMES_VENTAS_H
#define UI_MOSTRAR_INFORMES_VENTAS_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mostrar_informes_ventas
{
public:
    QTableWidget *tabletWidget_informe_ventas;
    QLabel *label;
    QComboBox *comboBox_marca;
    QLabel *label_4;
    QLabel *label_5;
    QComboBox *comboBox_pago;
    QLineEdit *lineEdit_vendedor;
    QLabel *label_6;
    QPushButton *pushButton_buscar;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_dia;
    QLabel *label_2;
    QLineEdit *lineEdit_mes;
    QLabel *label_3;
    QLineEdit *lineEdit_anio;

    void setupUi(QWidget *mostrar_informes_ventas)
    {
        if (mostrar_informes_ventas->objectName().isEmpty())
            mostrar_informes_ventas->setObjectName(QString::fromUtf8("mostrar_informes_ventas"));
        mostrar_informes_ventas->setEnabled(true);
        mostrar_informes_ventas->resize(708, 537);
        tabletWidget_informe_ventas = new QTableWidget(mostrar_informes_ventas);
        tabletWidget_informe_ventas->setObjectName(QString::fromUtf8("tabletWidget_informe_ventas"));
        tabletWidget_informe_ventas->setGeometry(QRect(10, 70, 691, 461));
        label = new QLabel(mostrar_informes_ventas);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(270, 10, 121, 16));
        QFont font;
        font.setPointSize(11);
        label->setFont(font);
        comboBox_marca = new QComboBox(mostrar_informes_ventas);
        comboBox_marca->addItem(QString());
        comboBox_marca->addItem(QString());
        comboBox_marca->addItem(QString());
        comboBox_marca->addItem(QString());
        comboBox_marca->addItem(QString());
        comboBox_marca->addItem(QString());
        comboBox_marca->addItem(QString());
        comboBox_marca->addItem(QString());
        comboBox_marca->addItem(QString());
        comboBox_marca->addItem(QString());
        comboBox_marca->addItem(QString());
        comboBox_marca->addItem(QString());
        comboBox_marca->setObjectName(QString::fromUtf8("comboBox_marca"));
        comboBox_marca->setGeometry(QRect(70, 40, 171, 22));
        comboBox_marca->setFont(font);
        label_4 = new QLabel(mostrar_informes_ventas);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 40, 47, 21));
        label_4->setFont(font);
        label_5 = new QLabel(mostrar_informes_ventas);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(270, 40, 121, 16));
        label_5->setFont(font);
        comboBox_pago = new QComboBox(mostrar_informes_ventas);
        comboBox_pago->addItem(QString());
        comboBox_pago->addItem(QString());
        comboBox_pago->addItem(QString());
        comboBox_pago->setObjectName(QString::fromUtf8("comboBox_pago"));
        comboBox_pago->setGeometry(QRect(400, 40, 91, 22));
        comboBox_pago->setFont(font);
        lineEdit_vendedor = new QLineEdit(mostrar_informes_ventas);
        lineEdit_vendedor->setObjectName(QString::fromUtf8("lineEdit_vendedor"));
        lineEdit_vendedor->setGeometry(QRect(130, 10, 113, 20));
        label_6 = new QLabel(mostrar_informes_ventas);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(10, 10, 111, 16));
        pushButton_buscar = new QPushButton(mostrar_informes_ventas);
        pushButton_buscar->setObjectName(QString::fromUtf8("pushButton_buscar"));
        pushButton_buscar->setGeometry(QRect(540, 20, 141, 31));
        widget = new QWidget(mostrar_informes_ventas);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(390, 10, 101, 22));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        lineEdit_dia = new QLineEdit(widget);
        lineEdit_dia->setObjectName(QString::fromUtf8("lineEdit_dia"));

        horizontalLayout->addWidget(lineEdit_dia);

        label_2 = new QLabel(widget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        horizontalLayout->addWidget(label_2);

        lineEdit_mes = new QLineEdit(widget);
        lineEdit_mes->setObjectName(QString::fromUtf8("lineEdit_mes"));

        horizontalLayout->addWidget(lineEdit_mes);

        label_3 = new QLabel(widget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        horizontalLayout->addWidget(label_3);

        lineEdit_anio = new QLineEdit(widget);
        lineEdit_anio->setObjectName(QString::fromUtf8("lineEdit_anio"));

        horizontalLayout->addWidget(lineEdit_anio);


        retranslateUi(mostrar_informes_ventas);

        QMetaObject::connectSlotsByName(mostrar_informes_ventas);
    } // setupUi

    void retranslateUi(QWidget *mostrar_informes_ventas)
    {
        mostrar_informes_ventas->setWindowTitle(QApplication::translate("mostrar_informes_ventas", "Informes de ventas", nullptr));
        label->setText(QApplication::translate("mostrar_informes_ventas", "Por dia/mes/a\303\261o :", nullptr));
        comboBox_marca->setItemText(0, QApplication::translate("mostrar_informes_ventas", "Seleccione una marca", nullptr));
        comboBox_marca->setItemText(1, QApplication::translate("mostrar_informes_ventas", "Alcatel", nullptr));
        comboBox_marca->setItemText(2, QApplication::translate("mostrar_informes_ventas", "Apple", nullptr));
        comboBox_marca->setItemText(3, QApplication::translate("mostrar_informes_ventas", "BlackBerry", nullptr));
        comboBox_marca->setItemText(4, QApplication::translate("mostrar_informes_ventas", "Google", nullptr));
        comboBox_marca->setItemText(5, QApplication::translate("mostrar_informes_ventas", "Huawei", nullptr));
        comboBox_marca->setItemText(6, QApplication::translate("mostrar_informes_ventas", "Kodak", nullptr));
        comboBox_marca->setItemText(7, QApplication::translate("mostrar_informes_ventas", "LG", nullptr));
        comboBox_marca->setItemText(8, QApplication::translate("mostrar_informes_ventas", "Motorola", nullptr));
        comboBox_marca->setItemText(9, QApplication::translate("mostrar_informes_ventas", "Nokia", nullptr));
        comboBox_marca->setItemText(10, QApplication::translate("mostrar_informes_ventas", "Samsung", nullptr));
        comboBox_marca->setItemText(11, QApplication::translate("mostrar_informes_ventas", "Xiaomi", nullptr));

        label_4->setText(QApplication::translate("mostrar_informes_ventas", "Marca:", nullptr));
        label_5->setText(QApplication::translate("mostrar_informes_ventas", "Metodos de pago:", nullptr));
        comboBox_pago->setItemText(0, QApplication::translate("mostrar_informes_ventas", "Efectivo", nullptr));
        comboBox_pago->setItemText(1, QApplication::translate("mostrar_informes_ventas", "Debito", nullptr));
        comboBox_pago->setItemText(2, QApplication::translate("mostrar_informes_ventas", "Credito", nullptr));

        label_6->setText(QApplication::translate("mostrar_informes_ventas", "<html><head/><body><p><span style=\" font-size:11pt;\">Vendedor (DNI):</span></p></body></html>", nullptr));
        pushButton_buscar->setText(QApplication::translate("mostrar_informes_ventas", "Buscar", nullptr));
        label_2->setText(QApplication::translate("mostrar_informes_ventas", "/", nullptr));
        label_3->setText(QApplication::translate("mostrar_informes_ventas", "/", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mostrar_informes_ventas: public Ui_mostrar_informes_ventas {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOSTRAR_INFORMES_VENTAS_H
