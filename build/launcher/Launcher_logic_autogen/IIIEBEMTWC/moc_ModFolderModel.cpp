/****************************************************************************
** Meta object code from reading C++ file 'ModFolderModel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../launcher/minecraft/mod/ModFolderModel.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ModFolderModel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSModFolderModelENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSModFolderModelENDCLASS = QtMocHelpers::stringData(
    "ModFolderModel",
    "onUpdateSucceeded",
    "",
    "onParseSucceeded",
    "ticket",
    "resource_id"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSModFolderModelENDCLASS_t {
    uint offsetsAndSizes[12];
    char stringdata0[15];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[7];
    char stringdata5[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSModFolderModelENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSModFolderModelENDCLASS_t qt_meta_stringdata_CLASSModFolderModelENDCLASS = {
    {
        QT_MOC_LITERAL(0, 14),  // "ModFolderModel"
        QT_MOC_LITERAL(15, 17),  // "onUpdateSucceeded"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 16),  // "onParseSucceeded"
        QT_MOC_LITERAL(51, 6),  // "ticket"
        QT_MOC_LITERAL(58, 11)   // "resource_id"
    },
    "ModFolderModel",
    "onUpdateSucceeded",
    "",
    "onParseSucceeded",
    "ticket",
    "resource_id"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSModFolderModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x08,    1 /* Private */,
       3,    2,   27,    2, 0x08,    2 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    4,    5,

       0        // eod
};

Q_CONSTINIT const QMetaObject ModFolderModel::staticMetaObject = { {
    QMetaObject::SuperData::link<ResourceFolderModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSModFolderModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSModFolderModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSModFolderModelENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ModFolderModel, std::true_type>,
        // method 'onUpdateSucceeded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onParseSucceeded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>
    >,
    nullptr
} };

void ModFolderModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ModFolderModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onUpdateSucceeded(); break;
        case 1: _t->onParseSucceeded((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *ModFolderModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModFolderModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSModFolderModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return ResourceFolderModel::qt_metacast(_clname);
}

int ModFolderModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ResourceFolderModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
