/****************************************************************************
** Meta object code from reading C++ file 'mainwidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.11.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../mainwidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.11.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWidget_t {
    QByteArrayData data[17];
    char stringdata0[313];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWidget_t qt_meta_stringdata_MainWidget = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWidget"
QT_MOC_LITERAL(1, 11, 21), // "on_settingBtn_clicked"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 17), // "on_newBtn_clicked"
QT_MOC_LITERAL(4, 52, 20), // "on_deleteBtn_clicked"
QT_MOC_LITERAL(5, 73, 20), // "on_reportBtn_clicked"
QT_MOC_LITERAL(6, 94, 18), // "on_exitBtn_clicked"
QT_MOC_LITERAL(7, 113, 17), // "on_maxBtn_clicked"
QT_MOC_LITERAL(8, 131, 17), // "on_minBtn_clicked"
QT_MOC_LITERAL(9, 149, 18), // "on_saveBtn_clicked"
QT_MOC_LITERAL(10, 168, 22), // "on_previousBtn_clicked"
QT_MOC_LITERAL(11, 191, 18), // "on_nextBtn_clicked"
QT_MOC_LITERAL(12, 210, 18), // "on_gotoBtn_clicked"
QT_MOC_LITERAL(13, 229, 20), // "on_logoutBtn_clicked"
QT_MOC_LITERAL(14, 250, 22), // "on_editableBtn_clicked"
QT_MOC_LITERAL(15, 273, 18), // "on_helpBtn_clicked"
QT_MOC_LITERAL(16, 292, 20) // "on_importBtn_clicked"

    },
    "MainWidget\0on_settingBtn_clicked\0\0"
    "on_newBtn_clicked\0on_deleteBtn_clicked\0"
    "on_reportBtn_clicked\0on_exitBtn_clicked\0"
    "on_maxBtn_clicked\0on_minBtn_clicked\0"
    "on_saveBtn_clicked\0on_previousBtn_clicked\0"
    "on_nextBtn_clicked\0on_gotoBtn_clicked\0"
    "on_logoutBtn_clicked\0on_editableBtn_clicked\0"
    "on_helpBtn_clicked\0on_importBtn_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWidget[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   89,    2, 0x08 /* Private */,
       3,    0,   90,    2, 0x08 /* Private */,
       4,    0,   91,    2, 0x08 /* Private */,
       5,    0,   92,    2, 0x08 /* Private */,
       6,    0,   93,    2, 0x08 /* Private */,
       7,    0,   94,    2, 0x08 /* Private */,
       8,    0,   95,    2, 0x08 /* Private */,
       9,    0,   96,    2, 0x08 /* Private */,
      10,    0,   97,    2, 0x08 /* Private */,
      11,    0,   98,    2, 0x08 /* Private */,
      12,    0,   99,    2, 0x08 /* Private */,
      13,    0,  100,    2, 0x08 /* Private */,
      14,    0,  101,    2, 0x08 /* Private */,
      15,    0,  102,    2, 0x08 /* Private */,
      16,    0,  103,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWidget *_t = static_cast<MainWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_settingBtn_clicked(); break;
        case 1: _t->on_newBtn_clicked(); break;
        case 2: _t->on_deleteBtn_clicked(); break;
        case 3: _t->on_reportBtn_clicked(); break;
        case 4: _t->on_exitBtn_clicked(); break;
        case 5: _t->on_maxBtn_clicked(); break;
        case 6: _t->on_minBtn_clicked(); break;
        case 7: _t->on_saveBtn_clicked(); break;
        case 8: _t->on_previousBtn_clicked(); break;
        case 9: _t->on_nextBtn_clicked(); break;
        case 10: _t->on_gotoBtn_clicked(); break;
        case 11: _t->on_logoutBtn_clicked(); break;
        case 12: _t->on_editableBtn_clicked(); break;
        case 13: _t->on_helpBtn_clicked(); break;
        case 14: _t->on_importBtn_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject MainWidget::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_MainWidget.data,
      qt_meta_data_MainWidget,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int MainWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
