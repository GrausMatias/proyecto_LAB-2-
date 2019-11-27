/********************************************************************************
** Form generated from reading UI file 'agregar_producto_venta.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGREGAR_PRODUCTO_VENTA_H
#define UI_AGREGAR_PRODUCTO_VENTA_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_agregar_producto_venta
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *layoutWidget_6;
    QVBoxLayout *verticalLayout_5;
    QLineEdit *line_codigo;
    QLineEdit *line_cantidad;
    QLabel *precio;
    QWidget *layoutWidget_3;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_metodos_pago;
    QComboBox *combo_met_pago;
    QWidget *layoutWidget_4;
    QVBoxLayout *verticalLayout;
    QLabel *label_marca;
    QLabel *label_cantidad;
    QLabel *label_precio;
    QDialogButtonBox *buttonBox_2;

    void setupUi(QDialog *agregar_producto_venta)
    {
        if (agregar_producto_venta->objectName().isEmpty())
            agregar_producto_venta->setObjectName(QString::fromUtf8("agregar_producto_venta"));
        agregar_producto_venta->resize(300, 300);
        buttonBox = new QDialogButtonBox(agregar_producto_venta);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(10, 600, 461, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        layoutWidget_6 = new QWidget(agregar_producto_venta);
        layoutWidget_6->setObjectName(QString::fromUtf8("layoutWidget_6"));
        layoutWidget_6->setGeometry(QRect(150, 20, 121, 74));
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

        layoutWidget_3 = new QWidget(agregar_producto_venta);
        layoutWidget_3->setObjectName(QString::fromUtf8("layoutWidget_3"));
        layoutWidget_3->setGeometry(QRect(20, 140, 251, 41));
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

        layoutWidget_4 = new QWidget(agregar_producto_venta);
        layoutWidget_4->setObjectName(QString::fromUtf8("layoutWidget_4"));
        layoutWidget_4->setGeometry(QRect(20, 20, 121, 71));
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

        buttonBox_2 = new QDialogButtonBox(agregar_producto_venta);
        buttonBox_2->setObjectName(QString::fromUtf8("buttonBox_2"));
        buttonBox_2->setGeometry(QRect(30, 230, 191, 51));
        buttonBox_2->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(agregar_producto_venta);
        QObject::connect(buttonBox, SIGNAL(accepted()), agregar_producto_venta, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), agregar_producto_venta, SLOT(reject()));

        QMetaObject::connectSlotsByName(agregar_producto_venta);
    } // setupUi

    void retranslateUi(QDialog *agregar_producto_venta)
    {
        agregar_producto_venta->setWindowTitle(QApplication::translate("agregar_producto_venta", "Dialog", nullptr));
        precio->setText(QApplication::translate("agregar_producto_venta", "$", nullptr));
        label_metodos_pago->setText(QApplication::translate("agregar_producto_venta", "<html><head/><body><p><span style=\" font-size:11pt;\">Metodos de pago :</span></p></body></html>", nullptr));
        combo_met_pago->setItemText(0, QApplication::translate("agregar_producto_venta", "Efectivo", nullptr));
        combo_met_pago->setItemText(1, QApplication::translate("agregar_producto_venta", "Debito", nullptr));
        combo_met_pago->setItemText(2, QApplication::translate("agregar_producto_venta", "Credito", nullptr));

        label_marca->setText(QApplication::translate("agregar_producto_venta", "<html><head/><body><p><span style=\" font-size:11pt;\">C\303\263digo de celular:</span></p></body></html>", nullptr));
        label_cantidad->setText(QApplication::translate("agregar_producto_venta", "<html><head/><body><p><span style=\" font-size:11pt;\">Cantidad :</span></p></body></html>", nullptr));
        label_precio->setText(QApplication::translate("agregar_producto_venta", "<html><head/><body><p><span style=\" font-size:11pt;\">Precio unitario:</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class agregar_producto_venta: public Ui_agregar_producto_venta {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGREGAR_PRODUCTO_VENTA_H
