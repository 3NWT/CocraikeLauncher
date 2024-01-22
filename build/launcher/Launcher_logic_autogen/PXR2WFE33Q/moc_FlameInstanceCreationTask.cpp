/****************************************************************************
** Meta object code from reading C++ file 'FlameInstanceCreationTask.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../launcher/modplatform/flame/FlameInstanceCreationTask.h"
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
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
#error "The header file 'FlameInstanceCreationTask.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSFlameCreationTaskENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSFlameCreationTaskENDCLASS = QtMocHelpers::stringData(
    "FlameCreationTask",
    "idResolverSucceeded",
    "",
    "QEventLoop&",
    "setupDownloadJob",
    "copyBlockedMods",
    "QList<BlockedMod>",
    "blocked_mods",
    "validateZIPResouces"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSFlameCreationTaskENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[18];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[17];
    char stringdata5[16];
    char stringdata6[18];
    char stringdata7[13];
    char stringdata8[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSFlameCreationTaskENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSFlameCreationTaskENDCLASS_t qt_meta_stringdata_CLASSFlameCreationTaskENDCLASS = {
    {
        QT_MOC_LITERAL(0, 17),  // "FlameCreationTask"
        QT_MOC_LITERAL(18, 19),  // "idResolverSucceeded"
        QT_MOC_LITERAL(38, 0),  // ""
        QT_MOC_LITERAL(39, 11),  // "QEventLoop&"
        QT_MOC_LITERAL(51, 16),  // "setupDownloadJob"
        QT_MOC_LITERAL(68, 15),  // "copyBlockedMods"
        QT_MOC_LITERAL(84, 17),  // "QList<BlockedMod>"
        QT_MOC_LITERAL(102, 12),  // "blocked_mods"
        QT_MOC_LITERAL(115, 19)   // "validateZIPResouces"
    },
    "FlameCreationTask",
    "idResolverSucceeded",
    "",
    "QEventLoop&",
    "setupDownloadJob",
    "copyBlockedMods",
    "QList<BlockedMod>",
    "blocked_mods",
    "validateZIPResouces"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFlameCreationTaskENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x08,    1 /* Private */,
       4,    1,   41,    2, 0x08,    3 /* Private */,
       5,    1,   44,    2, 0x08,    5 /* Private */,
       8,    0,   47,    2, 0x08,    7 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject FlameCreationTask::staticMetaObject = { {
    QMetaObject::SuperData::link<InstanceCreationTask::staticMetaObject>(),
    qt_meta_stringdata_CLASSFlameCreationTaskENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFlameCreationTaskENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFlameCreationTaskENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FlameCreationTask, std::true_type>,
        // method 'idResolverSucceeded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QEventLoop &, std::false_type>,
        // method 'setupDownloadJob'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QEventLoop &, std::false_type>,
        // method 'copyBlockedMods'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QList<BlockedMod> const &, std::false_type>,
        // method 'validateZIPResouces'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void FlameCreationTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FlameCreationTask *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->idResolverSucceeded((*reinterpret_cast< std::add_pointer_t<QEventLoop&>>(_a[1]))); break;
        case 1: _t->setupDownloadJob((*reinterpret_cast< std::add_pointer_t<QEventLoop&>>(_a[1]))); break;
        case 2: _t->copyBlockedMods((*reinterpret_cast< std::add_pointer_t<QList<BlockedMod>>>(_a[1]))); break;
        case 3: _t->validateZIPResouces(); break;
        default: ;
        }
    }
}

const QMetaObject *FlameCreationTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FlameCreationTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFlameCreationTaskENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return InstanceCreationTask::qt_metacast(_clname);
}

int FlameCreationTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = InstanceCreationTask::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
