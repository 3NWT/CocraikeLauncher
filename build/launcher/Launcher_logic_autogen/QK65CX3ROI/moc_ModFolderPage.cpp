/****************************************************************************
** Meta object code from reading C++ file 'ModFolderPage.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../launcher/ui/pages/instance/ModFolderPage.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ModFolderPage.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSModFolderPageENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSModFolderPageENDCLASS = QtMocHelpers::stringData(
    "ModFolderPage",
    "onSelectionChanged",
    "",
    "QModelIndex",
    "current",
    "previous",
    "runningStateChanged",
    "running",
    "removeItems",
    "QItemSelection",
    "selection",
    "installMods",
    "updateMods"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSModFolderPageENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[14];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[8];
    char stringdata5[9];
    char stringdata6[20];
    char stringdata7[8];
    char stringdata8[12];
    char stringdata9[15];
    char stringdata10[10];
    char stringdata11[12];
    char stringdata12[11];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSModFolderPageENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSModFolderPageENDCLASS_t qt_meta_stringdata_CLASSModFolderPageENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "ModFolderPage"
        QT_MOC_LITERAL(14, 18),  // "onSelectionChanged"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 11),  // "QModelIndex"
        QT_MOC_LITERAL(46, 7),  // "current"
        QT_MOC_LITERAL(54, 8),  // "previous"
        QT_MOC_LITERAL(63, 19),  // "runningStateChanged"
        QT_MOC_LITERAL(83, 7),  // "running"
        QT_MOC_LITERAL(91, 11),  // "removeItems"
        QT_MOC_LITERAL(103, 14),  // "QItemSelection"
        QT_MOC_LITERAL(118, 9),  // "selection"
        QT_MOC_LITERAL(128, 11),  // "installMods"
        QT_MOC_LITERAL(140, 10)   // "updateMods"
    },
    "ModFolderPage",
    "onSelectionChanged",
    "",
    "QModelIndex",
    "current",
    "previous",
    "runningStateChanged",
    "running",
    "removeItems",
    "QItemSelection",
    "selection",
    "installMods",
    "updateMods"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSModFolderPageENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   44,    2, 0x0a,    1 /* Public */,
       6,    1,   49,    2, 0x08,    4 /* Private */,
       8,    1,   52,    2, 0x08,    6 /* Private */,
      11,    0,   55,    2, 0x08,    8 /* Private */,
      12,    0,   56,    2, 0x08,    9 /* Private */,

 // slots: parameters
    QMetaType::Bool, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject ModFolderPage::staticMetaObject = { {
    QMetaObject::SuperData::link<ExternalResourcesPage::staticMetaObject>(),
    qt_meta_stringdata_CLASSModFolderPageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSModFolderPageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSModFolderPageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ModFolderPage, std::true_type>,
        // method 'onSelectionChanged'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'runningStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'removeItems'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QItemSelection &, std::false_type>,
        // method 'installMods'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateMods'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ModFolderPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ModFolderPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { bool _r = _t->onSelectionChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->runningStateChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->removeItems((*reinterpret_cast< std::add_pointer_t<QItemSelection>>(_a[1]))); break;
        case 3: _t->installMods(); break;
        case 4: _t->updateMods(); break;
        default: ;
        }
    }
}

const QMetaObject *ModFolderPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModFolderPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSModFolderPageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return ExternalResourcesPage::qt_metacast(_clname);
}

int ModFolderPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ExternalResourcesPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
