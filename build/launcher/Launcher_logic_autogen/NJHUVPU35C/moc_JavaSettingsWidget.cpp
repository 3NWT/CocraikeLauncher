/****************************************************************************
** Meta object code from reading C++ file 'JavaSettingsWidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../launcher/ui/widgets/JavaSettingsWidget.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'JavaSettingsWidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSJavaSettingsWidgetENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSJavaSettingsWidgetENDCLASS = QtMocHelpers::stringData(
    "JavaSettingsWidget",
    "memoryValueChanged",
    "",
    "javaPathEdited",
    "path",
    "javaVersionSelected",
    "BaseVersion::Ptr",
    "version",
    "on_javaBrowseBtn_clicked",
    "on_javaStatusBtn_clicked",
    "checkFinished",
    "JavaCheckResult",
    "result"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSJavaSettingsWidgetENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[19];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[5];
    char stringdata5[20];
    char stringdata6[17];
    char stringdata7[8];
    char stringdata8[25];
    char stringdata9[25];
    char stringdata10[14];
    char stringdata11[16];
    char stringdata12[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSJavaSettingsWidgetENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSJavaSettingsWidgetENDCLASS_t qt_meta_stringdata_CLASSJavaSettingsWidgetENDCLASS = {
    {
        QT_MOC_LITERAL(0, 18),  // "JavaSettingsWidget"
        QT_MOC_LITERAL(19, 18),  // "memoryValueChanged"
        QT_MOC_LITERAL(38, 0),  // ""
        QT_MOC_LITERAL(39, 14),  // "javaPathEdited"
        QT_MOC_LITERAL(54, 4),  // "path"
        QT_MOC_LITERAL(59, 19),  // "javaVersionSelected"
        QT_MOC_LITERAL(79, 16),  // "BaseVersion::Ptr"
        QT_MOC_LITERAL(96, 7),  // "version"
        QT_MOC_LITERAL(104, 24),  // "on_javaBrowseBtn_clicked"
        QT_MOC_LITERAL(129, 24),  // "on_javaStatusBtn_clicked"
        QT_MOC_LITERAL(154, 13),  // "checkFinished"
        QT_MOC_LITERAL(168, 15),  // "JavaCheckResult"
        QT_MOC_LITERAL(184, 6)   // "result"
    },
    "JavaSettingsWidget",
    "memoryValueChanged",
    "",
    "javaPathEdited",
    "path",
    "javaVersionSelected",
    "BaseVersion::Ptr",
    "version",
    "on_javaBrowseBtn_clicked",
    "on_javaStatusBtn_clicked",
    "checkFinished",
    "JavaCheckResult",
    "result"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSJavaSettingsWidgetENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x09,    1 /* Protected */,
       3,    1,   53,    2, 0x09,    3 /* Protected */,
       5,    1,   56,    2, 0x09,    5 /* Protected */,
       8,    0,   59,    2, 0x09,    7 /* Protected */,
       9,    0,   60,    2, 0x09,    8 /* Protected */,
      10,    1,   61,    2, 0x09,    9 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::QString,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,

       0        // eod
};

Q_CONSTINIT const QMetaObject JavaSettingsWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSJavaSettingsWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSJavaSettingsWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSJavaSettingsWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<JavaSettingsWidget, std::true_type>,
        // method 'memoryValueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'javaPathEdited'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'javaVersionSelected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<BaseVersion::Ptr, std::false_type>,
        // method 'on_javaBrowseBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_javaStatusBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'checkFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<JavaCheckResult, std::false_type>
    >,
    nullptr
} };

void JavaSettingsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<JavaSettingsWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->memoryValueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->javaPathEdited((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->javaVersionSelected((*reinterpret_cast< std::add_pointer_t<BaseVersion::Ptr>>(_a[1]))); break;
        case 3: _t->on_javaBrowseBtn_clicked(); break;
        case 4: _t->on_javaStatusBtn_clicked(); break;
        case 5: _t->checkFinished((*reinterpret_cast< std::add_pointer_t<JavaCheckResult>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< BaseVersion::Ptr >(); break;
            }
            break;
        }
    }
}

const QMetaObject *JavaSettingsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *JavaSettingsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSJavaSettingsWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int JavaSettingsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
