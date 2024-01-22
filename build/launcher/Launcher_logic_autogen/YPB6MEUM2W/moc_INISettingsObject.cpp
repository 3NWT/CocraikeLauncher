/****************************************************************************
** Meta object code from reading C++ file 'INISettingsObject.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../launcher/settings/INISettingsObject.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'INISettingsObject.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSINISettingsObjectENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSINISettingsObjectENDCLASS = QtMocHelpers::stringData(
    "INISettingsObject",
    "changeSetting",
    "",
    "Setting",
    "setting",
    "value",
    "resetSetting"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSINISettingsObjectENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[18];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[8];
    char stringdata4[8];
    char stringdata5[6];
    char stringdata6[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSINISettingsObjectENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSINISettingsObjectENDCLASS_t qt_meta_stringdata_CLASSINISettingsObjectENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "INISettingsObject"
        QT_MOC_LITERAL(18, 13),  // "changeSetting"
        QT_MOC_LITERAL(32, 0),  // ""
        QT_MOC_LITERAL(33, 7),  // "Setting"
        QT_MOC_LITERAL(41, 7),  // "setting"
        QT_MOC_LITERAL(49, 5),  // "value"
        QT_MOC_LITERAL(55, 12)   // "resetSetting"
    },
    "INISettingsObject",
    "changeSetting",
    "",
    "Setting",
    "setting",
    "value",
    "resetSetting"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSINISettingsObjectENDCLASS[] = {

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
       1,    2,   26,    2, 0x09,    1 /* Protected */,
       6,    1,   31,    2, 0x09,    4 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QVariant,    4,    5,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

Q_CONSTINIT const QMetaObject INISettingsObject::staticMetaObject = { {
    QMetaObject::SuperData::link<SettingsObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSINISettingsObjectENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSINISettingsObjectENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSINISettingsObjectENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<INISettingsObject, std::true_type>,
        // method 'changeSetting'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Setting &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        // method 'resetSetting'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Setting &, std::false_type>
    >,
    nullptr
} };

void INISettingsObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<INISettingsObject *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->changeSetting((*reinterpret_cast< std::add_pointer_t<Setting>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[2]))); break;
        case 1: _t->resetSetting((*reinterpret_cast< std::add_pointer_t<Setting>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *INISettingsObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *INISettingsObject::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSINISettingsObjectENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return SettingsObject::qt_metacast(_clname);
}

int INISettingsObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SettingsObject::qt_metacall(_c, _id, _a);
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
