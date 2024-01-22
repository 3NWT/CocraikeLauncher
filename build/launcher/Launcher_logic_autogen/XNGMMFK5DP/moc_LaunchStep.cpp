/****************************************************************************
** Meta object code from reading C++ file 'LaunchStep.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../launcher/launch/LaunchStep.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LaunchStep.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSLaunchStepENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSLaunchStepENDCLASS = QtMocHelpers::stringData(
    "LaunchStep",
    "logLines",
    "",
    "lines",
    "MessageLevel::Enum",
    "level",
    "logLine",
    "line",
    "readyForLaunch",
    "progressReportingRequest",
    "proceed",
    "finalize"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSLaunchStepENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[11];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[19];
    char stringdata5[6];
    char stringdata6[8];
    char stringdata7[5];
    char stringdata8[15];
    char stringdata9[25];
    char stringdata10[8];
    char stringdata11[9];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSLaunchStepENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSLaunchStepENDCLASS_t qt_meta_stringdata_CLASSLaunchStepENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "LaunchStep"
        QT_MOC_LITERAL(11, 8),  // "logLines"
        QT_MOC_LITERAL(20, 0),  // ""
        QT_MOC_LITERAL(21, 5),  // "lines"
        QT_MOC_LITERAL(27, 18),  // "MessageLevel::Enum"
        QT_MOC_LITERAL(46, 5),  // "level"
        QT_MOC_LITERAL(52, 7),  // "logLine"
        QT_MOC_LITERAL(60, 4),  // "line"
        QT_MOC_LITERAL(65, 14),  // "readyForLaunch"
        QT_MOC_LITERAL(80, 24),  // "progressReportingRequest"
        QT_MOC_LITERAL(105, 7),  // "proceed"
        QT_MOC_LITERAL(113, 8)   // "finalize"
    },
    "LaunchStep",
    "logLines",
    "",
    "lines",
    "MessageLevel::Enum",
    "level",
    "logLine",
    "line",
    "readyForLaunch",
    "progressReportingRequest",
    "proceed",
    "finalize"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSLaunchStepENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   50,    2, 0x06,    1 /* Public */,
       6,    2,   55,    2, 0x06,    4 /* Public */,
       8,    0,   60,    2, 0x06,    7 /* Public */,
       9,    0,   61,    2, 0x06,    8 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    0,   62,    2, 0x0a,    9 /* Public */,
      11,    0,   63,    2, 0x0a,   10 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QStringList, 0x80000000 | 4,    3,    5,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    7,    5,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject LaunchStep::staticMetaObject = { {
    QMetaObject::SuperData::link<Task::staticMetaObject>(),
    qt_meta_stringdata_CLASSLaunchStepENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSLaunchStepENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSLaunchStepENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LaunchStep, std::true_type>,
        // method 'logLines'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QStringList, std::false_type>,
        QtPrivate::TypeAndForceComplete<MessageLevel::Enum, std::false_type>,
        // method 'logLine'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<MessageLevel::Enum, std::false_type>,
        // method 'readyForLaunch'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'progressReportingRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'proceed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'finalize'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void LaunchStep::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LaunchStep *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->logLines((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<MessageLevel::Enum>>(_a[2]))); break;
        case 1: _t->logLine((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<MessageLevel::Enum>>(_a[2]))); break;
        case 2: _t->readyForLaunch(); break;
        case 3: _t->progressReportingRequest(); break;
        case 4: _t->proceed(); break;
        case 5: _t->finalize(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LaunchStep::*)(QStringList , MessageLevel::Enum );
            if (_t _q_method = &LaunchStep::logLines; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LaunchStep::*)(QString , MessageLevel::Enum );
            if (_t _q_method = &LaunchStep::logLine; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (LaunchStep::*)();
            if (_t _q_method = &LaunchStep::readyForLaunch; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (LaunchStep::*)();
            if (_t _q_method = &LaunchStep::progressReportingRequest; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *LaunchStep::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LaunchStep::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSLaunchStepENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return Task::qt_metacast(_clname);
}

int LaunchStep::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Task::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void LaunchStep::logLines(QStringList _t1, MessageLevel::Enum _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LaunchStep::logLine(QString _t1, MessageLevel::Enum _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void LaunchStep::readyForLaunch()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void LaunchStep::progressReportingRequest()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
