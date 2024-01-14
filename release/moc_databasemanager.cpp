/****************************************************************************
** Meta object code from reading C++ file 'databasemanager.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../databasemanager.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'databasemanager.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_DatabaseManager_t {
    QByteArrayData data[7];
    char stringdata0[70];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_DatabaseManager_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_DatabaseManager_t qt_meta_stringdata_DatabaseManager = {
    {
QT_MOC_LITERAL(0, 0, 15), // "DatabaseManager"
QT_MOC_LITERAL(1, 16, 12), // "openDatabase"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 6), // "dbName"
QT_MOC_LITERAL(4, 37, 13), // "closeDatabase"
QT_MOC_LITERAL(5, 51, 12), // "executeQuery"
QT_MOC_LITERAL(6, 64, 5) // "query"

    },
    "DatabaseManager\0openDatabase\0\0dbName\0"
    "closeDatabase\0executeQuery\0query"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_DatabaseManager[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       4,    0,   32,    2, 0x0a /* Public */,
       5,    1,   33,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Bool, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::QVariantList, QMetaType::QString,    6,

       0        // eod
};

void DatabaseManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DatabaseManager *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->openDatabase((*reinterpret_cast< const QString(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->closeDatabase(); break;
//        case 2: { QVariantList _r = _t->executeQuery((*reinterpret_cast< const QString(*)>(_a[1])));
//            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject DatabaseManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_DatabaseManager.data,
    qt_meta_data_DatabaseManager,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *DatabaseManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DatabaseManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_DatabaseManager.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int DatabaseManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
