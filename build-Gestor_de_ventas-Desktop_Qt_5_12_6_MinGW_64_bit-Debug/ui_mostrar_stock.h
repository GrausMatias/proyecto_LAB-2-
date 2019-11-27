/********************************************************************************
** Form generated from reading UI file 'mostrar_stock.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOSTRAR_STOCK_H
#define UI_MOSTRAR_STOCK_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>

QT_BEGIN_NAMESPACE

class Ui_mostrar_stock
{
public:
    QTableWidget *tableWidget_stock;

    void setupUi(QDialog *mostrar_stock)
    {
        if (mostrar_stock->objectName().isEmpty())
            mostrar_stock->setObjectName(QString::fromUtf8("mostrar_stock"));
        mostrar_stock->resize(680, 532);
        tableWidget_stock = new QTableWidget(mostrar_stock);
        tableWidget_stock->setObjectName(QString::fromUtf8("tableWidget_stock"));
        tableWidget_stock->setGeometry(QRect(0, 60, 681, 471));

        retranslateUi(mostrar_stock);

        QMetaObject::connectSlotsByName(mostrar_stock);
    } // setupUi

    void retranslateUi(QDialog *mostrar_stock)
    {
        mostrar_stock->setWindowTitle(QApplication::translate("mostrar_stock", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mostrar_stock: public Ui_mostrar_stock {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOSTRAR_STOCK_H
