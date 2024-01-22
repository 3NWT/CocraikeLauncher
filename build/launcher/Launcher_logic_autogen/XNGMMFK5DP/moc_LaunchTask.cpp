/****************************************************************************
** Meta object code from reading C++ file 'LaunchTask.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../launcher/launch/LaunchTask.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LaunchTask.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSLaunchTaskENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSLaunchTaskENDCLASS = QtMocHelpers::stringData(
    "LaunchTask",
    "readyForLaunch",
    "",
    "requestProgress",
    "Task*",
    "task",
    "requestLogging",
    "onLogLines",
    "lines",
    "MessageLevel::Enum",
    "defaultLevel",
    "onLogLine",
    "line",
    "onReadyForLaunch",
    "onStepFinished",
    "onProgressReportingRequested"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSLaunchTaskENDCLASS_t {
    uint offsetsAndSizes[32];
    char stringdata0[11];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[6];
    char stringdata5[5];
    char stringdata6[15];
    char stringdata7[11];
    char stringdata8[6];
    char stringdata9[19];
    char stringdata10[13];
    char stringdata11[10];
    char stringdata12[5];
    char stringdata13[17];
    char stringdata14[15];
    char stringdata15[29];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSLaunchTaskENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSLaunchTaskENDCLASS_t qt_meta_stringdata_CLASSLaunchTaskENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "LaunchTask"
        QT_MOC_LITERAL(11, 14),  // "readyForLaunch"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 15),  // "requestProgress"
        QT_MOC_LITERAL(43, 5),  // "Task*"
        QT_MOC_LITERAL(49, 4),  // "task"
        QT_MOC_LITERAL(54, 14),  // "requestLogging"
        QT_MOC_LITERAL(69, 10),  // "onLogLines"
        QT_MOC_LITERAL(80, 5),  // "lines"
        QT_MOC_LITERAL(86, 18),  // "MessageLevel::Enum"
        QT_MOC_LITERAL(105, 12),  // "defaultLevel"
        QT_MOC_LITERAL(118, 9),  // "onLogLine"
        QT_MOC_LITERAL(128, 4),  // "line"
        QT_MOC_LITERAL(133, 16),  // "onReadyForLaunch"
        QT_MOC_LITERAL(150, 14),  // "onStepFinished"
        QT_MOC_LITERAL(165, 28)   // "onProgressReportingRequested"
    },
    "LaunchTask",
    "readyForLaunch",
    "",
    "requestProgress",
    "Task*",
    "task",
    "requestLogging",
    "onLogLines",
    "lines",
    "MessageLevel::Enum",
    "defaultLevel",
    "onLogLine",
    "line",
    "onReadyForLaunch",
    "onStepFinished",
    "onProgressReportingRequested"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSLaunchTaskENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x06,    1 /* Public */,
       3,    1,   75,    2, 0x06,    2 /* Public */,
       6,    0,   78,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    2,   79,    2, 0x0a,    5 /* Public */,
       7,    1,   84,    2, 0x2a,    8 /* Public | MethodCloned */,
      11,    2,   87,    2, 0x0a,   10 /* Public */,
      11,    1,   92,    2, 0x2a,   13 /* Public | MethodCloned */,
      13,    0,   95,    2, 0x0a,   15 /* Public */,
      14,    0,   96,    2, 0x0a,   16 /* Public */,
      15,    0,   97,    2, 0x0a,   17 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QStringList, 0x80000000 | 9,    8,   10,
    QMetaType::Void, QMetaType::QStringList,    8,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 9,   12,   10,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject LaunchTask::staticMetaObject = { {
    QMetaObject::SuperData::link<Task::staticMetaObject>(),
    qt_meta_stringdata_CLASSLaunchTaskENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSLaunchTaskENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSLaunchTaskENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LaunchTask, std::true_type>,
        // method 'readyForLaunch'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'requestProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Task *, std::false_type>,
        // method 'requestLogging'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onLogLines'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>,
        QtPrivate::TypeAndForceComplete<MessageLevel::Enum, std::false_type>,
        // method 'onLogLines'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>,
        // method 'onLogLine'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<MessageLevel::Enum, std::false_type>,
        // method 'onLogLine'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'onReadyForLaunch'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onStepFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onProgressReportingRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void LaunchTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LaunchTask *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->readyForLaunch(); break;
        case 1: _t->requestProgress((*reinterpret_cast< std::add_pointer_t<Task*>>(_a[1]))); break;
        case 2: _t->requestLogging(); break;
        case 3: _t->onLogLines((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<MessageLevel::Enum>>(_a[2]))); break;
        case 4: _t->onLogLines((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 5: _t->onLogLine((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<MessageLevel::Enum>>(_a[2]))); break;
        case 6: _t->onLogLine((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->onReadyForLaunch(); break;
        case 8: _t->onStepFinished(); break;
        case 9: _t->onProgressReportingRequested(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Task* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LaunchTask::*)();
            if (_t _q_method = &LaunchTask::readyForLaunch; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LaunchTask::*)(Task * );
            if (_t _q_method = &LaunchTask::requestProgress; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (LaunchTask::*)();
            if (_t _q_method = &LaunchTask::requestLogging; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *LaunchTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LaunchTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSLaunchTaskENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return Task::qt_metacast(_clname);
}

int LaunchTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Task::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void LaunchTask::readyForLaunch()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void LaunchTask::requestProgress(Task * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void LaunchTask::requestLogging()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
