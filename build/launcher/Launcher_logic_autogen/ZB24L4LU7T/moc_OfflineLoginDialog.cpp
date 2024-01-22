/****************************************************************************
** Meta object code from reading C++ file 'OfflineLoginDialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../launcher/ui/dialogs/OfflineLoginDialog.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'OfflineLoginDialog.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOfflineLoginDialogENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSOfflineLoginDialogENDCLASS = QtMocHelpers::stringData(
    "OfflineLoginDialog",
    "accept",
    "",
    "onTaskFailed",
    "reason",
    "onTaskSucceeded",
    "onTaskStatus",
    "status",
    "onTaskProgress",
    "current",
    "total",
    "on_userTextBox_textEdited",
    "newText",
    "on_allowLongUsernames_stateChanged",
    "value"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSOfflineLoginDialogENDCLASS_t {
    uint offsetsAndSizes[30];
    char stringdata0[19];
    char stringdata1[7];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[7];
    char stringdata5[16];
    char stringdata6[13];
    char stringdata7[7];
    char stringdata8[15];
    char stringdata9[8];
    char stringdata10[6];
    char stringdata11[26];
    char stringdata12[8];
    char stringdata13[35];
    char stringdata14[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSOfflineLoginDialogENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSOfflineLoginDialogENDCLASS_t qt_meta_stringdata_CLASSOfflineLoginDialogENDCLASS = {
    {
        QT_MOC_LITERAL(0, 18),  // "OfflineLoginDialog"
        QT_MOC_LITERAL(19, 6),  // "accept"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 12),  // "onTaskFailed"
        QT_MOC_LITERAL(40, 6),  // "reason"
        QT_MOC_LITERAL(47, 15),  // "onTaskSucceeded"
        QT_MOC_LITERAL(63, 12),  // "onTaskStatus"
        QT_MOC_LITERAL(76, 6),  // "status"
        QT_MOC_LITERAL(83, 14),  // "onTaskProgress"
        QT_MOC_LITERAL(98, 7),  // "current"
        QT_MOC_LITERAL(106, 5),  // "total"
        QT_MOC_LITERAL(112, 25),  // "on_userTextBox_textEdited"
        QT_MOC_LITERAL(138, 7),  // "newText"
        QT_MOC_LITERAL(146, 34),  // "on_allowLongUsernames_stateCh..."
        QT_MOC_LITERAL(181, 5)   // "value"
    },
    "OfflineLoginDialog",
    "accept",
    "",
    "onTaskFailed",
    "reason",
    "onTaskSucceeded",
    "onTaskStatus",
    "status",
    "onTaskProgress",
    "current",
    "total",
    "on_userTextBox_textEdited",
    "newText",
    "on_allowLongUsernames_stateChanged",
    "value"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOfflineLoginDialogENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x09,    1 /* Protected */,
       3,    1,   57,    2, 0x09,    2 /* Protected */,
       5,    0,   60,    2, 0x09,    4 /* Protected */,
       6,    1,   61,    2, 0x09,    5 /* Protected */,
       8,    2,   64,    2, 0x09,    7 /* Protected */,
      11,    1,   69,    2, 0x09,   10 /* Protected */,
      13,    1,   72,    2, 0x09,   12 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    9,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::Int,   14,

       0        // eod
};

Q_CONSTINIT const QMetaObject OfflineLoginDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSOfflineLoginDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOfflineLoginDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOfflineLoginDialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<OfflineLoginDialog, std::true_type>,
        // method 'accept'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onTaskFailed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onTaskSucceeded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onTaskStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onTaskProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'on_userTextBox_textEdited'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_allowLongUsernames_stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void OfflineLoginDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OfflineLoginDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: _t->onTaskFailed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->onTaskSucceeded(); break;
        case 3: _t->onTaskStatus((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->onTaskProgress((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        case 5: _t->on_userTextBox_textEdited((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->on_allowLongUsernames_stateChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *OfflineLoginDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OfflineLoginDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOfflineLoginDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int OfflineLoginDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
