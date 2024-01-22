/****************************************************************************
** Meta object code from reading C++ file 'ProgressDialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../launcher/ui/dialogs/ProgressDialog.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ProgressDialog.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSProgressDialogENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSProgressDialogENDCLASS = QtMocHelpers::stringData(
    "ProgressDialog",
    "onTaskStarted",
    "",
    "onTaskFailed",
    "failure",
    "onTaskSucceeded",
    "changeStatus",
    "status",
    "changeProgress",
    "current",
    "total",
    "on_skipButton_clicked",
    "checked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSProgressDialogENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[15];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[8];
    char stringdata5[16];
    char stringdata6[13];
    char stringdata7[7];
    char stringdata8[15];
    char stringdata9[8];
    char stringdata10[6];
    char stringdata11[22];
    char stringdata12[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSProgressDialogENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSProgressDialogENDCLASS_t qt_meta_stringdata_CLASSProgressDialogENDCLASS = {
    {
        QT_MOC_LITERAL(0, 14),  // "ProgressDialog"
        QT_MOC_LITERAL(15, 13),  // "onTaskStarted"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 12),  // "onTaskFailed"
        QT_MOC_LITERAL(43, 7),  // "failure"
        QT_MOC_LITERAL(51, 15),  // "onTaskSucceeded"
        QT_MOC_LITERAL(67, 12),  // "changeStatus"
        QT_MOC_LITERAL(80, 6),  // "status"
        QT_MOC_LITERAL(87, 14),  // "changeProgress"
        QT_MOC_LITERAL(102, 7),  // "current"
        QT_MOC_LITERAL(110, 5),  // "total"
        QT_MOC_LITERAL(116, 21),  // "on_skipButton_clicked"
        QT_MOC_LITERAL(138, 7)   // "checked"
    },
    "ProgressDialog",
    "onTaskStarted",
    "",
    "onTaskFailed",
    "failure",
    "onTaskSucceeded",
    "changeStatus",
    "status",
    "changeProgress",
    "current",
    "total",
    "on_skipButton_clicked",
    "checked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSProgressDialogENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x0a,    1 /* Public */,
       3,    1,   51,    2, 0x0a,    2 /* Public */,
       5,    0,   54,    2, 0x0a,    4 /* Public */,
       6,    1,   55,    2, 0x0a,    5 /* Public */,
       8,    2,   58,    2, 0x0a,    7 /* Public */,
      11,    1,   63,    2, 0x08,   10 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    9,   10,
    QMetaType::Void, QMetaType::Bool,   12,

       0        // eod
};

Q_CONSTINIT const QMetaObject ProgressDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSProgressDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSProgressDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSProgressDialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ProgressDialog, std::true_type>,
        // method 'onTaskStarted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onTaskFailed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'onTaskSucceeded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'changeStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'changeProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'on_skipButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void ProgressDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ProgressDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onTaskStarted(); break;
        case 1: _t->onTaskFailed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->onTaskSucceeded(); break;
        case 3: _t->changeStatus((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->changeProgress((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        case 5: _t->on_skipButton_clicked((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *ProgressDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProgressDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSProgressDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ProgressDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
