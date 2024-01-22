/****************************************************************************
** Meta object code from reading C++ file 'Offline.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../launcher/minecraft/auth/flows/Offline.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Offline.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOfflineRefreshENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSOfflineRefreshENDCLASS = QtMocHelpers::stringData(
    "OfflineRefresh"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSOfflineRefreshENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSOfflineRefreshENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSOfflineRefreshENDCLASS_t qt_meta_stringdata_CLASSOfflineRefreshENDCLASS = {
    {
        QT_MOC_LITERAL(0, 14)   // "OfflineRefresh"
    },
    "OfflineRefresh"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOfflineRefreshENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject OfflineRefresh::staticMetaObject = { {
    QMetaObject::SuperData::link<AuthFlow::staticMetaObject>(),
    qt_meta_stringdata_CLASSOfflineRefreshENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOfflineRefreshENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOfflineRefreshENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<OfflineRefresh, std::true_type>
    >,
    nullptr
} };

void OfflineRefresh::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *OfflineRefresh::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OfflineRefresh::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOfflineRefreshENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return AuthFlow::qt_metacast(_clname);
}

int OfflineRefresh::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AuthFlow::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSOfflineLoginENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSOfflineLoginENDCLASS = QtMocHelpers::stringData(
    "OfflineLogin"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSOfflineLoginENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSOfflineLoginENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSOfflineLoginENDCLASS_t qt_meta_stringdata_CLASSOfflineLoginENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12)   // "OfflineLogin"
    },
    "OfflineLogin"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOfflineLoginENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject OfflineLogin::staticMetaObject = { {
    QMetaObject::SuperData::link<AuthFlow::staticMetaObject>(),
    qt_meta_stringdata_CLASSOfflineLoginENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOfflineLoginENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOfflineLoginENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<OfflineLogin, std::true_type>
    >,
    nullptr
} };

void OfflineLogin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *OfflineLogin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OfflineLogin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOfflineLoginENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return AuthFlow::qt_metacast(_clname);
}

int OfflineLogin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AuthFlow::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
