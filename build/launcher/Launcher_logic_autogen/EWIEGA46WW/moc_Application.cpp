/****************************************************************************
** Meta object code from reading C++ file 'Application.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../launcher/Application.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Application.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSApplicationENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSApplicationENDCLASS = QtMocHelpers::stringData(
    "Application",
    "updateAllowedChanged",
    "",
    "status",
    "globalSettingsAboutToOpen",
    "globalSettingsClosed",
    "currentCatChanged",
    "index",
    "launch",
    "InstancePtr",
    "instance",
    "online",
    "demo",
    "BaseProfilerFactory*",
    "profiler",
    "MinecraftServerTargetPtr",
    "serverToJoin",
    "MinecraftAccountPtr",
    "accountToUse",
    "kill",
    "closeCurrentWindow",
    "on_windowClose",
    "messageReceived",
    "message",
    "controllerSucceeded",
    "controllerFailed",
    "error",
    "setupWizardFinished"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSApplicationENDCLASS_t {
    uint offsetsAndSizes[56];
    char stringdata0[12];
    char stringdata1[21];
    char stringdata2[1];
    char stringdata3[7];
    char stringdata4[26];
    char stringdata5[21];
    char stringdata6[18];
    char stringdata7[6];
    char stringdata8[7];
    char stringdata9[12];
    char stringdata10[9];
    char stringdata11[7];
    char stringdata12[5];
    char stringdata13[21];
    char stringdata14[9];
    char stringdata15[25];
    char stringdata16[13];
    char stringdata17[20];
    char stringdata18[13];
    char stringdata19[5];
    char stringdata20[19];
    char stringdata21[15];
    char stringdata22[16];
    char stringdata23[8];
    char stringdata24[20];
    char stringdata25[17];
    char stringdata26[6];
    char stringdata27[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSApplicationENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSApplicationENDCLASS_t qt_meta_stringdata_CLASSApplicationENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "Application"
        QT_MOC_LITERAL(12, 20),  // "updateAllowedChanged"
        QT_MOC_LITERAL(33, 0),  // ""
        QT_MOC_LITERAL(34, 6),  // "status"
        QT_MOC_LITERAL(41, 25),  // "globalSettingsAboutToOpen"
        QT_MOC_LITERAL(67, 20),  // "globalSettingsClosed"
        QT_MOC_LITERAL(88, 17),  // "currentCatChanged"
        QT_MOC_LITERAL(106, 5),  // "index"
        QT_MOC_LITERAL(112, 6),  // "launch"
        QT_MOC_LITERAL(119, 11),  // "InstancePtr"
        QT_MOC_LITERAL(131, 8),  // "instance"
        QT_MOC_LITERAL(140, 6),  // "online"
        QT_MOC_LITERAL(147, 4),  // "demo"
        QT_MOC_LITERAL(152, 20),  // "BaseProfilerFactory*"
        QT_MOC_LITERAL(173, 8),  // "profiler"
        QT_MOC_LITERAL(182, 24),  // "MinecraftServerTargetPtr"
        QT_MOC_LITERAL(207, 12),  // "serverToJoin"
        QT_MOC_LITERAL(220, 19),  // "MinecraftAccountPtr"
        QT_MOC_LITERAL(240, 12),  // "accountToUse"
        QT_MOC_LITERAL(253, 4),  // "kill"
        QT_MOC_LITERAL(258, 18),  // "closeCurrentWindow"
        QT_MOC_LITERAL(277, 14),  // "on_windowClose"
        QT_MOC_LITERAL(292, 15),  // "messageReceived"
        QT_MOC_LITERAL(308, 7),  // "message"
        QT_MOC_LITERAL(316, 19),  // "controllerSucceeded"
        QT_MOC_LITERAL(336, 16),  // "controllerFailed"
        QT_MOC_LITERAL(353, 5),  // "error"
        QT_MOC_LITERAL(359, 19)   // "setupWizardFinished"
    },
    "Application",
    "updateAllowedChanged",
    "",
    "status",
    "globalSettingsAboutToOpen",
    "globalSettingsClosed",
    "currentCatChanged",
    "index",
    "launch",
    "InstancePtr",
    "instance",
    "online",
    "demo",
    "BaseProfilerFactory*",
    "profiler",
    "MinecraftServerTargetPtr",
    "serverToJoin",
    "MinecraftAccountPtr",
    "accountToUse",
    "kill",
    "closeCurrentWindow",
    "on_windowClose",
    "messageReceived",
    "message",
    "controllerSucceeded",
    "controllerFailed",
    "error",
    "setupWizardFinished"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSApplicationENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  116,    2, 0x06,    1 /* Public */,
       4,    0,  119,    2, 0x06,    3 /* Public */,
       5,    0,  120,    2, 0x06,    4 /* Public */,
       6,    1,  121,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    6,  124,    2, 0x0a,    7 /* Public */,
       8,    5,  137,    2, 0x2a,   14 /* Public | MethodCloned */,
       8,    4,  148,    2, 0x2a,   20 /* Public | MethodCloned */,
       8,    3,  157,    2, 0x2a,   25 /* Public | MethodCloned */,
       8,    2,  164,    2, 0x2a,   29 /* Public | MethodCloned */,
       8,    1,  169,    2, 0x2a,   32 /* Public | MethodCloned */,
      19,    1,  172,    2, 0x0a,   34 /* Public */,
      20,    0,  175,    2, 0x0a,   36 /* Public */,
      21,    0,  176,    2, 0x08,   37 /* Private */,
      22,    1,  177,    2, 0x08,   38 /* Private */,
      24,    0,  180,    2, 0x08,   40 /* Private */,
      25,    1,  181,    2, 0x08,   41 /* Private */,
      27,    1,  184,    2, 0x08,   43 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Int, QMetaType::Int,    7,

 // slots: parameters
    QMetaType::Bool, 0x80000000 | 9, QMetaType::Bool, QMetaType::Bool, 0x80000000 | 13, 0x80000000 | 15, 0x80000000 | 17,   10,   11,   12,   14,   16,   18,
    QMetaType::Bool, 0x80000000 | 9, QMetaType::Bool, QMetaType::Bool, 0x80000000 | 13, 0x80000000 | 15,   10,   11,   12,   14,   16,
    QMetaType::Bool, 0x80000000 | 9, QMetaType::Bool, QMetaType::Bool, 0x80000000 | 13,   10,   11,   12,   14,
    QMetaType::Bool, 0x80000000 | 9, QMetaType::Bool, QMetaType::Bool,   10,   11,   12,
    QMetaType::Bool, 0x80000000 | 9, QMetaType::Bool,   10,   11,
    QMetaType::Bool, 0x80000000 | 9,   10,
    QMetaType::Bool, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,   23,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   26,
    QMetaType::Void, QMetaType::Int,    3,

       0        // eod
};

