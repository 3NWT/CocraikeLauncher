/****************************************************************************
** Meta object code from reading C++ file 'AuthFlow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../launcher/minecraft/auth/flows/AuthFlow.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AuthFlow.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSAuthFlowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSAuthFlowENDCLASS = QtMocHelpers::stringData(
    "AuthFlow",
    "activityChanged",
    "",
    "Katabasis::Activity",
    "activity",
    "stepFinished",
    "AccountTaskState",
    "resultingState",
    "message"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSAuthFlowENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[9];
    char stringdata1[16];
    char stringdata2[1];
    char stringdata3[20];
    char stringdata4[9];
    char stringdata5[13];
    char stringdata6[17];
    char stringdata7[15];
    char stringdata8[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSAuthFlowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSAuthFlowENDCLASS_t qt_meta_stringdata_CLASSAuthFlowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 8),  // "AuthFlow"
        QT_MOC_LITERAL(9, 15),  // "activityChanged"
        QT_MOC_LITERAL(25, 0),  // ""
        QT_MOC_LITERAL(26, 19),  // "Katabasis::Activity"
        QT_MOC_LITERAL(46, 8),  // "activity"
        QT_MOC_LITERAL(55, 12),  // "stepFinished"
        QT_MOC_LITERAL(68, 16),  // "AccountTaskState"
        QT_MOC_LITERAL(85, 14),  // "resultingState"
        QT_MOC_LITERAL(100, 7)   // "message"
    },
    "AuthFlow",
    "activityChanged",
    "",
    "Katabasis::Activity",
    "activity",
    "stepFinished",
    "AccountTaskState",
    "resultingState",
    "message"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAuthFlowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    2,   29,    2, 0x08,    3 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6, QMetaType::QString,    7,    8,

       0        // eod
};

Q_CONSTINIT const QMetaObject AuthFlow::staticMetaObject = { {
    QMetaObject::SuperData::link<AccountTask::staticMetaObject>(),
    qt_meta_stringdata_CLASSAuthFlowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAuthFlowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAuthFlowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AuthFlow, std::true_type>,
        // method 'activityChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Katabasis::Activity, std::false_type>,
        // method 'stepFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<AccountTaskState, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>
    >,
    nullptr
} };

void AuthFlow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AuthFlow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->activityChanged((*reinterpret_cast< std::add_pointer_t<Katabasis::Activity>>(_a[1]))); break;
        case 1: _t->stepFinished((*reinterpret_cast< std::add_pointer_t<AccountTaskState>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AuthFlow::*)(Katabasis::Activity );
            if (_t _q_method = &AuthFlow::activityChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *AuthFlow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AuthFlow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAuthFlowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return AccountTask::qt_metacast(_clname);
}

int AuthFlow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AccountTask::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void AuthFlow::activityChanged(Katabasis::Activity _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
