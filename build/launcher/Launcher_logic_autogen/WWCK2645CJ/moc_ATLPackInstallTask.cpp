/****************************************************************************
** Meta object code from reading C++ file 'ATLPackInstallTask.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../launcher/modplatform/atlauncher/ATLPackInstallTask.h"
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
#error "The header file 'ATLPackInstallTask.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSATLauncherSCOPEPackInstallTaskENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSATLauncherSCOPEPackInstallTaskENDCLASS = QtMocHelpers::stringData(
    "ATLauncher::PackInstallTask",
    "onDownloadSucceeded",
    "",
    "onDownloadFailed",
    "reason",
    "onDownloadAborted",
    "onModsDownloaded",
    "onModsExtracted"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSATLauncherSCOPEPackInstallTaskENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[28];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[7];
    char stringdata5[18];
    char stringdata6[17];
    char stringdata7[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSATLauncherSCOPEPackInstallTaskENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSATLauncherSCOPEPackInstallTaskENDCLASS_t qt_meta_stringdata_CLASSATLauncherSCOPEPackInstallTaskENDCLASS = {
    {
        QT_MOC_LITERAL(0, 27),  // "ATLauncher::PackInstallTask"
        QT_MOC_LITERAL(28, 19),  // "onDownloadSucceeded"
        QT_MOC_LITERAL(48, 0),  // ""
        QT_MOC_LITERAL(49, 16),  // "onDownloadFailed"
        QT_MOC_LITERAL(66, 6),  // "reason"
        QT_MOC_LITERAL(73, 17),  // "onDownloadAborted"
        QT_MOC_LITERAL(91, 16),  // "onModsDownloaded"
        QT_MOC_LITERAL(108, 15)   // "onModsExtracted"
    },
    "ATLauncher::PackInstallTask",
    "onDownloadSucceeded",
    "",
    "onDownloadFailed",
    "reason",
    "onDownloadAborted",
    "onModsDownloaded",
    "onModsExtracted"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSATLauncherSCOPEPackInstallTaskENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x08,    1 /* Private */,
       3,    1,   45,    2, 0x08,    2 /* Private */,
       5,    0,   48,    2, 0x08,    4 /* Private */,
       6,    0,   49,    2, 0x08,    5 /* Private */,
       7,    0,   50,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject ATLauncher::PackInstallTask::staticMetaObject = { {
    QMetaObject::SuperData::link<InstanceTask::staticMetaObject>(),
    qt_meta_stringdata_CLASSATLauncherSCOPEPackInstallTaskENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSATLauncherSCOPEPackInstallTaskENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSATLauncherSCOPEPackInstallTaskENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PackInstallTask, std::true_type>,
        // method 'onDownloadSucceeded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onDownloadFailed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'onDownloadAborted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onModsDownloaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onModsExtracted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ATLauncher::PackInstallTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PackInstallTask *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onDownloadSucceeded(); break;
        case 1: _t->onDownloadFailed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->onDownloadAborted(); break;
        case 3: _t->onModsDownloaded(); break;
        case 4: _t->onModsExtracted(); break;
        default: ;
        }
    }
}

const QMetaObject *ATLauncher::PackInstallTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ATLauncher::PackInstallTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSATLauncherSCOPEPackInstallTaskENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return InstanceTask::qt_metacast(_clname);
}

int ATLauncher::PackInstallTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = InstanceTask::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
