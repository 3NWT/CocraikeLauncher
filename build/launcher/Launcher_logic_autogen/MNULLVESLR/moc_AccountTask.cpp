/****************************************************************************
** Meta object code from reading C++ file 'AccountTask.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../launcher/minecraft/auth/AccountTask.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AccountTask.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSAccountTaskENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSAccountTaskENDCLASS = QtMocHelpers::stringData(
    "AccountTask",
    "showVerificationUriAndCode",
    "",
    "uri",
    "code",
    "expiresIn",
    "hideVerificationUriAndCode",
    "changeState",
    "AccountTaskState",
    "newState",
    "reason"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSAccountTaskENDCLASS_t {
    uint offsetsAndSizes[22];
    char stringdata0[12];
    char stringdata1[27];
    char stringdata2[1];
    char stringdata3[4];
    char stringdata4[5];
    char stringdata5[10];
    char stringdata6[27];
    char stringdata7[12];
    char stringdata8[17];
    char stringdata9[9];
    char stringdata10[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSAccountTaskENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSAccountTaskENDCLASS_t qt_meta_stringdata_CLASSAccountTaskENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "AccountTask"
        QT_MOC_LITERAL(12, 26),  // "showVerificationUriAndCode"
        QT_MOC_LITERAL(39, 0),  // ""
        QT_MOC_LITERAL(40, 3),  // "uri"
        QT_MOC_LITERAL(44, 4),  // "code"
        QT_MOC_LITERAL(49, 9),  // "expiresIn"
        QT_MOC_LITERAL(59, 26),  // "hideVerificationUriAndCode"
        QT_MOC_LITERAL(86, 11),  // "changeState"
        QT_MOC_LITERAL(98, 16),  // "AccountTaskState"
        QT_MOC_LITERAL(115, 8),  // "newState"
        QT_MOC_LITERAL(124, 6)   // "reason"
    },
    "AccountTask",
    "showVerificationUriAndCode",
    "",
    "uri",
    "code",
    "expiresIn",
    "hideVerificationUriAndCode",
    "changeState",
    "AccountTaskState",
    "newState",
    "reason"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAccountTaskENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   38,    2, 0x06,    1 /* Public */,
       6,    0,   45,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    2,   46,    2, 0x09,    6 /* Protected */,
       7,    1,   51,    2, 0x29,    9 /* Protected | MethodCloned */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl, QMetaType::QString, QMetaType::Int,    3,    4,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Bool, 0x80000000 | 8, QMetaType::QString,    9,   10,
    QMetaType::Bool, 0x80000000 | 8,    9,

       0        // eod
};

Q_CONSTINIT const QMetaObject AccountTask::staticMetaObject = { {
    QMetaObject::SuperData::link<Task::staticMetaObject>(),
    qt_meta_stringdata_CLASSAccountTaskENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAccountTaskENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAccountTaskENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AccountTask, std::true_type>,
        // method 'showVerificationUriAndCode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'hideVerificationUriAndCode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'changeState'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<AccountTaskState, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'changeState'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<AccountTaskState, std::false_type>
    >,
    nullptr
} };

void AccountTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AccountTask *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->showVerificationUriAndCode((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 1: _t->hideVerificationUriAndCode(); break;
        case 2: { bool _r = _t->changeState((*reinterpret_cast< std::add_pointer_t<AccountTaskState>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->changeState((*reinterpret_cast< std::add_pointer_t<AccountTaskState>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AccountTask::*)(const QUrl & , const QString & , int );
            if (_t _q_method = &AccountTask::showVerificationUriAndCode; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AccountTask::*)();
            if (_t _q_method = &AccountTask::hideVerificationUriAndCode; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *AccountTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AccountTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAccountTaskENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return Task::qt_metacast(_clname);
}

int AccountTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Task::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void AccountTask::showVerificationUriAndCode(const QUrl & _t1, const QString & _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AccountTask::hideVerificationUriAndCode()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
