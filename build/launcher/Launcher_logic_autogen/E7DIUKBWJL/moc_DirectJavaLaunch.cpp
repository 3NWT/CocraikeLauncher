/****************************************************************************
** Meta object code from reading C++ file 'DirectJavaLaunch.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../launcher/minecraft/launch/DirectJavaLaunch.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DirectJavaLaunch.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSDirectJavaLaunchENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSDirectJavaLaunchENDCLASS = QtMocHelpers::stringData(
    "DirectJavaLaunch",
    "on_state",
    "",
    "LoggedProcess::State",
    "state"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSDirectJavaLaunchENDCLASS_t {
    uint offsetsAndSizes[10];
    char stringdata0[17];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[21];
    char stringdata4[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSDirectJavaLaunchENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSDirectJavaLaunchENDCLASS_t qt_meta_stringdata_CLASSDirectJavaLaunchENDCLASS = {
    {
        QT_MOC_LITERAL(0, 16),  // "DirectJavaLaunch"
        QT_MOC_LITERAL(17, 8),  // "on_state"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 20),  // "LoggedProcess::State"
        QT_MOC_LITERAL(48, 5)   // "state"
    },
    "DirectJavaLaunch",
    "on_state",
    "",
    "LoggedProcess::State",
    "state"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSDirectJavaLaunchENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x08,    1 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

Q_CONSTINIT const QMetaObject DirectJavaLaunch::staticMetaObject = { {
    QMetaObject::SuperData::link<LaunchStep::staticMetaObject>(),
    qt_meta_stringdata_CLASSDirectJavaLaunchENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSDirectJavaLaunchENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSDirectJavaLaunchENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DirectJavaLaunch, std::true_type>,
        // method 'on_state'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<LoggedProcess::State, std::false_type>
    >,
    nullptr
} };

void DirectJavaLaunch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DirectJavaLaunch *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_state((*reinterpret_cast< std::add_pointer_t<LoggedProcess::State>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *DirectJavaLaunch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *DirectJavaLaunch::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSDirectJavaLaunchENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return LaunchStep::qt_metacast(_clname);
}

int DirectJavaLaunch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = LaunchStep::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP