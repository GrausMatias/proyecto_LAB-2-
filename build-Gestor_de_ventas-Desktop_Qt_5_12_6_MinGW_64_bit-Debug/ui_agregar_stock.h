/********************************************************************************
** Form generated from reading UI file 'agregar_stock.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AGREGAR_STOCK_H
#define UI_AGREGAR_STOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_agregar_stock
{
public:
    QLabel *label;
    QLineEdit *line_marca;
    QLabel *label_2;
    QLineEdit *line_modelo;
    QLabel *label_3;
    QLineEdit *line_interna;
    QLabel *label_4;
    QLineEdit *line_ram;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLineEdit *line_trasera;
    QLineEdit *line_delantera;
    QLineEdit *line_precio;
    QLineEdit *line_stock;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;
    QLabel *label_15;
    QPushButton *agregar;
    QPushButton *cancelar;
    QLabel *label_16;
    QLineEdit *line_codigo;
    QComboBox *comboBox;

    void setupUi(QWidget *agregar_stock)
    {
        if (agregar_stock->objectName().isEmpty())
            agregar_stock->setObjectName(QString::fromUtf8("agregar_stock"));
        agregar_stock->resize(269, 359);
        label = new QLabel(agregar_stock);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(30, 50, 101, 16));
        line_marca = new QLineEdit(agregar_stock);
        line_marca->setObjectName(QString::fromUtf8("line_marca"));
        line_marca->setGeometry(QRect(130, 50, 113, 20));
        label_2 = new QLabel(agregar_stock);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 80, 101, 16));
        line_modelo = new QLineEdit(agregar_stock);
        line_modelo->setObjectName(QString::fromUtf8("line_modelo"));
        line_modelo->setGeometry(QRect(130, 80, 113, 20));
        label_3 = new QLabel(agregar_stock);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(30, 110, 101, 16));
        line_interna = new QLineEdit(agregar_stock);
        line_interna->setObjectName(QString::fromUtf8("line_interna"));
        line_interna->setGeometry(QRect(130, 110, 113, 20));
        label_4 = new QLabel(agregar_stock);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(30, 140, 101, 16));
        line_ram = new QLineEdit(agregar_stock);
        line_ram->setObjectName(QString::fromUtf8("line_ram"));
        line_ram->setGeometry(QRect(130, 140, 113, 20));
        label_5 = new QLabel(agregar_stock);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(30, 170, 101, 16));
        label_6 = new QLabel(agregar_stock);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(30, 200, 101, 16));
        label_7 = new QLabel(agregar_stock);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(30, 230, 101, 16));
        label_8 = new QLabel(agregar_stock);
        label_8->setObjectName(QString::fromUtf8("label_8"));
        label_8->setGeometry(QRect(30, 260, 101, 16));
        label_9 = new QLabel(agregar_stock);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(30, 290, 101, 16));
        line_trasera = new QLineEdit(agregar_stock);
        line_trasera->setObjectName(QString::fromUtf8("line_trasera"));
        line_trasera->setGeometry(QRect(130, 200, 113, 20));
        line_delantera = new QLineEdit(agregar_stock);
        line_delantera->setObjectName(QString::fromUtf8("line_delantera"));
        line_delantera->setGeometry(QRect(130, 230, 113, 20));
        line_precio = new QLineEdit(agregar_stock);
        line_precio->setObjectName(QString::fromUtf8("line_precio"));
        line_precio->setGeometry(QRect(130, 260, 113, 20));
        line_stock = new QLineEdit(agregar_stock);
        line_stock->setObjectName(QString::fromUtf8("line_stock"));
        line_stock->setGeometry(QRect(130, 290, 113, 20));
        label_10 = new QLabel(agregar_stock);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(250, 110, 47, 16));
        label_11 = new QLabel(agregar_stock);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(250, 140, 47, 16));
        label_12 = new QLabel(agregar_stock);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(250, 200, 47, 16));
        label_13 = new QLabel(agregar_stock);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(250, 230, 47, 16));
        label_14 = new QLabel(agregar_stock);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(250, 260, 47, 16));
        label_15 = new QLabel(agregar_stock);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(250, 290, 47, 16));
        agregar = new QPushButton(agregar_stock);
        agregar->setObjectName(QString::fromUtf8("agregar"));
        agregar->setGeometry(QRect(50, 320, 75, 23));
        cancelar = new QPushButton(agregar_stock);
        cancelar->setObjectName(QString::fromUtf8("cancelar"));
        cancelar->setGeometry(QRect(150, 320, 75, 23));
        label_16 = new QLabel(agregar_stock);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(30, 20, 101, 16));
        line_codigo = new QLineEdit(agregar_stock);
        line_codigo->setObjectName(QString::fromUtf8("line_codigo"));
        line_codigo->setGeometry(QRect(130, 20, 113, 20));
        comboBox = new QComboBox(agregar_stock);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(170, 170, 41, 22));
        QWidget::setTabOrder(line_codigo, line_marca);
        QWidget::setTabOrder(line_marca, line_modelo);
        QWidget::setTabOrder(line_modelo, line_interna);
        QWidget::setTabOrder(line_interna, line_ram);
        QWidget::setTabOrder(line_ram, line_trasera);
        QWidget::setTabOrder(line_trasera, line_delantera);
        QWidget::setTabOrder(line_delantera, line_precio);
        QWidget::setTabOrder(line_precio, line_stock);
        QWidget::setTabOrder(line_stock, agregar);
        QWidget::setTabOrder(agregar, cancelar);

        retranslateUi(agregar_stock);

        QMetaObject::connectSlotsByName(agregar_stock);
    } // setupUi

    void retranslateUi(QWidget *agregar_stock)
    {
        agregar_stock->setWindowTitle(QApplication::translate("agregar_stock", "Agregar producto", nullptr));
        agregar_stock->setWindowFilePath(QString());
        label->setText(QApplication::translate("agregar_stock", "Marca:", nullptr));
        label_2->setText(QApplication::translate("agregar_stock", "Modelo:", nullptr));
        label_3->setText(QApplication::translate("agregar_stock", "Memoria interna:", nullptr));
        label_4->setText(QApplication::translate("agregar_stock", "Memoria RAM:", nullptr));
        label_5->setText(QApplication::translate("agregar_stock", "Huella:", nullptr));
        label_6->setText(QApplication::translate("agregar_stock", "C\303\241mara trasera:", nullptr));
        label_7->setText(QApplication::translate("agregar_stock", "C\303\241mara delantera:", nullptr));
        label_8->setText(QApplication::translate("agregar_stock", "Precio:", nullptr));
        label_9->setText(QApplication::translate("agregar_stock", "Stock:", nullptr));
        label_10->setText(QApplication::translate("agregar_stock", "GB", nullptr));
        label_11->setText(QApplication::translate("agregar_stock", "GB", nullptr));
        label_12->setText(QApplication::translate("agregar_stock", "Mpx", nullptr));
        label_13->setText(QApplication::translate("agregar_stock", "Mpx", nullptr));
        label_14->setText(QApplication::translate("agregar_stock", "$", nullptr));
        label_15->setText(QApplication::translate("agregar_stock", "u", nullptr));
        agregar->setText(QApplication::translate("agregar_stock", "Agregar", nullptr));
        cancelar->setText(QApplication::translate("agregar_stock", "Cancelar", nullptr));
        label_16->setText(QApplication::translate("agregar_stock", "Codigo:", nullptr));
        comboBox->setItemText(0, QApplication::translate("agregar_stock", "No", nullptr));
        comboBox->setItemText(1, QApplication::translate("agregar_stock", "Si", nullptr));

    } // retranslateUi

};

namespace Ui {
    class agregar_stock: public Ui_agregar_stock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AGREGAR_STOCK_H
