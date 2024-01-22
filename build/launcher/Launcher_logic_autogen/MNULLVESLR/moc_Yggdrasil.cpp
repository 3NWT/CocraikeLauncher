/****************************************************************************
** Meta object code from reading C++ file 'Yggdrasil.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../launcher/minecraft/auth/Yggdrasil.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Yggdrasil.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSYggdrasilENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSYggdrasilENDCLASS = QtMocHelpers::stringData(
    "Yggdrasil",
    "processReply",
    "",
    "refreshTimers",
    "heartbeat",
    "sslErrors",
    "QList<QSslError>",
    "abortByTimeout",
    "abort"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSYggdrasilENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[10];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[10];
    char stringdata5[10];
    char stringdata6[17];
    char stringdata7[15];
    char stringdata8[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSYggdrasilENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSYggdrasilENDCLASS_t qt_meta_stringdata_CLASSYggdrasilENDCLASS = {
    {
        QT_MOC_LITERAL(0, 9),  // "Yggdrasil"
        QT_MOC_LITERAL(10, 12),  // "processReply"
        QT_MOC_LITERAL(23, 0),  // ""
        QT_MOC_LITERAL(24, 13),  // "refreshTimers"
        QT_MOC_LITERAL(38, 9),  // "heartbeat"
        QT_MOC_LITERAL(48, 9),  // "sslErrors"
        QT_MOC_LITERAL(58, 16),  // "QList<QSslError>"
        QT_MOC_LITERAL(75, 14),  // "abortByTimeout"
        QT_MOC_LITERAL(90, 5)   // "abort"
    },
    "Yggdrasil",
    "processReply",
    "",
    "refreshTimers",
    "heartbeat",
    "sslErrors",
    "QList<QSslError>",
    "abortByTimeout",
    "abort"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSYggdrasilENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x09,    1 /* Protected */,
       3,    2,   51,    2, 0x09,    2 /* Protected */,
       4,    0,   56,    2, 0x09,    5 /* Protected */,
       5,    1,   57,    2, 0x09,    6 /* Protected */,
       7,    0,   60,    2, 0x09,    8 /* Protected */,
       8,    0,   61,    2, 0x0a,    9 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    2,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void,
    QMetaType::Bool,

       0        // eod
};

Q_CONSTINIT const QMetaObject Yggdrasil::staticMetaObject = { {
    QMetaObject::SuperData::link<AccountTask::staticMetaObject>(),
    qt_meta_stringdata_CLASSYggdrasilENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSYggdrasilENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSYggdrasilENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Yggdrasil, std::true_type>,
        // method 'processReply'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'refreshTimers'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'heartbeat'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sslErrors'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QList<QSslError>, std::false_type>,
        // method 'abortByTimeout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'abort'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void Yggdrasil::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Yggdrasil *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->processReply(); break;
        case 1: _t->refreshTimers((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        case 2: _t->heartbeat(); break;
        case 3: _t->sslErrors((*reinterpret_cast< std::add_pointer_t<QList<QSslError>>>(_a[1]))); break;
        case 4: _t->abortByTimeout(); break;
        case 5: { bool _r = _t->abort();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QSslError> >(); break;
            }
            break;
        }
    }
}

const QMetaObject *Yggdrasil::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Yggdrasil::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSYggdrasilENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return AccountTask::qt_metacast(_clname);
}

int Yggdrasil::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AccountTask::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
