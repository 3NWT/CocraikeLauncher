/****************************************************************************
** Meta object code from reading C++ file 'AtlUserInteractionSupportImpl.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../launcher/ui/pages/modplatform/atlauncher/AtlUserInteractionSupportImpl.h"
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AtlUserInteractionSupportImpl.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSAtlUserInteractionSupportImplENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSAtlUserInteractionSupportImplENDCLASS = QtMocHelpers::stringData(
    "AtlUserInteractionSupportImpl"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSAtlUserInteractionSupportImplENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[30];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSAtlUserInteractionSupportImplENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSAtlUserInteractionSupportImplENDCLASS_t qt_meta_stringdata_CLASSAtlUserInteractionSupportImplENDCLASS = {
    {
        QT_MOC_LITERAL(0, 29)   // "AtlUserInteractionSupportImpl"
    },
    "AtlUserInteractionSupportImpl"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAtlUserInteractionSupportImplENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject AtlUserInteractionSupportImpl::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSAtlUserInteractionSupportImplENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAtlUserInteractionSupportImplENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAtlUserInteractionSupportImplENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AtlUserInteractionSupportImpl, std::true_type>
    >,
    nullptr
} };

void AtlUserInteractionSupportImpl::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *AtlUserInteractionSupportImpl::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AtlUserInteractionSupportImpl::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAtlUserInteractionSupportImplENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ATLauncher::UserInteractionSupport"))
        return static_cast< ATLauncher::UserInteractionSupport*>(this);
    return QObject::qt_metacast(_clname);
}

int AtlUserInteractionSupportImpl::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
