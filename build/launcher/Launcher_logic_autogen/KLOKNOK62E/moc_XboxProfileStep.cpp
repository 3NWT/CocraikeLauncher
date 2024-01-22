/****************************************************************************
** Meta object code from reading C++ file 'XboxProfileStep.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../launcher/minecraft/auth/steps/XboxProfileStep.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'XboxProfileStep.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSXboxProfileStepENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSXboxProfileStepENDCLASS = QtMocHelpers::stringData(
    "XboxProfileStep",
    "onRequestDone",
    "",
    "QNetworkReply::NetworkError",
    "QList<QNetworkReply::RawHeaderPair>"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSXboxProfileStepENDCLASS_t {
    uint offsetsAndSizes[10];
    char stringdata0[16];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[28];
    char stringdata4[36];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSXboxProfileStepENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSXboxProfileStepENDCLASS_t qt_meta_stringdata_CLASSXboxProfileStepENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15),  // "XboxProfileStep"
        QT_MOC_LITERAL(16, 13),  // "onRequestDone"
        QT_MOC_LITERAL(30, 0),  // ""
        QT_MOC_LITERAL(31, 27),  // "QNetworkReply::NetworkError"
        QT_MOC_LITERAL(59, 35)   // "QList<QNetworkReply::RawHeade..."
    },
    "XboxProfileStep",
    "onRequestDone",
    "",
    "QNetworkReply::NetworkError",
    "QList<QNetworkReply::RawHeaderPair>"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSXboxProfileStepENDCLASS[] = {

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
       1,    3,   20,    2, 0x08,    1 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QByteArray, 0x80000000 | 4,    2,    2,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject XboxProfileStep::staticMetaObject = { {
    QMetaObject::SuperData::link<AuthStep::staticMetaObject>(),
    qt_meta_stringdata_CLASSXboxProfileStepENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSXboxProfileStepENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSXboxProfileStepENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<XboxProfileStep, std::true_type>,
        // method 'onRequestDone'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply::NetworkError, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>,
        QtPrivate::TypeAndForceComplete<QList<QNetworkReply::RawHeaderPair>, std::false_type>
    >,
    nullptr
} };

void XboxProfileStep::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<XboxProfileStep *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onRequestDone((*reinterpret_cast< std::add_pointer_t<QNetworkReply::NetworkError>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QList<QNetworkReply::RawHeaderPair>>>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply::NetworkError >(); break;
            }
            break;
        }
    }
}

const QMetaObject *XboxProfileStep::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *XboxProfileStep::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSXboxProfileStepENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return AuthStep::qt_metacast(_clname);
}

int XboxProfileStep::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
