/****************************************************************************
** Meta object code from reading C++ file 'FTBPackInstallTask.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../launcher/modplatform/modpacksch/FTBPackInstallTask.h"
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
#error "The header file 'FTBPackInstallTask.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSModpacksCHSCOPEPackInstallTaskENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSModpacksCHSCOPEPackInstallTaskENDCLASS = QtMocHelpers::stringData(
    "ModpacksCH::PackInstallTask",
    "onManifestDownloadSucceeded",
    "",
    "onResolveModsSucceeded",
    "onCreateInstanceSucceeded",
    "onModDownloadSucceeded",
    "onManifestDownloadFailed",
    "reason",
    "onResolveModsFailed",
    "onCreateInstanceFailed",
    "onModDownloadFailed"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSModpacksCHSCOPEPackInstallTaskENDCLASS_t {
    uint offsetsAndSizes[22];
    char stringdata0[28];
    char stringdata1[28];
    char stringdata2[1];
    char stringdata3[23];
    char stringdata4[26];
    char stringdata5[23];
    char stringdata6[25];
    char stringdata7[7];
    char stringdata8[20];
    char stringdata9[23];
    char stringdata10[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSModpacksCHSCOPEPackInstallTaskENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSModpacksCHSCOPEPackInstallTaskENDCLASS_t qt_meta_stringdata_CLASSModpacksCHSCOPEPackInstallTaskENDCLASS = {
    {
        QT_MOC_LITERAL(0, 27),  // "ModpacksCH::PackInstallTask"
        QT_MOC_LITERAL(28, 27),  // "onManifestDownloadSucceeded"
        QT_MOC_LITERAL(56, 0),  // ""
        QT_MOC_LITERAL(57, 22),  // "onResolveModsSucceeded"
        QT_MOC_LITERAL(80, 25),  // "onCreateInstanceSucceeded"
        QT_MOC_LITERAL(106, 22),  // "onModDownloadSucceeded"
        QT_MOC_LITERAL(129, 24),  // "onManifestDownloadFailed"
        QT_MOC_LITERAL(154, 6),  // "reason"
        QT_MOC_LITERAL(161, 19),  // "onResolveModsFailed"
        QT_MOC_LITERAL(181, 22),  // "onCreateInstanceFailed"
        QT_MOC_LITERAL(204, 19)   // "onModDownloadFailed"
    },
    "ModpacksCH::PackInstallTask",
    "onManifestDownloadSucceeded",
    "",
    "onResolveModsSucceeded",
    "onCreateInstanceSucceeded",
    "onModDownloadSucceeded",
    "onManifestDownloadFailed",
    "reason",
    "onResolveModsFailed",
    "onCreateInstanceFailed",
    "onModDownloadFailed"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSModpacksCHSCOPEPackInstallTaskENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x08,    1 /* Private */,
       3,    0,   63,    2, 0x08,    2 /* Private */,
       4,    0,   64,    2, 0x08,    3 /* Private */,
       5,    0,   65,    2, 0x08,    4 /* Private */,
       6,    1,   66,    2, 0x08,    5 /* Private */,
       8,    1,   69,    2, 0x08,    7 /* Private */,
       9,    1,   72,    2, 0x08,    9 /* Private */,
      10,    1,   75,    2, 0x08,   11 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    7,

       0        // eod
};

Q_CONSTINIT const QMetaObject ModpacksCH::PackInstallTask::staticMetaObject = { {
    QMetaObject::SuperData::link<InstanceTask::staticMetaObject>(),
    qt_meta_stringdata_CLASSModpacksCHSCOPEPackInstallTaskENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSModpacksCHSCOPEPackInstallTaskENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSModpacksCHSCOPEPackInstallTaskENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PackInstallTask, std::true_type>,
        // method 'onManifestDownloadSucceeded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onResolveModsSucceeded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onCreateInstanceSucceeded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onModDownloadSucceeded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onManifestDownloadFailed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'onResolveModsFailed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'onCreateInstanceFailed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'onModDownloadFailed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>
    >,
    nullptr
} };

void ModpacksCH::PackInstallTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PackInstallTask *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onManifestDownloadSucceeded(); break;
        case 1: _t->onResolveModsSucceeded(); break;
        case 2: _t->onCreateInstanceSucceeded(); break;
        case 3: _t->onModDownloadSucceeded(); break;
        case 4: _t->onManifestDownloadFailed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->onResolveModsFailed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->onCreateInstanceFailed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->onModDownloadFailed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *ModpacksCH::PackInstallTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModpacksCH::PackInstallTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSModpacksCHSCOPEPackInstallTaskENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return InstanceTask::qt_metacast(_clname);
}

int ModpacksCH::PackInstallTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = InstanceTask::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}
QT_WARNING_POP
