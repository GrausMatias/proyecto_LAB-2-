/********************************************************************************
** Form generated from reading UI file 'mostrar_vendedores.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MOSTRAR_VENDEDORES_H
#define UI_MOSTRAR_VENDEDORES_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mostrar_vendedores
{
public:
    QHBoxLayout *horizontalLayout;
    QTableWidget *tableWidget;

    void setupUi(QWidget *mostrar_vendedores)
    {
        if (mostrar_vendedores->objectName().isEmpty())
            mostrar_vendedores->setObjectName(QString::fromUtf8("mostrar_vendedores"));
        mostrar_vendedores->resize(548, 538);
        horizontalLayout = new QHBoxLayout(mostrar_vendedores);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        tableWidget = new QTableWidget(mostrar_vendedores);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        horizontalLayout->addWidget(tableWidget);


        retranslateUi(mostrar_vendedores);

        QMetaObject::connectSlotsByName(mostrar_vendedores);
    } // setupUi

    void retranslateUi(QWidget *mostrar_vendedores)
    {
        mostrar_vendedores->setWindowTitle(QApplication::translate("mostrar_vendedores", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mostrar_vendedores: public Ui_mostrar_vendedores {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MOSTRAR_VENDEDORES_H
