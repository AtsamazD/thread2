/****************************************************************************
** Meta object code from reading C++ file 'qblowfishtest.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.7.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../test/qblowfishtest.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'qblowfishtest.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.7.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_QBlowfishTest_t {
    QByteArrayData data[8];
    char stringdata0[136];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_QBlowfishTest_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_QBlowfishTest_t qt_meta_stringdata_QBlowfishTest = {
    {
QT_MOC_LITERAL(0, 0, 13), // "QBlowfishTest"
QT_MOC_LITERAL(1, 14, 17), // "blowfishTest_data"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 12), // "blowfishTest"
QT_MOC_LITERAL(4, 46, 24), // "blowfishTestSameKey_data"
QT_MOC_LITERAL(5, 71, 19), // "blowfishTestSameKey"
QT_MOC_LITERAL(6, 91, 24), // "blowfishTestPadding_data"
QT_MOC_LITERAL(7, 116, 19) // "blowfishTestPadding"

    },
    "QBlowfishTest\0blowfishTest_data\0\0"
    "blowfishTest\0blowfishTestSameKey_data\0"
    "blowfishTestSameKey\0blowfishTestPadding_data\0"
    "blowfishTestPadding"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_QBlowfishTest[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x08 /* Private */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void QBlowfishTest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        QBlowfishTest *_t = static_cast<QBlowfishTest *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->blowfishTest_data(); break;
        case 1: _t->blowfishTest(); break;
        case 2: _t->blowfishTestSameKey_data(); break;
        case 3: _t->blowfishTestSameKey(); break;
        case 4: _t->blowfishTestPadding_data(); break;
        case 5: _t->blowfishTestPadding(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject QBlowfishTest::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_QBlowfishTest.data,
      qt_meta_data_QBlowfishTest,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *QBlowfishTest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QBlowfishTest::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_QBlowfishTest.stringdata0))
        return static_cast<void*>(const_cast< QBlowfishTest*>(this));
    return QObject::qt_metacast(_clname);
}

int QBlowfishTest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
