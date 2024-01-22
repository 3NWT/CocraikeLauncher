/****************************************************************************
** Meta object code from reading C++ file 'InstanceWindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../launcher/ui/InstanceWindow.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'InstanceWindow.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSInstanceWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSInstanceWindowENDCLASS = QtMocHelpers::stringData(
    "InstanceWindow",
    "isClosing",
    "",
    "on_closeButton_clicked",
    "on_btnKillMinecraft_clicked",
    "on_btnLaunchMinecraftOffline_clicked",
    "on_btnLaunchMinecraftDemo_clicked",
    "instanceLaunchTaskChanged",
    "shared_qobject_ptr<LaunchTask>",
    "proc",
    "runningStateChanged",
    "running",
    "on_instanceStatusChanged",
    "BaseInstance::Status",
    "newStatus"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSInstanceWindowENDCLASS_t {
    uint offsetsAndSizes[30];
    char stringdata0[15];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[23];
    char stringdata4[28];
    char stringdata5[37];
    char stringdata6[34];
    char stringdata7[26];
    char stringdata8[31];
    char stringdata9[5];
    char stringdata10[20];
    char stringdata11[8];
    char stringdata12[25];
    char stringdata13[21];
    char stringdata14[10];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSInstanceWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSInstanceWindowENDCLASS_t qt_meta_stringdata_CLASSInstanceWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 14),  // "InstanceWindow"
        QT_MOC_LITERAL(15, 9),  // "isClosing"
        QT_MOC_LITERAL(25, 0),  // ""
        QT_MOC_LITERAL(26, 22),  // "on_closeButton_clicked"
        QT_MOC_LITERAL(49, 27),  // "on_btnKillMinecraft_clicked"
        QT_MOC_LITERAL(77, 36),  // "on_btnLaunchMinecraftOffline_..."
        QT_MOC_LITERAL(114, 33),  // "on_btnLaunchMinecraftDemo_cli..."
        QT_MOC_LITERAL(148, 25),  // "instanceLaunchTaskChanged"
        QT_MOC_LITERAL(174, 30),  // "shared_qobject_ptr<LaunchTask>"
        QT_MOC_LITERAL(205, 4),  // "proc"
        QT_MOC_LITERAL(210, 19),  // "runningStateChanged"
        QT_MOC_LITERAL(230, 7),  // "running"
        QT_MOC_LITERAL(238, 24),  // "on_instanceStatusChanged"
        QT_MOC_LITERAL(263, 20),  // "BaseInstance::Status"
        QT_MOC_LITERAL(284, 9)   // "newStatus"
    },
    "InstanceWindow",
    "isClosing",
    "",
    "on_closeButton_clicked",
    "on_btnKillMinecraft_clicked",
    "on_btnLaunchMinecraftOffline_clicked",
    "on_btnLaunchMinecraftDemo_clicked",
    "instanceLaunchTaskChanged",
    "shared_qobject_ptr<LaunchTask>",
    "proc",
    "runningStateChanged",
    "running",
    "on_instanceStatusChanged",
    "BaseInstance::Status",
    "newStatus"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSInstanceWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    0,   63,    2, 0x08,    2 /* Private */,
       4,    0,   64,    2, 0x08,    3 /* Private */,
       5,    0,   65,    2, 0x08,    4 /* Private */,
       6,    0,   66,    2, 0x08,    5 /* Private */,
       7,    1,   67,    2, 0x08,    6 /* Private */,
      10,    1,   70,    2, 0x08,    8 /* Private */,
      12,    2,   73,    2, 0x08,   10 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, 0x80000000 | 13, 0x80000000 | 13,    2,   14,

       0        // eod
};

Q_CONSTINIT const QMetaObject InstanceWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSInstanceWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSInstanceWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSInstanceWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<InstanceWindow, std::true_type>,
        // method 'isClosing'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_closeButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnKillMinecraft_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnLaunchMinecraftOffline_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_btnLaunchMinecraftDemo_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'instanceLaunchTaskChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<shared_qobject_ptr<LaunchTask>, std::false_type>,
        // method 'runningStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'on_instanceStatusChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<BaseInstance::Status, std::false_type>,
        QtPrivate::TypeAndForceComplete<BaseInstance::Status, std::false_type>
    >,
    nullptr
} };

void InstanceWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InstanceWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->isClosing(); break;
        case 1: _t->on_closeButton_clicked(); break;
        case 2: _t->on_btnKillMinecraft_clicked(); break;
        case 3: _t->on_btnLaunchMinecraftOffline_clicked(); break;
        case 4: _t->on_btnLaunchMinecraftDemo_clicked(); break;
        case 5: _t->instanceLaunchTaskChanged((*reinterpret_cast< std::add_pointer_t<shared_qobject_ptr<LaunchTask>>>(_a[1]))); break;
        case 6: _t->runningStateChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->on_instanceStatusChanged((*reinterpret_cast< std::add_pointer_t<BaseInstance::Status>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<BaseInstance::Status>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (InstanceWindow::*)();
            if (_t _q_method = &InstanceWindow::isClosing; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *InstanceWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InstanceWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSInstanceWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "BasePageContainer"))
        return static_cast< BasePageContainer*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int InstanceWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
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
void InstanceWindow::isClosing()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
