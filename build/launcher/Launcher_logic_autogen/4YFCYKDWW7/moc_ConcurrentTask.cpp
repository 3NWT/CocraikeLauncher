/****************************************************************************
** Meta object code from reading C++ file 'ConcurrentTask.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../launcher/tasks/ConcurrentTask.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ConcurrentTask.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSConcurrentTaskENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSConcurrentTaskENDCLASS = QtMocHelpers::stringData(
    "ConcurrentTask",
    "abort",
    "",
    "clear",
    "executeTask",
    "startNext",
    "subTaskSucceeded",
    "Task::Ptr",
    "subTaskFailed",
    "msg",
    "subTaskStatus",
    "subTaskProgress",
    "current",
    "total"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSConcurrentTaskENDCLASS_t {
    uint offsetsAndSizes[28];
    char stringdata0[15];
    char stringdata1[6];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[12];
    char stringdata5[10];
    char stringdata6[17];
    char stringdata7[10];
    char stringdata8[14];
    char stringdata9[4];
    char stringdata10[14];
    char stringdata11[16];
    char stringdata12[8];
    char stringdata13[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSConcurrentTaskENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSConcurrentTaskENDCLASS_t qt_meta_stringdata_CLASSConcurrentTaskENDCLASS = {
    {
        QT_MOC_LITERAL(0, 14),  // "ConcurrentTask"
        QT_MOC_LITERAL(15, 5),  // "abort"
        QT_MOC_LITERAL(21, 0),  // ""
        QT_MOC_LITERAL(22, 5),  // "clear"
        QT_MOC_LITERAL(28, 11),  // "executeTask"
        QT_MOC_LITERAL(40, 9),  // "startNext"
        QT_MOC_LITERAL(50, 16),  // "subTaskSucceeded"
        QT_MOC_LITERAL(67, 9),  // "Task::Ptr"
        QT_MOC_LITERAL(77, 13),  // "subTaskFailed"
        QT_MOC_LITERAL(91, 3),  // "msg"
        QT_MOC_LITERAL(95, 13),  // "subTaskStatus"
        QT_MOC_LITERAL(109, 15),  // "subTaskProgress"
        QT_MOC_LITERAL(125, 7),  // "current"
        QT_MOC_LITERAL(133, 5)   // "total"
    },
    "ConcurrentTask",
    "abort",
    "",
    "clear",
    "executeTask",
    "startNext",
    "subTaskSucceeded",
    "Task::Ptr",
    "subTaskFailed",
    "msg",
    "subTaskStatus",
    "subTaskProgress",
    "current",
    "total"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSConcurrentTaskENDCLASS[] = {

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
       1,    0,   62,    2, 0x0a,    1 /* Public */,
       3,    0,   63,    2, 0x0a,    2 /* Public */,
       4,    0,   64,    2, 0x09,    3 /* Protected */,
       5,    0,   65,    2, 0x09,    4 /* Protected */,
       6,    1,   66,    2, 0x09,    5 /* Protected */,
       8,    2,   69,    2, 0x09,    7 /* Protected */,
      10,    1,   74,    2, 0x09,   10 /* Protected */,
      11,    2,   77,    2, 0x09,   12 /* Protected */,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QString,    2,    9,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   12,   13,

       0        // eod
};

Q_CONSTINIT const QMetaObject ConcurrentTask::staticMetaObject = { {
    QMetaObject::SuperData::link<Task::staticMetaObject>(),
    qt_meta_stringdata_CLASSConcurrentTaskENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSConcurrentTaskENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSConcurrentTaskENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ConcurrentTask, std::true_type>,
        // method 'abort'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'clear'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'executeTask'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'startNext'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'subTaskSucceeded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Task::Ptr, std::false_type>,
        // method 'subTaskFailed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Task::Ptr, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'subTaskStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'subTaskProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>
    >,
    nullptr
} };

void ConcurrentTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ConcurrentTask *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { bool _r = _t->abort();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->clear(); break;
        case 2: _t->executeTask(); break;
        case 3: _t->startNext(); break;
        case 4: _t->subTaskSucceeded((*reinterpret_cast< std::add_pointer_t<Task::Ptr>>(_a[1]))); break;
        case 5: _t->subTaskFailed((*reinterpret_cast< std::add_pointer_t<Task::Ptr>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 6: _t->subTaskStatus((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->subTaskProgress((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *ConcurrentTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ConcurrentTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSConcurrentTaskENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return Task::qt_metacast(_clname);
}

int ConcurrentTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Task::qt_metacall(_c, _id, _a);
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
