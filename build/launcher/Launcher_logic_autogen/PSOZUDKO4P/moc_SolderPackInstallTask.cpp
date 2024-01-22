/****************************************************************************
** Meta object code from reading C++ file 'SolderPackInstallTask.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../launcher/modplatform/technic/SolderPackInstallTask.h"
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
#error "The header file 'SolderPackInstallTask.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSTechnicSCOPESolderPackInstallTaskENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSTechnicSCOPESolderPackInstallTaskENDCLASS = QtMocHelpers::stringData(
    "Technic::SolderPackInstallTask",
    "fileListSucceeded",
    "",
    "downloadSucceeded",
    "downloadFailed",
    "reason",
    "downloadProgressChanged",
    "current",
    "total",
    "downloadAborted",
    "extractFinished",
    "extractAborted"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSTechnicSCOPESolderPackInstallTaskENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[31];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[18];
    char stringdata4[15];
    char stringdata5[7];
    char stringdata6[24];
    char stringdata7[8];
    char stringdata8[6];
    char stringdata9[16];
    char stringdata10[16];
    char stringdata11[15];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSTechnicSCOPESolderPackInstallTaskENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSTechnicSCOPESolderPackInstallTaskENDCLASS_t qt_meta_stringdata_CLASSTechnicSCOPESolderPackInstallTaskENDCLASS = {
    {
        QT_MOC_LITERAL(0, 30),  // "Technic::SolderPackInstallTask"
        QT_MOC_LITERAL(31, 17),  // "fileListSucceeded"
        QT_MOC_LITERAL(49, 0),  // ""
        QT_MOC_LITERAL(50, 17),  // "downloadSucceeded"
        QT_MOC_LITERAL(68, 14),  // "downloadFailed"
        QT_MOC_LITERAL(83, 6),  // "reason"
        QT_MOC_LITERAL(90, 23),  // "downloadProgressChanged"
        QT_MOC_LITERAL(114, 7),  // "current"
        QT_MOC_LITERAL(122, 5),  // "total"
        QT_MOC_LITERAL(128, 15),  // "downloadAborted"
        QT_MOC_LITERAL(144, 15),  // "extractFinished"
        QT_MOC_LITERAL(160, 14)   // "extractAborted"
    },
    "Technic::SolderPackInstallTask",
    "fileListSucceeded",
    "",
    "downloadSucceeded",
    "downloadFailed",
    "reason",
    "downloadProgressChanged",
    "current",
    "total",
    "downloadAborted",
    "extractFinished",
    "extractAborted"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTechnicSCOPESolderPackInstallTaskENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x08,    1 /* Private */,
       3,    0,   57,    2, 0x08,    2 /* Private */,
       4,    1,   58,    2, 0x08,    3 /* Private */,
       6,    2,   61,    2, 0x08,    5 /* Private */,
       9,    0,   66,    2, 0x08,    8 /* Private */,
      10,    0,   67,    2, 0x08,    9 /* Private */,
      11,    0,   68,    2, 0x08,   10 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    7,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Technic::SolderPackInstallTask::staticMetaObject = { {
    QMetaObject::SuperData::link<InstanceTask::staticMetaObject>(),
    qt_meta_stringdata_CLASSTechnicSCOPESolderPackInstallTaskENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTechnicSCOPESolderPackInstallTaskENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTechnicSCOPESolderPackInstallTaskENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SolderPackInstallTask, std::true_type>,
        // method 'fileListSucceeded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'downloadSucceeded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'downloadFailed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'downloadProgressChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'downloadAborted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'extractFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'extractAborted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Technic::SolderPackInstallTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SolderPackInstallTask *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->fileListSucceeded(); break;
        case 1: _t->downloadSucceeded(); break;
        case 2: _t->downloadFailed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->downloadProgressChanged((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        case 4: _t->downloadAborted(); break;
        case 5: _t->extractFinished(); break;
        case 6: _t->extractAborted(); break;
        default: ;
        }
    }
}

const QMetaObject *Technic::SolderPackInstallTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Technic::SolderPackInstallTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTechnicSCOPESolderPackInstallTaskENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return InstanceTask::qt_metacast(_clname);
}

int Technic::SolderPackInstallTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = InstanceTask::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
