/****************************************************************************
** Meta object code from reading C++ file 'rpcconsole.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../src/qt/rpcconsole.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'rpcconsole.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_RPCConsole_t {
    QByteArrayData data[29];
    char stringdata0[419];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_RPCConsole_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_RPCConsole_t qt_meta_stringdata_RPCConsole = {
    {
QT_MOC_LITERAL(0, 0, 10), // "RPCConsole"
QT_MOC_LITERAL(1, 11, 12), // "stopExecutor"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 10), // "cmdRequest"
QT_MOC_LITERAL(4, 36, 7), // "command"
QT_MOC_LITERAL(5, 44, 25), // "on_lineEdit_returnPressed"
QT_MOC_LITERAL(6, 70, 27), // "on_tabWidget_currentChanged"
QT_MOC_LITERAL(7, 98, 5), // "index"
QT_MOC_LITERAL(8, 104, 33), // "on_openDebugLogfileButton_cli..."
QT_MOC_LITERAL(9, 138, 30), // "on_showCLOptionsButton_clicked"
QT_MOC_LITERAL(10, 169, 29), // "on_sldGraphRange_valueChanged"
QT_MOC_LITERAL(11, 199, 6), // "nValue"
QT_MOC_LITERAL(12, 206, 18), // "updateTrafficStats"
QT_MOC_LITERAL(13, 225, 12), // "totalBytesIn"
QT_MOC_LITERAL(14, 238, 13), // "totalBytesOut"
QT_MOC_LITERAL(15, 252, 31), // "on_btnClearTrafficGraph_clicked"
QT_MOC_LITERAL(16, 284, 5), // "clear"
QT_MOC_LITERAL(17, 290, 7), // "message"
QT_MOC_LITERAL(18, 298, 8), // "category"
QT_MOC_LITERAL(19, 307, 4), // "html"
QT_MOC_LITERAL(20, 312, 17), // "setNumConnections"
QT_MOC_LITERAL(21, 330, 5), // "count"
QT_MOC_LITERAL(22, 336, 12), // "setNumBlocks"
QT_MOC_LITERAL(23, 349, 12), // "countOfPeers"
QT_MOC_LITERAL(24, 362, 13), // "browseHistory"
QT_MOC_LITERAL(25, 376, 6), // "offset"
QT_MOC_LITERAL(26, 383, 11), // "scrollToEnd"
QT_MOC_LITERAL(27, 395, 11), // "showConsole"
QT_MOC_LITERAL(28, 407, 11) // "showTraffic"

    },
    "RPCConsole\0stopExecutor\0\0cmdRequest\0"
    "command\0on_lineEdit_returnPressed\0"
    "on_tabWidget_currentChanged\0index\0"
    "on_openDebugLogfileButton_clicked\0"
    "on_showCLOptionsButton_clicked\0"
    "on_sldGraphRange_valueChanged\0nValue\0"
    "updateTrafficStats\0totalBytesIn\0"
    "totalBytesOut\0on_btnClearTrafficGraph_clicked\0"
    "clear\0message\0category\0html\0"
    "setNumConnections\0count\0setNumBlocks\0"
    "countOfPeers\0browseHistory\0offset\0"
    "scrollToEnd\0showConsole\0showTraffic"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_RPCConsole[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  104,    2, 0x06 /* Public */,
       3,    1,  105,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,  108,    2, 0x08 /* Private */,
       6,    1,  109,    2, 0x08 /* Private */,
       8,    0,  112,    2, 0x08 /* Private */,
       9,    0,  113,    2, 0x08 /* Private */,
      10,    1,  114,    2, 0x08 /* Private */,
      12,    2,  117,    2, 0x08 /* Private */,
      15,    0,  122,    2, 0x08 /* Private */,
      16,    0,  123,    2, 0x0a /* Public */,
      17,    3,  124,    2, 0x0a /* Public */,
      17,    2,  131,    2, 0x2a /* Public | MethodCloned */,
      20,    1,  136,    2, 0x0a /* Public */,
      22,    2,  139,    2, 0x0a /* Public */,
      24,    1,  144,    2, 0x0a /* Public */,
      26,    0,  147,    2, 0x0a /* Public */,
      27,    0,  148,    2, 0x0a /* Public */,
      28,    0,  149,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::ULongLong,   13,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::Bool,   18,   17,   19,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   18,   17,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   21,   23,
    QMetaType::Void, QMetaType::Int,   25,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void RPCConsole::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        RPCConsole *_t = static_cast<RPCConsole *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->stopExecutor(); break;
        case 1: _t->cmdRequest((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 2: _t->on_lineEdit_returnPressed(); break;
        case 3: _t->on_tabWidget_currentChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->on_openDebugLogfileButton_clicked(); break;
        case 5: _t->on_showCLOptionsButton_clicked(); break;
        case 6: _t->on_sldGraphRange_valueChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->updateTrafficStats((*reinterpret_cast< quint64(*)>(_a[1])),(*reinterpret_cast< quint64(*)>(_a[2]))); break;
        case 8: _t->on_btnClearTrafficGraph_clicked(); break;
        case 9: _t->clear(); break;
        case 10: _t->message((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 11: _t->message((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2]))); break;
        case 12: _t->setNumConnections((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->setNumBlocks((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: _t->browseHistory((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 15: _t->scrollToEnd(); break;
        case 16: _t->showConsole(); break;
        case 17: _t->showTraffic(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (RPCConsole::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RPCConsole::stopExecutor)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (RPCConsole::*_t)(const QString & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&RPCConsole::cmdRequest)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject RPCConsole::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_RPCConsole.data,
      qt_meta_data_RPCConsole,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *RPCConsole::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *RPCConsole::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_RPCConsole.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int RPCConsole::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void RPCConsole::stopExecutor()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void RPCConsole::cmdRequest(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
