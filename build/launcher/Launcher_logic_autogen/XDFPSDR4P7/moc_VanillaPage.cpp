/****************************************************************************
** Meta object code from reading C++ file 'VanillaPage.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../launcher/ui/pages/modplatform/VanillaPage.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VanillaPage.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSVanillaPageENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSVanillaPageENDCLASS = QtMocHelpers::stringData(
    "VanillaPage",
    "setSelectedVersion",
    "",
    "BaseVersion::Ptr",
    "version",
    "setSelectedLoaderVersion",
    "filterChanged",
    "loaderFilterChanged"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSVanillaPageENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[12];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[8];
    char stringdata5[25];
    char stringdata6[14];
    char stringdata7[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSVanillaPageENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSVanillaPageENDCLASS_t qt_meta_stringdata_CLASSVanillaPageENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "VanillaPage"
        QT_MOC_LITERAL(12, 18),  // "setSelectedVersion"
        QT_MOC_LITERAL(31, 0),  // ""
        QT_MOC_LITERAL(32, 16),  // "BaseVersion::Ptr"
        QT_MOC_LITERAL(49, 7),  // "version"
        QT_MOC_LITERAL(57, 24),  // "setSelectedLoaderVersion"
        QT_MOC_LITERAL(82, 13),  // "filterChanged"
        QT_MOC_LITERAL(96, 19)   // "loaderFilterChanged"
    },
    "VanillaPage",
    "setSelectedVersion",
    "",
    "BaseVersion::Ptr",
    "version",
    "setSelectedLoaderVersion",
    "filterChanged",
    "loaderFilterChanged"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSVanillaPageENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   38,    2, 0x0a,    1 /* Public */,
       5,    1,   41,    2, 0x0a,    3 /* Public */,
       6,    0,   44,    2, 0x08,    5 /* Private */,
       7,    0,   45,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject VanillaPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSVanillaPageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSVanillaPageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSVanillaPageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<VanillaPage, std::true_type>,
        // method 'setSelectedVersion'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<BaseVersion::Ptr, std::false_type>,
        // method 'setSelectedLoaderVersion'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<BaseVersion::Ptr, std::false_type>,
        // method 'filterChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'loaderFilterChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void VanillaPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VanillaPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setSelectedVersion((*reinterpret_cast< std::add_pointer_t<BaseVersion::Ptr>>(_a[1]))); break;
        case 1: _t->setSelectedLoaderVersion((*reinterpret_cast< std::add_pointer_t<BaseVersion::Ptr>>(_a[1]))); break;
        case 2: _t->filterChanged(); break;
        case 3: _t->loaderFilterChanged(); break;
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
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< BaseVersion::Ptr >(); break;
            }
            break;
        }
    }
}

const QMetaObject *VanillaPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VanillaPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSVanillaPageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "BasePage"))
        return static_cast< BasePage*>(this);
    return QWidget::qt_metacast(_clname);
}

int VanillaPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