Q_CONSTINIT const QMetaObject Application::staticMetaObject = { {
    QMetaObject::SuperData::link<QApplication::staticMetaObject>(),
    qt_meta_stringdata_CLASSApplicationENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSApplicationENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSApplicationENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Application, std::true_type>,
        // method 'updateAllowedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'globalSettingsAboutToOpen'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'globalSettingsClosed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'currentCatChanged'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'launch'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<InstancePtr, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<BaseProfilerFactory *, std::false_type>,
        QtPrivate::TypeAndForceComplete<MinecraftServerTargetPtr, std::false_type>,
        QtPrivate::TypeAndForceComplete<MinecraftAccountPtr, std::false_type>,
        // method 'launch'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<InstancePtr, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<BaseProfilerFactory *, std::false_type>,
        QtPrivate::TypeAndForceComplete<MinecraftServerTargetPtr, std::false_type>,
        // method 'launch'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<InstancePtr, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<BaseProfilerFactory *, std::false_type>,
        // method 'launch'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<InstancePtr, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'launch'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<InstancePtr, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'launch'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<InstancePtr, std::false_type>,
        // method 'kill'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<InstancePtr, std::false_type>,
        // method 'closeCurrentWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_windowClose'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'messageReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        // method 'controllerSucceeded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'controllerFailed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setupWizardFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void Application::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Application *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateAllowedChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->globalSettingsAboutToOpen(); break;
        case 2: _t->globalSettingsClosed(); break;
        case 3: { int _r = _t->currentCatChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->launch((*reinterpret_cast< std::add_pointer_t<InstancePtr>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<BaseProfilerFactory*>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<MinecraftServerTargetPtr>>(_a[5])),(*reinterpret_cast< std::add_pointer_t<MinecraftAccountPtr>>(_a[6])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { bool _r = _t->launch((*reinterpret_cast< std::add_pointer_t<InstancePtr>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<BaseProfilerFactory*>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<MinecraftServerTargetPtr>>(_a[5])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->launch((*reinterpret_cast< std::add_pointer_t<InstancePtr>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<BaseProfilerFactory*>>(_a[4])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->launch((*reinterpret_cast< std::add_pointer_t<InstancePtr>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->launch((*reinterpret_cast< std::add_pointer_t<InstancePtr>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: { bool _r = _t->launch((*reinterpret_cast< std::add_pointer_t<InstancePtr>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->kill((*reinterpret_cast< std::add_pointer_t<InstancePtr>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: _t->closeCurrentWindow(); break;
        case 12: _t->on_windowClose(); break;
        case 13: _t->messageReceived((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 14: _t->controllerSucceeded(); break;
        case 15: _t->controllerFailed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 16: _t->setupWizardFinished((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 5:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< MinecraftAccountPtr >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Application::*)(bool );
            if (_t _q_method = &Application::updateAllowedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Application::*)();
            if (_t _q_method = &Application::globalSettingsAboutToOpen; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Application::*)();
            if (_t _q_method = &Application::globalSettingsClosed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = int (Application::*)(int );
            if (_t _q_method = &Application::currentCatChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *Application::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Application::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSApplicationENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QApplication::qt_metacast(_clname);
}

int Application::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QApplication::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void Application::updateAllowedChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Application::globalSettingsAboutToOpen()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Application::globalSettingsClosed()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
int Application::currentCatChanged(int _t1)
{
    int _t0{};
    void *_a[] = { const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t0))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
    return _t0;
}
QT_WARNING_POP
