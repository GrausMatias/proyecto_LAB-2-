/********************************************************************************
** Form generated from reading UI file 'ventana_principal.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VENTANA_PRINCIPAL_H
#define UI_VENTANA_PRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ventana_principal
{
public:
    QWidget *centralwidget;
    QLineEdit *line_usu;
    QLineEdit *line_con;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton;
    QRadioButton *radioButton;
    QPushButton *pushButton_2;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *ventana_principal)
    {
        if (ventana_principal->objectName().isEmpty())
            ventana_principal->setObjectName(QString::fromUtf8("ventana_principal"));
        ventana_principal->resize(602, 368);
        centralwidget = new QWidget(ventana_principal);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        line_usu = new QLineEdit(centralwidget);
        line_usu->setObjectName(QString::fromUtf8("line_usu"));
        line_usu->setGeometry(QRect(220, 100, 141, 31));
        line_con = new QLineEdit(centralwidget);
        line_con->setObjectName(QString::fromUtf8("line_con"));
        line_con->setGeometry(QRect(220, 180, 141, 31));
        line_con->setEchoMode(QLineEdit::Password);
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(220, 80, 47, 13));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(220, 160, 101, 16));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(240, 260, 101, 31));
        radioButton = new QRadioButton(centralwidget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(220, 220, 131, 17));
        radioButton->setCheckable(true);
        radioButton->setChecked(false);
        radioButton->setAutoExclusive(false);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(500, 20, 91, 31));
        ventana_principal->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(ventana_principal);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ventana_principal->setStatusBar(statusbar);

        retranslateUi(ventana_principal);

        QMetaObject::connectSlotsByName(ventana_principal);
    } // setupUi

    void retranslateUi(QMainWindow *ventana_principal)
    {
        ventana_principal->setWindowTitle(QApplication::translate("ventana_principal", "GESTOR DE VENTAS", nullptr));
        label->setText(QApplication::translate("ventana_principal", "Usuario:", nullptr));
        label_2->setText(QApplication::translate("ventana_principal", "Contrase\303\261a:", nullptr));
        pushButton->setText(QApplication::translate("ventana_principal", "Ingresar", nullptr));
        radioButton->setText(QApplication::translate("ventana_principal", "Mostrar contrase\303\261a", nullptr));
        pushButton_2->setText(QApplication::translate("ventana_principal", "Administrador", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ventana_principal: public Ui_ventana_principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VENTANA_PRINCIPAL_H
