/****************************************************************************
** Meta object code from reading C++ file 'PackInstallTask.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../launcher/modplatform/legacy_ftb/PackInstallTask.h"
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
#error "The header file 'PackInstallTask.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSLegacyFTBSCOPEPackInstallTaskENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSLegacyFTBSCOPEPackInstallTaskENDCLASS = QtMocHelpers::stringData(
    "LegacyFTB::PackInstallTask",
    "onDownloadSucceeded",
    "",
    "onDownloadFailed",
    "reason",
    "onDownloadProgress",
    "current",
    "total",
    "onDownloadAborted",
    "onUnzipFinished",
    "onUnzipCanceled"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSLegacyFTBSCOPEPackInstallTaskENDCLASS_t {
    uint offsetsAndSizes[22];
    char stringdata0[27];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[7];
    char stringdata5[19];
    char stringdata6[8];
    char stringdata7[6];
    char stringdata8[18];
    char stringdata9[16];
    char stringdata10[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSLegacyFTBSCOPEPackInstallTaskENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSLegacyFTBSCOPEPackInstallTaskENDCLASS_t qt_meta_stringdata_CLASSLegacyFTBSCOPEPackInstallTaskENDCLASS = {
    {
        QT_MOC_LITERAL(0, 26),  // "LegacyFTB::PackInstallTask"
        QT_MOC_LITERAL(27, 19),  // "onDownloadSucceeded"
        QT_MOC_LITERAL(47, 0),  // ""
        QT_MOC_LITERAL(48, 16),  // "onDownloadFailed"
        QT_MOC_LITERAL(65, 6),  // "reason"
        QT_MOC_LITERAL(72, 18),  // "onDownloadProgress"
        QT_MOC_LITERAL(91, 7),  // "current"
        QT_MOC_LITERAL(99, 5),  // "total"
        QT_MOC_LITERAL(105, 17),  // "onDownloadAborted"
        QT_MOC_LITERAL(123, 15),  // "onUnzipFinished"
        QT_MOC_LITERAL(139, 15)   // "onUnzipCanceled"
    },
    "LegacyFTB::PackInstallTask",
    "onDownloadSucceeded",
    "",
    "onDownloadFailed",
    "reason",
    "onDownloadProgress",
    "current",
    "total",
    "onDownloadAborted",
    "onUnzipFinished",
    "onUnzipCanceled"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSLegacyFTBSCOPEPackInstallTaskENDCLASS[] = {

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
       1,    0,   50,    2, 0x08,    1 /* Private */,
       3,    1,   51,    2, 0x08,    2 /* Private */,
       5,    2,   54,    2, 0x08,    4 /* Private */,
       8,    0,   59,    2, 0x08,    7 /* Private */,
       9,    0,   60,    2, 0x08,    8 /* Private */,
      10,    0,   61,    2, 0x08,    9 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject LegacyFTB::PackInstallTask::staticMetaObject = { {
    QMetaObject::SuperData::link<InstanceTask::staticMetaObject>(),
    qt_meta_stringdata_CLASSLegacyFTBSCOPEPackInstallTaskENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSLegacyFTBSCOPEPackInstallTaskENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSLegacyFTBSCOPEPackInstallTaskENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PackInstallTask, std::true_type>,
        // method 'onDownloadSucceeded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onDownloadFailed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'onDownloadProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'onDownloadAborted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onUnzipFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onUnzipCanceled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void LegacyFTB::PackInstallTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PackInstallTask *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onDownloadSucceeded(); break;
        case 1: _t->onDownloadFailed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->onDownloadProgress((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        case 3: _t->onDownloadAborted(); break;
        case 4: _t->onUnzipFinished(); break;
        case 5: _t->onUnzipCanceled(); break;
        default: ;
        }
    }
}

const QMetaObject *LegacyFTB::PackInstallTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LegacyFTB::PackInstallTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSLegacyFTBSCOPEPackInstallTaskENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return InstanceTask::qt_metacast(_clname);
}

int LegacyFTB::PackInstallTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = InstanceTask::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
