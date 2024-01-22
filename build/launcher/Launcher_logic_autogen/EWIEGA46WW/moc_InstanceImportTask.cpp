/****************************************************************************
** Meta object code from reading C++ file 'InstanceImportTask.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../launcher/InstanceImportTask.h"
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
#error "The header file 'InstanceImportTask.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSInstanceImportTaskENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSInstanceImportTaskENDCLASS = QtMocHelpers::stringData(
    "InstanceImportTask",
    "downloadSucceeded",
    "",
    "downloadFailed",
    "reason",
    "downloadProgressChanged",
    "current",
    "total",
    "downloadAborted",
    "extractFinished"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSInstanceImportTaskENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[19];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[7];
    char stringdata5[24];
    char stringdata6[8];
    char stringdata7[6];
    char stringdata8[16];
    char stringdata9[16];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSInstanceImportTaskENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSInstanceImportTaskENDCLASS_t qt_meta_stringdata_CLASSInstanceImportTaskENDCLASS = {
    {
        QT_MOC_LITERAL(0, 18),  // "InstanceImportTask"
        QT_MOC_LITERAL(19, 17),  // "downloadSucceeded"
        QT_MOC_LITERAL(37, 0),  // ""
        QT_MOC_LITERAL(38, 14),  // "downloadFailed"
        QT_MOC_LITERAL(53, 6),  // "reason"
        QT_MOC_LITERAL(60, 23),  // "downloadProgressChanged"
        QT_MOC_LITERAL(84, 7),  // "current"
        QT_MOC_LITERAL(92, 5),  // "total"
        QT_MOC_LITERAL(98, 15),  // "downloadAborted"
        QT_MOC_LITERAL(114, 15)   // "extractFinished"
    },
    "InstanceImportTask",
    "downloadSucceeded",
    "",
    "downloadFailed",
    "reason",
    "downloadProgressChanged",
    "current",
    "total",
    "downloadAborted",
    "extractFinished"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSInstanceImportTaskENDCLASS[] = {

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
       5,    2,   48,    2, 0x08,    4 /* Private */,
       8,    0,   53,    2, 0x08,    7 /* Private */,
       9,    0,   54,    2, 0x08,    8 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    6,    7,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject InstanceImportTask::staticMetaObject = { {
    QMetaObject::SuperData::link<InstanceTask::staticMetaObject>(),
    qt_meta_stringdata_CLASSInstanceImportTaskENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSInstanceImportTaskENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSInstanceImportTaskENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<InstanceImportTask, std::true_type>,
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
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void InstanceImportTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InstanceImportTask *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->downloadSucceeded(); break;
        case 1: _t->downloadFailed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->downloadProgressChanged((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        case 3: _t->downloadAborted(); break;
        case 4: _t->extractFinished(); break;
        default: ;
        }
    }
}

const QMetaObject *InstanceImportTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InstanceImportTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSInstanceImportTaskENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return InstanceTask::qt_metacast(_clname);
}

int InstanceImportTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
