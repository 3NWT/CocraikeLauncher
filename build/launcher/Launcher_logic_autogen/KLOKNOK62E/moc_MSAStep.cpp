/****************************************************************************
** Meta object code from reading C++ file 'MSAStep.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../launcher/minecraft/auth/steps/MSAStep.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MSAStep.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSMSAStepENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMSAStepENDCLASS = QtMocHelpers::stringData(
    "MSAStep",
    "onOAuthActivityChanged",
    "",
    "Katabasis::Activity",
    "activity"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMSAStepENDCLASS_t {
    uint offsetsAndSizes[10];
    char stringdata0[8];
    char stringdata1[23];
    char stringdata2[1];
    char stringdata3[20];
    char stringdata4[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMSAStepENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMSAStepENDCLASS_t qt_meta_stringdata_CLASSMSAStepENDCLASS = {
    {
        QT_MOC_LITERAL(0, 7),  // "MSAStep"
        QT_MOC_LITERAL(8, 22),  // "onOAuthActivityChanged"
        QT_MOC_LITERAL(31, 0),  // ""
        QT_MOC_LITERAL(32, 19),  // "Katabasis::Activity"
        QT_MOC_LITERAL(52, 8)   // "activity"
    },
    "MSAStep",
    "onOAuthActivityChanged",
    "",
    "Katabasis::Activity",
    "activity"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMSAStepENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject MSAStep::staticMetaObject = { {
    QMetaObject::SuperData::link<AuthStep::staticMetaObject>(),
    qt_meta_stringdata_CLASSMSAStepENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMSAStepENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMSAStepENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MSAStep, std::true_type>,
        // method 'onOAuthActivityChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Katabasis::Activity, std::false_type>
    >,
    nullptr
} };

void MSAStep::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MSAStep *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onOAuthActivityChanged((*reinterpret_cast< std::add_pointer_t<Katabasis::Activity>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *MSAStep::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MSAStep::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMSAStepENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return AuthStep::qt_metacast(_clname);
}

int MSAStep::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AuthStep::qt_metacall(_c, _id, _a);
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
