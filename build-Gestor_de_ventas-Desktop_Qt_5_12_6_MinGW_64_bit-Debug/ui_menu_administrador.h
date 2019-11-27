/********************************************************************************
** Form generated from reading UI file 'menu_administrador.ui'
**
** Created by: Qt User Interface Compiler version 5.12.6
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MENU_ADMINISTRADOR_H
#define UI_MENU_ADMINISTRADOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_menu_administrador
{
public:
    QWidget *centralwidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_6;
    QLabel *label_3;
    QPushButton *pushButton_7;
    QPushButton *pushButton_9;
    QFrame *line;
    QFrame *line_2;
    QPushButton *pushButton_8;
    QPushButton *pushButton_10;
    QPushButton *pushButton_3;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *menu_administrador)
    {
        if (menu_administrador->objectName().isEmpty())
            menu_administrador->setObjectName(QString::fromUtf8("menu_administrador"));
        menu_administrador->resize(642, 410);
        centralwidget = new QWidget(menu_administrador);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(220, 20, 201, 41));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(440, 60, 201, 41));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 151, 31));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 120, 151, 31));
        pushButton_4 = new QPushButton(centralwidget);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(0, 160, 201, 41));
        pushButton_6 = new QPushButton(centralwidget);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(220, 160, 201, 41));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 230, 81, 21));
        pushButton_7 = new QPushButton(centralwidget);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(370, 270, 201, 41));
        pushButton_9 = new QPushButton(centralwidget);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(80, 270, 201, 41));
        line = new QFrame(centralwidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(0, 110, 641, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(centralwidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(0, 220, 641, 16));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        pushButton_8 = new QPushButton(centralwidget);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(0, 60, 201, 41));
        pushButton_10 = new QPushButton(centralwidget);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(440, 160, 201, 41));
        pushButton_3 = new QPushButton(centralwidget);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(220, 70, 201, 41));
        menu_administrador->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(menu_administrador);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        menu_administrador->setStatusBar(statusbar);
        QWidget::setTabOrder(pushButton_8, pushButton);
        QWidget::setTabOrder(pushButton, pushButton_3);
        QWidget::setTabOrder(pushButton_3, pushButton_2);
        QWidget::setTabOrder(pushButton_2, pushButton_4);
        QWidget::setTabOrder(pushButton_4, pushButton_6);
        QWidget::setTabOrder(pushButton_6, pushButton_10);
        QWidget::setTabOrder(pushButton_10, pushButton_9);
        QWidget::setTabOrder(pushButton_9, pushButton_7);

        retranslateUi(menu_administrador);

        QMetaObject::connectSlotsByName(menu_administrador);
    } // setupUi

    void retranslateUi(QMainWindow *menu_administrador)
    {
        menu_administrador->setWindowTitle(QApplication::translate("menu_administrador", "Men\303\272 (administrador)", nullptr));
        pushButton->setText(QApplication::translate("menu_administrador", "Registrar nuevo vendedor", nullptr));
        pushButton_2->setText(QApplication::translate("menu_administrador", "Modificar sueldo vendedor", nullptr));
        label->setText(QApplication::translate("menu_administrador", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Vendedores</span></p></body></html>", nullptr));
        label_2->setText(QApplication::translate("menu_administrador", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Stock</span></p></body></html>", nullptr));
        pushButton_4->setText(QApplication::translate("menu_administrador", "Agregar producto nuevo", nullptr));
        pushButton_6->setText(QApplication::translate("menu_administrador", "Agregar stock a producto existente", nullptr));
        label_3->setText(QApplication::translate("menu_administrador", "<html><head/><body><p><span style=\" font-size:12pt; font-weight:600;\">Informes</span></p></body></html>", nullptr));
        pushButton_7->setText(QApplication::translate("menu_administrador", "Stock", nullptr));
        pushButton_9->setText(QApplication::translate("menu_administrador", "Ventas", nullptr));
        pushButton_8->setText(QApplication::translate("menu_administrador", "Ver vendedores", nullptr));
        pushButton_10->setText(QApplication::translate("menu_administrador", "Modificar precio", nullptr));
        pushButton_3->setText(QApplication::translate("menu_administrador", "Eliminar vendedor", nullptr));
    } // retranslateUi

};

namespace Ui {
    class menu_administrador: public Ui_menu_administrador {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MENU_ADMINISTRADOR_H
