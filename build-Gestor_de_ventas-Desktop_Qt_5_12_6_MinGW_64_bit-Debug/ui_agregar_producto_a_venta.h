/********************************************************************************
** Form generated from reading UI file 'agregar_producto_a_venta.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGREGAR_PRODUCTO_A_VENTA_H
#define UI_AGREGAR_PRODUCTO_A_VENTA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_agregar_producto_a_venta
{
public:
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_metodos_pago;
    QComboBox *combo_met_pago;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout;
    QLabel *label_marca;
    QLabel *label_cantidad;
    QLabel *label_precio;
    QLineEdit *Total_mostrar;
    QLabel *label_total;
    QWidget *layoutWidget_6;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *line_codigo;
    QLineEdit *line_cantidad;
    QLabel *precio;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *agregar_producto_a_venta)
    {
        if (agregar_producto_a_venta->objectName().isEmpty())
            agregar_producto_a_venta->setObjectName(QString::fromUtf8("agregar_producto_a_venta"));
        agregar_producto_a_venta->resize(308, 292);
        layoutWidget_3 = new QWidget(agregar_producto_a_venta);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(30, 110, 251, 41));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget_3);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_metodos_pago = new QLabel(layoutWidget_3);
        label_metodos_pago->setObjectName(QString::fromUtf8("label_metodos_pago"));

        horizontalLayout_2->addWidget(label_metodos_pago);

        combo_met_pago = new QComboBox(layoutWidget_3);
        combo_met_pago->addItem(QString());
        combo_met_pago->addItem(QString());
        combo_met_pago->addItem(QString());
        combo_met_pago->setObjectName(QString::fromUtf8("combo_met_pago"));

        horizontalLayout_2->addWidget(combo_met_pago);

        layoutWidget_4 = new QWidget(agregar_producto_a_venta);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(30, 10, 121, 71));
        verticalLayout = new QVBoxLayout(layoutWidget_4);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        label_marca = new QLabel(layoutWidget_4);
        label_marca->setObjectName(QString::fromUtf8("label_marca"));

        verticalLayout->addWidget(label_marca);

        label_cantidad = new QLabel(layoutWidget_4);
        label_cantidad->setObjectName(QString::fromUtf8("label_cantidad"));

        verticalLayout->addWidget(label_cantidad);

        label_precio = new QLabel(layoutWidget_4);
        label_precio->setObjectName(QString::fromUtf8("label_precio"));

        verticalLayout->addWidget(label_precio);

        Total_mostrar = new QLineEdit(agregar_producto_a_venta);
        Total_mostrar->setObjectName(QString::fromUtf8("Total_mostrar"));
        Total_mostrar->setGeometry(QRect(90, 190, 121, 20));
        label_total = new QLabel(agregar_producto_a_venta);
        label_total->setObjectName(QString::fromUtf8("label_total"));
        label_total->setGeometry(QRect(120, 160, 61, 16));
        QFont font;
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label_total->setFont(font);
        layoutWidget_6 = new QWidget(agregar_producto_a_venta);
        layoutWidget_6->setObjectName(QString::fromUtf8("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(160, 10, 121, 74));
        verticalLayout_5 = new QVBoxLayout(layoutWidget_6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        verticalLayout_5->setContentsMargins(0, 0, 0, 0);
        line_codigo = new QLineEdit(layoutWidget_6);
        line_codigo->setObjectName(QString::fromUtf8("line_codigo"));

        verticalLayout_5->addWidget(line_codigo);

        line_cantidad = new QLineEdit(layoutWidget_6);
        line_cantidad->setObjectName(QString::fromUtf8("line_cantidad"));

        verticalLayout_5->addWidget(line_cantidad);

        precio = new QLabel(layoutWidget_6);
        precio->setObjectName(QString::fromUtf8("precio"));

        verticalLayout_5->addWidget(precio);

        pushButton = new QPushButton(agregar_producto_a_venta);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(40, 230, 101, 31));
        pushButton_2 = new QPushButton(agregar_producto_a_venta);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(170, 230, 101, 31));

        retranslateUi(agregar_producto_a_venta);

        QMetaObject::connectSlotsByName(agregar_producto_a_venta);
    } // setupUi

    void retranslateUi(QWidget *agregar_producto_a_venta)
    {
        agregar_producto_a_venta->setWindowTitle(QApplication::translate("agregar_producto_a_venta", "Agregar producto", nullptr));
        label_metodos_pago->setText(QApplication::translate("agregar_producto_a_venta", "<html><head/><body><p><span style=\" font-size:11pt;\">Metodos de pago :</span></p></body></html>", nullptr));
        combo_met_pago->setItemText(0, QApplication::translate("agregar_producto_a_venta", "Efectivo", nullptr));
        combo_met_pago->setItemText(1, QApplication::translate("agregar_producto_a_venta", "Debito", nullptr));
        combo_met_pago->setItemText(2, QApplication::translate("agregar_producto_a_venta", "Credito", nullptr));

        label_marca->setText(QApplication::translate("agregar_producto_a_venta", "<html><head/><body><p><span style=\" font-size:11pt;\">C\303\263digo de celular:</span></p></body></html>", nullptr));
        label_cantidad->setText(QApplication::translate("agregar_producto_a_venta", "<html><head/><body><p><span style=\" font-size:11pt;\">Cantidad :</span></p></body></html>", nullptr));
        label_precio->setText(QApplication::translate("agregar_producto_a_venta", "<html><head/><body><p><span style=\" font-size:11pt;\">Precio unitario:</span></p></body></html>", nullptr));
        label_total->setText(QApplication::translate("agregar_producto_a_venta", "TOTAL", nullptr));
        precio->setText(QApplication::translate("agregar_producto_a_venta", "$", nullptr));
        pushButton->setText(QApplication::translate("agregar_producto_a_venta", "Agregar ", nullptr));
        pushButton_2->setText(QApplication::translate("agregar_producto_a_venta", "Cancelar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class agregar_producto_a_venta: public Ui_agregar_producto_a_venta {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGREGAR_PRODUCTO_A_VENTA_H
