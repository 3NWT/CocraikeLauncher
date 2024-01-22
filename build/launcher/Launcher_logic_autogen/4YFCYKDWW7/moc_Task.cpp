/****************************************************************************
** Meta object code from reading C++ file 'Task.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../launcher/tasks/Task.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Task.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSTaskENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSTaskENDCLASS = QtMocHelpers::stringData(
    "Task",
    "started",
    "",
    "progress",
    "current",
    "total",
    "finished",
    "succeeded",
    "aborted",
    "failed",
    "reason",
    "status",
    "stepStatus",
    "abortStatusChanged",
    "can_abort",
    "run",
    "start",
    "abort",
    "setAbortable",
    "emitSucceeded",
    "emitAborted",
    "emitFailed",
    "setStatus",
    "setProgress"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSTaskENDCLASS_t {
    uint offsetsAndSizes[48];
    char stringdata0[5];
    char stringdata1[8];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[8];
    char stringdata5[6];
    char stringdata6[9];
    char stringdata7[10];
    char stringdata8[8];
    char stringdata9[7];
    char stringdata10[7];
    char stringdata11[7];
    char stringdata12[11];
    char stringdata13[19];
    char stringdata14[10];
    char stringdata15[4];
    char stringdata16[6];
    char stringdata17[6];
    char stringdata18[13];
    char stringdata19[14];
    char stringdata20[12];
    char stringdata21[11];
    char stringdata22[10];
    char stringdata23[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSTaskENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSTaskENDCLASS_t qt_meta_stringdata_CLASSTaskENDCLASS = {
    {
        QT_MOC_LITERAL(0, 4),  // "Task"
        QT_MOC_LITERAL(5, 7),  // "started"
        QT_MOC_LITERAL(13, 0),  // ""
        QT_MOC_LITERAL(14, 8),  // "progress"
        QT_MOC_LITERAL(23, 7),  // "current"
        QT_MOC_LITERAL(31, 5),  // "total"
        QT_MOC_LITERAL(37, 8),  // "finished"
        QT_MOC_LITERAL(46, 9),  // "succeeded"
        QT_MOC_LITERAL(56, 7),  // "aborted"
        QT_MOC_LITERAL(64, 6),  // "failed"
        QT_MOC_LITERAL(71, 6),  // "reason"
        QT_MOC_LITERAL(78, 6),  // "status"
        QT_MOC_LITERAL(85, 10),  // "stepStatus"
        QT_MOC_LITERAL(96, 18),  // "abortStatusChanged"
        QT_MOC_LITERAL(115, 9),  // "can_abort"
        QT_MOC_LITERAL(125, 3),  // "run"
        QT_MOC_LITERAL(129, 5),  // "start"
        QT_MOC_LITERAL(135, 5),  // "abort"
        QT_MOC_LITERAL(141, 12),  // "setAbortable"
        QT_MOC_LITERAL(154, 13),  // "emitSucceeded"
        QT_MOC_LITERAL(168, 11),  // "emitAborted"
        QT_MOC_LITERAL(180, 10),  // "emitFailed"
        QT_MOC_LITERAL(191, 9),  // "setStatus"
        QT_MOC_LITERAL(201, 11)   // "setProgress"
    },
    "Task",
    "started",
    "",
    "progress",
    "current",
    "total",
    "finished",
    "succeeded",
    "aborted",
    "failed",
    "reason",
    "status",
    "stepStatus",
    "abortStatusChanged",
    "can_abort",
    "run",
    "start",
    "abort",
    "setAbortable",
    "emitSucceeded",
    "emitAborted",
    "emitFailed",
    "setStatus",
    "setProgress"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTaskENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  128,    2, 0x06,    1 /* Public */,
       3,    2,  129,    2, 0x06,    2 /* Public */,
       6,    0,  134,    2, 0x06,    5 /* Public */,
       7,    0,  135,    2, 0x06,    6 /* Public */,
       8,    0,  136,    2, 0x06,    7 /* Public */,
       9,    1,  137,    2, 0x06,    8 /* Public */,
      11,    1,  140,    2, 0x06,   10 /* Public */,
      12,    1,  143,    2, 0x06,   12 /* Public */,
      13,    1,  146,    2, 0x06,   14 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      15,    0,  149,    2, 0x0a,   16 /* Public */,
      16,    0,  150,    2, 0x0a,   17 /* Public */,
      17,    0,  151,    2, 0x0a,   18 /* Public */,
      18,    1,  152,    2, 0x0a,   19 /* Public */,
      19,    0,  155,    2, 0x09,   21 /* Protected */,
      20,    0,  156,    2, 0x09,   22 /* Protected */,
      21,    1,  157,    2, 0x09,   23 /* Protected */,
      21,    0,  160,    2, 0x29,   25 /* Protected | MethodCloned */,
      22,    1,  161,    2, 0x0a,   26 /* Public */,
      23,    2,  164,    2, 0x0a,   28 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::Bool,   14,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   10,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    4,    5,

       0        // eod
};

Q_CONSTINIT const QMetaObject Task::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSTaskENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTaskENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTaskENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Task, std::true_type>,
        // method 'started'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'progress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'finished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'succeeded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'aborted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'failed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'status'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'stepStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'abortStatusChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'run'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'start'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'abort'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setAbortable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'emitSucceeded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'emitAborted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'emitFailed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'emitFailed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>
    >,
    nullptr
} };

void Task::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Task *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->started(); break;
        case 1: _t->progress((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        case 2: _t->finished(); break;
        case 3: _t->succeeded(); break;
        case 4: _t->aborted(); break;
        case 5: _t->failed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->status((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->stepStatus((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->abortStatusChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->run(); break;
        case 10: _t->start(); break;
        case 11: { bool _r = _t->abort();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 12: _t->setAbortable((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 13: _t->emitSucceeded(); break;
        case 14: _t->emitAborted(); break;
        case 15: _t->emitFailed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 16: _t->emitFailed(); break;
        case 17: _t->setStatus((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 18: _t->setProgress((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Task::*)();
            if (_t _q_method = &Task::started; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Task::*)(qint64 , qint64 );
            if (_t _q_method = &Task::progress; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Task::*)();
            if (_t _q_method = &Task::finished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Task::*)();
            if (_t _q_method = &Task::succeeded; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Task::*)();
            if (_t _q_method = &Task::aborted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Task::*)(QString );
            if (_t _q_method = &Task::failed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Task::*)(QString );
            if (_t _q_method = &Task::status; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Task::*)(QString );
            if (_t _q_method = &Task::stepStatus; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Task::*)(bool );
            if (_t _q_method = &Task::abortStatusChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
    }
}

const QMetaObject *Task::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Task::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTaskENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QRunnable"))
        return static_cast< QRunnable*>(this);
    return QObject::qt_metacast(_clname);
}

int Task::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 19;
    }
    return _id;
}

// SIGNAL 0
void Task::started()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Task::progress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void Task::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Task::succeeded()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Task::aborted()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Task::failed(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void Task::status(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Task::stepStatus(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void Task::abortStatusChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_WARNING_POP
