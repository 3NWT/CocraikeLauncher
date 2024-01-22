/****************************************************************************
** Meta object code from reading C++ file 'JavaChecker.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../launcher/java/JavaChecker.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'JavaChecker.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSJavaCheckerENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSJavaCheckerENDCLASS = QtMocHelpers::stringData(
    "JavaChecker",
    "checkFinished",
    "",
    "JavaCheckResult",
    "result",
    "timeout",
    "finished",
    "exitcode",
    "QProcess::ExitStatus",
    "error",
    "QProcess::ProcessError",
    "stdoutReady",
    "stderrReady"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSJavaCheckerENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[12];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[16];
    char stringdata4[7];
    char stringdata5[8];
    char stringdata6[9];
    char stringdata7[9];
    char stringdata8[21];
    char stringdata9[6];
    char stringdata10[23];
    char stringdata11[12];
    char stringdata12[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSJavaCheckerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSJavaCheckerENDCLASS_t qt_meta_stringdata_CLASSJavaCheckerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "JavaChecker"
        QT_MOC_LITERAL(12, 13),  // "checkFinished"
        QT_MOC_LITERAL(26, 0),  // ""
        QT_MOC_LITERAL(27, 15),  // "JavaCheckResult"
        QT_MOC_LITERAL(43, 6),  // "result"
        QT_MOC_LITERAL(50, 7),  // "timeout"
        QT_MOC_LITERAL(58, 8),  // "finished"
        QT_MOC_LITERAL(67, 8),  // "exitcode"
        QT_MOC_LITERAL(76, 20),  // "QProcess::ExitStatus"
        QT_MOC_LITERAL(97, 5),  // "error"
        QT_MOC_LITERAL(103, 22),  // "QProcess::ProcessError"
        QT_MOC_LITERAL(126, 11),  // "stdoutReady"
        QT_MOC_LITERAL(138, 11)   // "stderrReady"
    },
    "JavaChecker",
    "checkFinished",
    "",
    "JavaCheckResult",
    "result",
    "timeout",
    "finished",
    "exitcode",
    "QProcess::ExitStatus",
    "error",
    "QProcess::ProcessError",
    "stdoutReady",
    "stderrReady"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSJavaCheckerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   53,    2, 0x0a,    3 /* Public */,
       6,    2,   54,    2, 0x0a,    4 /* Public */,
       9,    1,   59,    2, 0x0a,    7 /* Public */,
      11,    0,   62,    2, 0x0a,    9 /* Public */,
      12,    0,   63,    2, 0x0a,   10 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 8,    7,    2,
    QMetaType::Void, 0x80000000 | 10,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject JavaChecker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSJavaCheckerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSJavaCheckerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSJavaCheckerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<JavaChecker, std::true_type>,
        // method 'checkFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<JavaCheckResult, std::false_type>,
        // method 'timeout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'finished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QProcess::ExitStatus, std::false_type>,
        // method 'error'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QProcess::ProcessError, std::false_type>,
        // method 'stdoutReady'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'stderrReady'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void JavaChecker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JavaChecker *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->checkFinished((*reinterpret_cast< std::add_pointer_t<JavaCheckResult>>(_a[1]))); break;
        case 1: _t->timeout(); break;
        case 2: _t->finished((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QProcess::ExitStatus>>(_a[2]))); break;
        case 3: _t->error((*reinterpret_cast< std::add_pointer_t<QProcess::ProcessError>>(_a[1]))); break;
        case 4: _t->stdoutReady(); break;
        case 5: _t->stderrReady(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (JavaChecker::*)(JavaCheckResult );
            if (_t _q_method = &JavaChecker::checkFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *JavaChecker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JavaChecker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSJavaCheckerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int JavaChecker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void JavaChecker::checkFinished(JavaCheckResult _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
