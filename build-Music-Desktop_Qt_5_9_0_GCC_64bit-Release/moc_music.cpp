/****************************************************************************
** Meta object code from reading C++ file 'music.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../Music/music.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'music.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Music_t {
    QByteArrayData data[14];
    char stringdata0[231];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Music_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Music_t qt_meta_stringdata_Music = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Music"
QT_MOC_LITERAL(1, 6, 26), // "on_actionSave_as_triggered"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 24), // "on_action_Save_triggered"
QT_MOC_LITERAL(4, 59, 24), // "on_action_Open_triggered"
QT_MOC_LITERAL(5, 84, 10), // "closeEvent"
QT_MOC_LITERAL(6, 95, 12), // "QCloseEvent*"
QT_MOC_LITERAL(7, 108, 5), // "event"
QT_MOC_LITERAL(8, 114, 14), // "openRecentFile"
QT_MOC_LITERAL(9, 129, 25), // "on_pushButtonPlay_clicked"
QT_MOC_LITERAL(10, 155, 25), // "on_pushButtonStop_clicked"
QT_MOC_LITERAL(11, 181, 19), // "on_checkBox_toggled"
QT_MOC_LITERAL(12, 201, 7), // "checked"
QT_MOC_LITERAL(13, 209, 21) // "on_checkBox_2_toggled"

    },
    "Music\0on_actionSave_as_triggered\0\0"
    "on_action_Save_triggered\0"
    "on_action_Open_triggered\0closeEvent\0"
    "QCloseEvent*\0event\0openRecentFile\0"
    "on_pushButtonPlay_clicked\0"
    "on_pushButtonStop_clicked\0on_checkBox_toggled\0"
    "checked\0on_checkBox_2_toggled"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Music[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x08 /* Private */,
       3,    0,   60,    2, 0x08 /* Private */,
       4,    0,   61,    2, 0x08 /* Private */,
       5,    1,   62,    2, 0x08 /* Private */,
       8,    0,   65,    2, 0x08 /* Private */,
       9,    0,   66,    2, 0x08 /* Private */,
      10,    0,   67,    2, 0x08 /* Private */,
      11,    1,   68,    2, 0x08 /* Private */,
      13,    1,   71,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, QMetaType::Bool,   12,

       0        // eod
};

void Music::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Music *_t = static_cast<Music *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->on_actionSave_as_triggered();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->on_action_Save_triggered();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->on_action_Open_triggered(); break;
        case 3: _t->closeEvent((*reinterpret_cast< QCloseEvent*(*)>(_a[1]))); break;
        case 4: _t->openRecentFile(); break;
        case 5: _t->on_pushButtonPlay_clicked(); break;
        case 6: _t->on_pushButtonStop_clicked(); break;
        case 7: _t->on_checkBox_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 8: _t->on_checkBox_2_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Music::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_Music.data,
      qt_meta_data_Music,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *Music::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Music::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Music.stringdata0))
        return static_cast<void*>(const_cast< Music*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int Music::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
