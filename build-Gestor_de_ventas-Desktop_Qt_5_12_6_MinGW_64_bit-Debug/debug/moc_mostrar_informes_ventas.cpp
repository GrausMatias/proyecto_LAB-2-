/****************************************************************************
** Meta object code from reading C++ file 'mostrar_informes_ventas.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.6)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../Gestor_de_ventas/mostrar_informes_ventas.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mostrar_informes_ventas.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.6. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_mostrar_informes_ventas_t {
    QByteArrayData data[7];
    char stringdata0[144];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_mostrar_informes_ventas_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_mostrar_informes_ventas_t qt_meta_stringdata_mostrar_informes_ventas = {
    {
QT_MOC_LITERAL(0, 0, 23), // "mostrar_informes_ventas"
QT_MOC_LITERAL(1, 24, 18), // "on_filtrar_clicked"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 37), // "on_comboBox_informes_ventas_a..."
QT_MOC_LITERAL(4, 82, 4), // "arg1"
QT_MOC_LITERAL(5, 87, 28), // "on_pushButton_buscar_clicked"
QT_MOC_LITERAL(6, 116, 27) // "on_comboBox_marca_activated"

    },
    "mostrar_informes_ventas\0on_filtrar_clicked\0"
    "\0on_comboBox_informes_ventas_activated\0"
    "arg1\0on_pushButton_buscar_clicked\0"
    "on_comboBox_marca_activated"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_mostrar_informes_ventas[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   34,    2, 0x08 /* Private */,
       3,    1,   35,    2, 0x08 /* Private */,
       5,    0,   38,    2, 0x08 /* Private */,
       6,    1,   39,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

       0        // eod
};

void mostrar_informes_ventas::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<mostrar_informes_ventas *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 2: _t->on_pushButton_buscar_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject mostrar_informes_ventas::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_mostrar_informes_ventas.data,
    qt_meta_data_mostrar_informes_ventas,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *mostrar_informes_ventas::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *mostrar_informes_ventas::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_mostrar_informes_ventas.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int mostrar_informes_ventas::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
