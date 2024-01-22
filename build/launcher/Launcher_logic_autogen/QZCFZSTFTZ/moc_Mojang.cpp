/****************************************************************************
** Meta object code from reading C++ file 'Mojang.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../launcher/minecraft/auth/flows/Mojang.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Mojang.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSMojangRefreshENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMojangRefreshENDCLASS = QtMocHelpers::stringData(
    "MojangRefresh"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMojangRefreshENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMojangRefreshENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMojangRefreshENDCLASS_t qt_meta_stringdata_CLASSMojangRefreshENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13)   // "MojangRefresh"
    },
    "MojangRefresh"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMojangRefreshENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject MojangRefresh::staticMetaObject = { {
    QMetaObject::SuperData::link<AuthFlow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMojangRefreshENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMojangRefreshENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMojangRefreshENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MojangRefresh, std::true_type>
    >,
    nullptr
} };

void MojangRefresh::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *MojangRefresh::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MojangRefresh::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMojangRefreshENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return AuthFlow::qt_metacast(_clname);
}

int MojangRefresh::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AuthFlow::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMojangLoginENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMojangLoginENDCLASS = QtMocHelpers::stringData(
    "MojangLogin"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMojangLoginENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMojangLoginENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMojangLoginENDCLASS_t qt_meta_stringdata_CLASSMojangLoginENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11)   // "MojangLogin"
    },
    "MojangLogin"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMojangLoginENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject MojangLogin::staticMetaObject = { {
    QMetaObject::SuperData::link<AuthFlow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMojangLoginENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMojangLoginENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMojangLoginENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MojangLogin, std::true_type>
    >,
    nullptr
} };

void MojangLogin::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *MojangLogin::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MojangLogin::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMojangLoginENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return AuthFlow::qt_metacast(_clname);
}

int MojangLogin::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AuthFlow::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
