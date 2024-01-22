/****************************************************************************
** Meta object code from reading C++ file 'ProgressWidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../launcher/ui/widgets/ProgressWidget.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ProgressWidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSProgressWidgetENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSProgressWidgetENDCLASS = QtMocHelpers::stringData(
    "ProgressWidget",
    "watch",
    "",
    "const Task*",
    "task",
    "start",
    "exec",
    "std::shared_ptr<Task>",
    "show",
    "hide",
    "handleTaskFinish",
    "handleTaskStatus",
    "status",
    "handleTaskProgress",
    "current",
    "total",
    "taskDestroyed"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSProgressWidgetENDCLASS_t {
    uint offsetsAndSizes[34];
    char stringdata0[15];
    char stringdata1[6];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[5];
    char stringdata5[6];
    char stringdata6[5];
    char stringdata7[22];
    char stringdata8[5];
    char stringdata9[5];
    char stringdata10[17];
    char stringdata11[17];
    char stringdata12[7];
    char stringdata13[19];
    char stringdata14[8];
    char stringdata15[6];
    char stringdata16[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSProgressWidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSProgressWidgetENDCLASS_t qt_meta_stringdata_CLASSProgressWidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 14),  // "ProgressWidget"
        QT_MOC_LITERAL(15, 5),  // "watch"
        QT_MOC_LITERAL(21, 0),  // ""
        QT_MOC_LITERAL(22, 11),  // "const Task*"
        QT_MOC_LITERAL(34, 4),  // "task"
        QT_MOC_LITERAL(39, 5),  // "start"
        QT_MOC_LITERAL(45, 4),  // "exec"
        QT_MOC_LITERAL(50, 21),  // "std::shared_ptr<Task>"
        QT_MOC_LITERAL(72, 4),  // "show"
        QT_MOC_LITERAL(77, 4),  // "hide"
        QT_MOC_LITERAL(82, 16),  // "handleTaskFinish"
        QT_MOC_LITERAL(99, 16),  // "handleTaskStatus"
        QT_MOC_LITERAL(116, 6),  // "status"
        QT_MOC_LITERAL(123, 18),  // "handleTaskProgress"
        QT_MOC_LITERAL(142, 7),  // "current"
        QT_MOC_LITERAL(150, 5),  // "total"
        QT_MOC_LITERAL(156, 13)   // "taskDestroyed"
    },
    "ProgressWidget",
    "watch",
    "",
    "const Task*",
    "task",
    "start",
    "exec",
    "std::shared_ptr<Task>",
    "show",
    "hide",
    "handleTaskFinish",
    "handleTaskStatus",
    "status",
    "handleTaskProgress",
    "current",
    "total",
    "taskDestroyed"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSProgressWidgetENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   68,    2, 0x0a,    1 /* Public */,
       5,    1,   71,    2, 0x0a,    3 /* Public */,
       6,    1,   74,    2, 0x0a,    5 /* Public */,
       8,    0,   77,    2, 0x0a,    7 /* Public */,
       9,    0,   78,    2, 0x0a,    8 /* Public */,
      10,    0,   79,    2, 0x08,    9 /* Private */,
      11,    1,   80,    2, 0x08,   10 /* Private */,
      13,    2,   83,    2, 0x08,   12 /* Private */,
      16,    0,   88,    2, 0x08,   15 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Bool, 0x80000000 | 7,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   12,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   14,   15,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject ProgressWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSProgressWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSProgressWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSProgressWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ProgressWidget, std::true_type>,
        // method 'watch'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Task *, std::false_type>,
        // method 'start'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Task *, std::false_type>,
        // method 'exec'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::shared_ptr<Task>, std::false_type>,
        // method 'show'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'hide'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleTaskFinish'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleTaskStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'handleTaskProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'taskDestroyed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ProgressWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ProgressWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->watch((*reinterpret_cast< std::add_pointer_t<const Task*>>(_a[1]))); break;
        case 1: _t->start((*reinterpret_cast< std::add_pointer_t<const Task*>>(_a[1]))); break;
        case 2: { bool _r = _t->exec((*reinterpret_cast< std::add_pointer_t<std::shared_ptr<Task>>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->show(); break;
        case 4: _t->hide(); break;
        case 5: _t->handleTaskFinish(); break;
        case 6: _t->handleTaskStatus((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->handleTaskProgress((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        case 8: _t->taskDestroyed(); break;
        default: ;
        }
    }
}

const QMetaObject *ProgressWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProgressWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSProgressWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ProgressWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
