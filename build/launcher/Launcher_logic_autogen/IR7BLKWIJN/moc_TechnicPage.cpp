/****************************************************************************
** Meta object code from reading C++ file 'TechnicPage.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../launcher/ui/pages/modplatform/technic/TechnicPage.h"
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TechnicPage.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSTechnicPageENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSTechnicPageENDCLASS = QtMocHelpers::stringData(
    "TechnicPage",
    "triggerSearch",
    "",
    "onSelectionChanged",
    "QModelIndex",
    "first",
    "second",
    "onSolderLoaded",
    "onVersionSelectionChanged",
    "data"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSTechnicPageENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[12];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[19];
    char stringdata4[12];
    char stringdata5[6];
    char stringdata6[7];
    char stringdata7[15];
    char stringdata8[26];
    char stringdata9[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSTechnicPageENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSTechnicPageENDCLASS_t qt_meta_stringdata_CLASSTechnicPageENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "TechnicPage"
        QT_MOC_LITERAL(12, 13),  // "triggerSearch"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 18),  // "onSelectionChanged"
        QT_MOC_LITERAL(46, 11),  // "QModelIndex"
        QT_MOC_LITERAL(58, 5),  // "first"
        QT_MOC_LITERAL(64, 6),  // "second"
        QT_MOC_LITERAL(71, 14),  // "onSolderLoaded"
        QT_MOC_LITERAL(86, 25),  // "onVersionSelectionChanged"
        QT_MOC_LITERAL(112, 4)   // "data"
    },
    "TechnicPage",
    "triggerSearch",
    "",
    "onSelectionChanged",
    "QModelIndex",
    "first",
    "second",
    "onSolderLoaded",
    "onVersionSelectionChanged",
    "data"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTechnicPageENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x08,    1 /* Private */,
       3,    2,   39,    2, 0x08,    2 /* Private */,
       7,    0,   44,    2, 0x08,    5 /* Private */,
       8,    1,   45,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, 0x80000000 | 4,    5,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,

       0        // eod
};

Q_CONSTINIT const QMetaObject TechnicPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSTechnicPageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTechnicPageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTechnicPageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TechnicPage, std::true_type>,
        // method 'triggerSearch'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onSelectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        // method 'onSolderLoaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onVersionSelectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>
    >,
    nullptr
} };

void TechnicPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TechnicPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->triggerSearch(); break;
        case 1: _t->onSelectionChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 2: _t->onSolderLoaded(); break;
        case 3: _t->onVersionSelectionChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *TechnicPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TechnicPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTechnicPageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "BasePage"))
        return static_cast< BasePage*>(this);
    return QWidget::qt_metacast(_clname);
}

int TechnicPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
