/****************************************************************************
** Meta object code from reading C++ file 'manager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../e-shop/manager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'manager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_manager_t {
    QByteArrayData data[11];
    char stringdata[257];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_manager_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_manager_t qt_meta_stringdata_manager = {
    {
QT_MOC_LITERAL(0, 0, 7), // "manager"
QT_MOC_LITERAL(1, 8, 16), // "on_Enter_clicked"
QT_MOC_LITERAL(2, 25, 0), // ""
QT_MOC_LITERAL(3, 26, 34), // "on_CProperties_currentIndexCh..."
QT_MOC_LITERAL(4, 61, 5), // "index"
QT_MOC_LITERAL(5, 67, 27), // "on_CreateNewProduct_clicked"
QT_MOC_LITERAL(6, 95, 32), // "on_CCurrency_currentIndexChanged"
QT_MOC_LITERAL(7, 128, 32), // "on_addProductToWarehouse_clicked"
QT_MOC_LITERAL(8, 161, 36), // "on_RefreshProductInWarehouse_..."
QT_MOC_LITERAL(9, 198, 22), // "on_SetCurrency_clicked"
QT_MOC_LITERAL(10, 221, 35) // "on_addToTheDeliverySchedule_c..."

    },
    "manager\0on_Enter_clicked\0\0"
    "on_CProperties_currentIndexChanged\0"
    "index\0on_CreateNewProduct_clicked\0"
    "on_CCurrency_currentIndexChanged\0"
    "on_addProductToWarehouse_clicked\0"
    "on_RefreshProductInWarehouse_clicked\0"
    "on_SetCurrency_clicked\0"
    "on_addToTheDeliverySchedule_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_manager[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    1,   55,    2, 0x08 /* Private */,
       5,    0,   58,    2, 0x08 /* Private */,
       6,    1,   59,    2, 0x08 /* Private */,
       7,    0,   62,    2, 0x08 /* Private */,
       8,    0,   63,    2, 0x08 /* Private */,
       9,    0,   64,    2, 0x08 /* Private */,
      10,    0,   65,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void manager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        manager *_t = static_cast<manager *>(_o);
        switch (_id) {
        case 0: _t->on_Enter_clicked(); break;
        case 1: _t->on_CProperties_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->on_CreateNewProduct_clicked(); break;
        case 3: _t->on_CCurrency_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_addProductToWarehouse_clicked(); break;
        case 5: _t->on_RefreshProductInWarehouse_clicked(); break;
        case 6: _t->on_SetCurrency_clicked(); break;
        case 7: _t->on_addToTheDeliverySchedule_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject manager::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_manager.data,
      qt_meta_data_manager,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *manager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *manager::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_manager.stringdata))
        return static_cast<void*>(const_cast< manager*>(this));
    return QWidget::qt_metacast(_clname);
}

int manager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
