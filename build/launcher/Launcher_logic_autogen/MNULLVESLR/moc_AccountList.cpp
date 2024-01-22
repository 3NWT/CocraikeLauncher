/****************************************************************************
** Meta object code from reading C++ file 'AccountList.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../launcher/minecraft/auth/AccountList.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AccountList.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSAccountListENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSAccountListENDCLASS = QtMocHelpers::stringData(
    "AccountList",
    "listChanged",
    "",
    "listActivityChanged",
    "defaultAccountChanged",
    "activityChanged",
    "active",
    "accountChanged",
    "accountActivityChanged",
    "fillQueue",
    "tryNext",
    "authSucceeded",
    "authFailed",
    "reason"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSAccountListENDCLASS_t {
    uint offsetsAndSizes[28];
    char stringdata0[12];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[20];
    char stringdata4[22];
    char stringdata5[16];
    char stringdata6[7];
    char stringdata7[15];
    char stringdata8[23];
    char stringdata9[10];
    char stringdata10[8];
    char stringdata11[14];
    char stringdata12[11];
    char stringdata13[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSAccountListENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSAccountListENDCLASS_t qt_meta_stringdata_CLASSAccountListENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "AccountList"
        QT_MOC_LITERAL(12, 11),  // "listChanged"
        QT_MOC_LITERAL(24, 0),  // ""
        QT_MOC_LITERAL(25, 19),  // "listActivityChanged"
        QT_MOC_LITERAL(45, 21),  // "defaultAccountChanged"
        QT_MOC_LITERAL(67, 15),  // "activityChanged"
        QT_MOC_LITERAL(83, 6),  // "active"
        QT_MOC_LITERAL(90, 14),  // "accountChanged"
        QT_MOC_LITERAL(105, 22),  // "accountActivityChanged"
        QT_MOC_LITERAL(128, 9),  // "fillQueue"
        QT_MOC_LITERAL(138, 7),  // "tryNext"
        QT_MOC_LITERAL(146, 13),  // "authSucceeded"
        QT_MOC_LITERAL(160, 10),  // "authFailed"
        QT_MOC_LITERAL(171, 6)   // "reason"
    },
    "AccountList",
    "listChanged",
    "",
    "listActivityChanged",
    "defaultAccountChanged",
    "activityChanged",
    "active",
    "accountChanged",
    "accountActivityChanged",
    "fillQueue",
    "tryNext",
    "authSucceeded",
    "authFailed",
    "reason"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAccountListENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x06,    1 /* Public */,
       3,    0,   75,    2, 0x06,    2 /* Public */,
       4,    0,   76,    2, 0x06,    3 /* Public */,
       5,    1,   77,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,   80,    2, 0x0a,    6 /* Public */,
       8,    1,   81,    2, 0x0a,    7 /* Public */,
       9,    0,   84,    2, 0x0a,    9 /* Public */,
      10,    0,   85,    2, 0x08,   10 /* Private */,
      11,    0,   86,    2, 0x08,   11 /* Private */,
      12,    1,   87,    2, 0x08,   12 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,

       0        // eod
};

Q_CONSTINIT const QMetaObject AccountList::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSAccountListENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAccountListENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAccountListENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AccountList, std::true_type>,
        // method 'listChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'listActivityChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'defaultAccountChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'activityChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'accountChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'accountActivityChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'fillQueue'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'tryNext'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'authSucceeded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'authFailed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>
    >,
    nullptr
} };

void AccountList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AccountList *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->listChanged(); break;
        case 1: _t->listActivityChanged(); break;
        case 2: _t->defaultAccountChanged(); break;
        case 3: _t->activityChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->accountChanged(); break;
        case 5: _t->accountActivityChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->fillQueue(); break;
        case 7: _t->tryNext(); break;
        case 8: _t->authSucceeded(); break;
        case 9: _t->authFailed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AccountList::*)();
            if (_t _q_method = &AccountList::listChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AccountList::*)();
            if (_t _q_method = &AccountList::listActivityChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AccountList::*)();
            if (_t _q_method = &AccountList::defaultAccountChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AccountList::*)(bool );
            if (_t _q_method = &AccountList::activityChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *AccountList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AccountList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAccountListENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int AccountList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void AccountList::listChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AccountList::listActivityChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void AccountList::defaultAccountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void AccountList::activityChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
