/****************************************************************************
** Meta object code from reading C++ file 'LoggedProcess.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../launcher/LoggedProcess.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LoggedProcess.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSLoggedProcessENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSLoggedProcessENDCLASS = QtMocHelpers::stringData(
    "LoggedProcess",
    "log",
    "",
    "lines",
    "MessageLevel::Enum",
    "level",
    "stateChanged",
    "LoggedProcess::State",
    "state",
    "kill",
    "on_stdErr",
    "on_stdOut",
    "on_exit",
    "exit_code",
    "QProcess::ExitStatus",
    "status",
    "on_error",
    "QProcess::ProcessError",
    "error",
    "on_stateChange",
    "QProcess::ProcessState"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSLoggedProcessENDCLASS_t {
    uint offsetsAndSizes[42];
    char stringdata0[14];
    char stringdata1[4];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[19];
    char stringdata5[6];
    char stringdata6[13];
    char stringdata7[21];
    char stringdata8[6];
    char stringdata9[5];
    char stringdata10[10];
    char stringdata11[10];
    char stringdata12[8];
    char stringdata13[10];
    char stringdata14[21];
    char stringdata15[7];
    char stringdata16[9];
    char stringdata17[23];
    char stringdata18[6];
    char stringdata19[15];
    char stringdata20[23];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSLoggedProcessENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSLoggedProcessENDCLASS_t qt_meta_stringdata_CLASSLoggedProcessENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "LoggedProcess"
        QT_MOC_LITERAL(14, 3),  // "log"
        QT_MOC_LITERAL(18, 0),  // ""
        QT_MOC_LITERAL(19, 5),  // "lines"
        QT_MOC_LITERAL(25, 18),  // "MessageLevel::Enum"
        QT_MOC_LITERAL(44, 5),  // "level"
        QT_MOC_LITERAL(50, 12),  // "stateChanged"
        QT_MOC_LITERAL(63, 20),  // "LoggedProcess::State"
        QT_MOC_LITERAL(84, 5),  // "state"
        QT_MOC_LITERAL(90, 4),  // "kill"
        QT_MOC_LITERAL(95, 9),  // "on_stdErr"
        QT_MOC_LITERAL(105, 9),  // "on_stdOut"
        QT_MOC_LITERAL(115, 7),  // "on_exit"
        QT_MOC_LITERAL(123, 9),  // "exit_code"
        QT_MOC_LITERAL(133, 20),  // "QProcess::ExitStatus"
        QT_MOC_LITERAL(154, 6),  // "status"
        QT_MOC_LITERAL(161, 8),  // "on_error"
        QT_MOC_LITERAL(170, 22),  // "QProcess::ProcessError"
        QT_MOC_LITERAL(193, 5),  // "error"
        QT_MOC_LITERAL(199, 14),  // "on_stateChange"
        QT_MOC_LITERAL(214, 22)   // "QProcess::ProcessState"
    },
    "LoggedProcess",
    "log",
    "",
    "lines",
    "MessageLevel::Enum",
    "level",
    "stateChanged",
    "LoggedProcess::State",
    "state",
    "kill",
    "on_stdErr",
    "on_stdOut",
    "on_exit",
    "exit_code",
    "QProcess::ExitStatus",
    "status",
    "on_error",
    "QProcess::ProcessError",
    "error",
    "on_stateChange",
    "QProcess::ProcessState"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSLoggedProcessENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   62,    2, 0x06,    1 /* Public */,
       6,    1,   67,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    0,   70,    2, 0x0a,    6 /* Public */,
      10,    0,   71,    2, 0x08,    7 /* Private */,
      11,    0,   72,    2, 0x08,    8 /* Private */,
      12,    2,   73,    2, 0x08,    9 /* Private */,
      16,    1,   78,    2, 0x08,   12 /* Private */,
      19,    1,   81,    2, 0x08,   14 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList, 0x80000000 | 4,    3,    5,
    QMetaType::Void, 0x80000000 | 7,    8,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 14,   13,   15,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 20,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject LoggedProcess::staticMetaObject = { {
    QMetaObject::SuperData::link<QProcess::staticMetaObject>(),
    qt_meta_stringdata_CLASSLoggedProcessENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSLoggedProcessENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSLoggedProcessENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LoggedProcess, std::true_type>,
        // method 'log'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QStringList, std::false_type>,
        QtPrivate::TypeAndForceComplete<MessageLevel::Enum, std::false_type>,
        // method 'stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<LoggedProcess::State, std::false_type>,
        // method 'kill'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_stdErr'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_stdOut'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_exit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QProcess::ExitStatus, std::false_type>,
        // method 'on_error'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QProcess::ProcessError, std::false_type>,
        // method 'on_stateChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QProcess::ProcessState, std::false_type>
    >,
    nullptr
} };

void LoggedProcess::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LoggedProcess *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->log((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<MessageLevel::Enum>>(_a[2]))); break;
        case 1: _t->stateChanged((*reinterpret_cast< std::add_pointer_t<LoggedProcess::State>>(_a[1]))); break;
        case 2: _t->kill(); break;
        case 3: _t->on_stdErr(); break;
        case 4: _t->on_stdOut(); break;
        case 5: _t->on_exit((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QProcess::ExitStatus>>(_a[2]))); break;
        case 6: _t->on_error((*reinterpret_cast< std::add_pointer_t<QProcess::ProcessError>>(_a[1]))); break;
        case 7: _t->on_stateChange((*reinterpret_cast< std::add_pointer_t<QProcess::ProcessState>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LoggedProcess::*)(QStringList , MessageLevel::Enum );
            if (_t _q_method = &LoggedProcess::log; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LoggedProcess::*)(LoggedProcess::State );
            if (_t _q_method = &LoggedProcess::stateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *LoggedProcess::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LoggedProcess::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSLoggedProcessENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QProcess::qt_metacast(_clname);
}

int LoggedProcess::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QProcess::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void LoggedProcess::log(QStringList _t1, MessageLevel::Enum _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LoggedProcess::stateChanged(LoggedProcess::State _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
