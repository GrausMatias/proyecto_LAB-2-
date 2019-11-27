/********************************************************************************
** Form generated from reading UI file 'menu_principal.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_PRINCIPAL_H
#define UI_MENU_PRINCIPAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_menu_principal
{
public:
    QWidget *centralwidget;
    QPushButton *Pagar;
    QTableWidget *tabletWidget_informe_ventas;
    QPushButton *pushButton;
    QLineEdit *line_nombre;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *line_apellido;
    QLabel *label_3;
    QLineEdit *line_dni;
    QLabel *label_4;
    QFrame *line;
    QFrame *line_2;
    QPushButton *pushButton_2;
    QPushButton *Agregar_venta;
    QLabel *label_5;
    QLabel *label_usuario;

    void setupUi(QMainWindow *menu_principal)
    {
        if (menu_principal->objectName().isEmpty())
            menu_principal->setObjectName(QString::fromUtf8("menu_principal"));
        menu_principal->resize(760, 533);
        centralwidget = new QWidget(menu_principal);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        Pagar = new QPushButton(centralwidget);
        Pagar->setObjectName(QString::fromUtf8("Pagar"));
        Pagar->setGeometry(QRect(600, 460, 141, 31));
        QFont font;
        font.setPointSize(12);
        Pagar->setFont(font);
        tabletWidget_informe_ventas = new QTableWidget(centralwidget);
        tabletWidget_informe_ventas->setObjectName(QString::fromUtf8("tabletWidget_informe_ventas"));
        tabletWidget_informe_ventas->setGeometry(QRect(0, 270, 761, 151));
        tabletWidget_informe_ventas->setAutoScroll(true);
        tabletWidget_informe_ventas->setTextElideMode(Qt::ElideNone);
        tabletWidget_informe_ventas->setColumnCount(0);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(660, 0, 91, 21));
        line_nombre = new QLineEdit(centralwidget);
        line_nombre->setObjectName(QString::fromUtf8("line_nombre"));
        line_nombre->setGeometry(QRect(160, 50, 113, 20));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(80, 50, 91, 21));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(300, 50, 91, 21));
        line_apellido = new QLineEdit(centralwidget);
        line_apellido->setObjectName(QString::fromUtf8("line_apellido"));
        line_apellido->setGeometry(QRect(370, 50, 113, 20));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(530, 50, 91, 21));
        line_dni = new QLineEdit(centralwidget);
        line_dni->setObjectName(QString::fromUtf8("line_dni"));
        line_dni->setGeometry(QRect(580, 50, 113, 20));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 0, 91, 41));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 90, 761, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(0, 200, 761, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(280, 130, 201, 41));
        Agregar_venta = new QPushButton(centralwidget);
        Agregar_venta->setObjectName(QString::fromUtf8("Agregar_venta"));
        Agregar_venta->setGeometry(QRect(440, 460, 141, 31));
        Agregar_venta->setFont(font);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(490, 0, 71, 16));
        label_usuario = new QLabel(centralwidget);
        label_usuario->setObjectName(QString::fromUtf8("label_usuario"));
        label_usuario->setGeometry(QRect(570, 0, 91, 16));
        menu_principal->setCentralWidget(centralwidget);
        QWidget::setTabOrder(line_nombre, line_apellido);
        QWidget::setTabOrder(line_apellido, line_dni);
        QWidget::setTabOrder(line_dni, pushButton_2);
        QWidget::setTabOrder(pushButton_2, tabletWidget_informe_ventas);
        QWidget::setTabOrder(tabletWidget_informe_ventas, Agregar_venta);
        QWidget::setTabOrder(Agregar_venta, Pagar);
        QWidget::setTabOrder(Pagar, pushButton);

        retranslateUi(menu_principal);

        QMetaObject::connectSlotsByName(menu_principal);
    } // setupUi

    void retranslateUi(QMainWindow *menu_principal)
    {
        menu_principal->setWindowTitle(QApplication::translate("menu_principal", "Men\303\272 principal", nullptr));
        Pagar->setText(QApplication::translate("menu_principal", "Pagar", nullptr));
        pushButton->setText(QApplication::translate("menu_principal", "Cerrar sesion", nullptr));
        label->setText(QApplication::translate("menu_principal", "<html><head/><body><p><span style=\" font-size:11pt;\">Nombres:</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("menu_principal", "<html><head/><body><p><span style=\" font-size:11pt;\">Apellido:</span></p></body></html>", nullptr));
        label_3->setText(QApplication::translate("menu_principal", "<html><head/><body><p><span style=\" font-size:11pt;\">DNI:</span></p></body></html>", nullptr));
        label_4->setText(QApplication::translate("menu_principal", "<html><head/><body><p><span style=\" font-size:14pt; font-weight:600; text-decoration: underline;\">Cliente</span></p></body></html>", nullptr));
        pushButton_2->setText(QApplication::translate("menu_principal", "Ver stock de celulares", nullptr));
        Agregar_venta->setText(QApplication::translate("menu_principal", "Agregar", nullptr));
        label_5->setText(QApplication::translate("menu_principal", "USUARIO:", nullptr));
        label_usuario->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class menu_principal: public Ui_menu_principal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_PRINCIPAL_H
