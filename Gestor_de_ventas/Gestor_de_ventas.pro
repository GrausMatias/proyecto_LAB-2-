QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# The following define makes your compiler emit warnings if you use
# any Qt feature that has been marked deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    agregar_producto_venta.cpp \
    agregar_stock.cpp \
    agregar_stock_producto_existente.cpp \
    cuenta_admin.cpp \
    eliminar_vendedor.cpp \
    main.cpp \
    menu_administrador.cpp \
    menu_principal.cpp \
    modificar_precio.cpp \
    modificar_vendedor.cpp \
    mostrar_informes_ventas.cpp \
    mostrar_stock.cpp \
    mostrar_vendedores.cpp \
    registro.cpp \
    ventana_principal.cpp

HEADERS += \
    agregar_producto_venta.h \
    agregar_stock.h \
    agregar_stock_producto_existente.h \
    celulares.h \
    cuenta_admin.h \
    detalles_ventas.h \
    eliminar_vendedor.h \
    menu_administrador.h \
    menu_principal.h \
    modificar_precio.h \
    modificar_vendedor.h \
    mostrar_informes_ventas.h \
    mostrar_stock.h \
    mostrar_vendedores.h \
    registro.h \
    usuarios.h \
    ventana_principal.h \
    ventas.h

FORMS += \
    agregar_producto_venta.ui \
    agregar_stock.ui \
    agregar_stock_producto_existente.ui \
    cuenta_admin.ui \
    eliminar_vendedor.ui \
    menu_administrador.ui \
    menu_principal.ui \
    modificar_precio.ui \
    modificar_vendedor.ui \
    mostrar_informes_ventas.ui \
    mostrar_stock.ui \
    mostrar_vendedores.ui \
    registro.ui \
    ventana_principal.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
