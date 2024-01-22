/****************************************************************************
** Meta object code from reading C++ file 'VersionSelectWidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../launcher/ui/widgets/VersionSelectWidget.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VersionSelectWidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSVersionSelectWidgetENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSVersionSelectWidgetENDCLASS = QtMocHelpers::stringData(
    "VersionSelectWidget",
    "selectedVersionChanged",
    "",
    "BaseVersion::Ptr",
    "version",
    "onTaskSucceeded",
    "onTaskFailed",
    "reason",
    "changeProgress",
    "current",
    "total",
    "currentRowChanged",
    "QModelIndex"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSVersionSelectWidgetENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[20];
    char stringdata1[23];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[8];
    char stringdata5[16];
    char stringdata6[13];
    char stringdata7[7];
    char stringdata8[15];
    char stringdata9[8];
    char stringdata10[6];
    char stringdata11[18];
    char stringdata12[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSVersionSelectWidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSVersionSelectWidgetENDCLASS_t qt_meta_stringdata_CLASSVersionSelectWidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 19),  // "VersionSelectWidget"
        QT_MOC_LITERAL(20, 22),  // "selectedVersionChanged"
        QT_MOC_LITERAL(43, 0),  // ""
        QT_MOC_LITERAL(44, 16),  // "BaseVersion::Ptr"
        QT_MOC_LITERAL(61, 7),  // "version"
        QT_MOC_LITERAL(69, 15),  // "onTaskSucceeded"
        QT_MOC_LITERAL(85, 12),  // "onTaskFailed"
        QT_MOC_LITERAL(98, 6),  // "reason"
        QT_MOC_LITERAL(105, 14),  // "changeProgress"
        QT_MOC_LITERAL(120, 7),  // "current"
        QT_MOC_LITERAL(128, 5),  // "total"
        QT_MOC_LITERAL(134, 17),  // "currentRowChanged"
        QT_MOC_LITERAL(152, 11)   // "QModelIndex"
    },
    "VersionSelectWidget",
    "selectedVersionChanged",
    "",
    "BaseVersion::Ptr",
    "version",
    "onTaskSucceeded",
    "onTaskFailed",
    "reason",
    "changeProgress",
    "current",
    "total",
    "currentRowChanged",
    "QModelIndex"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSVersionSelectWidgetENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   47,    2, 0x08,    3 /* Private */,
       6,    1,   48,    2, 0x08,    4 /* Private */,
       8,    2,   51,    2, 0x08,    6 /* Private */,
      11,    2,   56,    2, 0x08,    9 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    9,   10,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 12,    9,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject VersionSelectWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSVersionSelectWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSVersionSelectWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSVersionSelectWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<VersionSelectWidget, std::true_type>,
        // method 'selectedVersionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<BaseVersion::Ptr, std::false_type>,
        // method 'onTaskSucceeded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onTaskFailed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'changeProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'currentRowChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>
    >,
    nullptr
} };

void VersionSelectWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VersionSelectWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->selectedVersionChanged((*reinterpret_cast< std::add_pointer_t<BaseVersion::Ptr>>(_a[1]))); break;
        case 1: _t->onTaskSucceeded(); break;
        case 2: _t->onTaskFailed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->changeProgress((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        case 4: _t->currentRowChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< BaseVersion::Ptr >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (VersionSelectWidget::*)(BaseVersion::Ptr );
            if (_t _q_method = &VersionSelectWidget::selectedVersionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *VersionSelectWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VersionSelectWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSVersionSelectWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int VersionSelectWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void VersionSelectWidget::selectedVersionChanged(BaseVersion::Ptr _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
