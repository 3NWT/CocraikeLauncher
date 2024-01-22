/****************************************************************************
** Meta object code from reading C++ file 'ManagedPackPage.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../launcher/ui/pages/instance/ManagedPackPage.h"
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ManagedPackPage.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSManagedPackPageENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSManagedPackPageENDCLASS = QtMocHelpers::stringData(
    "ManagedPackPage",
    "suggestVersion",
    "",
    "update",
    "setFailState"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSManagedPackPageENDCLASS_t {
    uint offsetsAndSizes[10];
    char stringdata0[16];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[7];
    char stringdata4[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSManagedPackPageENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSManagedPackPageENDCLASS_t qt_meta_stringdata_CLASSManagedPackPageENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15),  // "ManagedPackPage"
        QT_MOC_LITERAL(16, 14),  // "suggestVersion"
        QT_MOC_LITERAL(31, 0),  // ""
        QT_MOC_LITERAL(32, 6),  // "update"
        QT_MOC_LITERAL(39, 12)   // "setFailState"
    },
    "ManagedPackPage",
    "suggestVersion",
    "",
    "update",
    "setFailState"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSManagedPackPageENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x0a,    1 /* Public */,
       3,    0,   33,    2, 0x0a,    2 /* Public */,
       4,    0,   34,    2, 0x09,    3 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject ManagedPackPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSManagedPackPageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSManagedPackPageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSManagedPackPageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ManagedPackPage, std::true_type>,
        // method 'suggestVersion'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'update'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setFailState'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ManagedPackPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ManagedPackPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->suggestVersion(); break;
        case 1: _t->update(); break;
        case 2: _t->setFailState(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *ManagedPackPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ManagedPackPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSManagedPackPageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "BasePage"))
        return static_cast< BasePage*>(this);
    return QWidget::qt_metacast(_clname);
}

int ManagedPackPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSGenericManagedPackPageENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSGenericManagedPackPageENDCLASS = QtMocHelpers::stringData(
    "GenericManagedPackPage"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSGenericManagedPackPageENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSGenericManagedPackPageENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSGenericManagedPackPageENDCLASS_t qt_meta_stringdata_CLASSGenericManagedPackPageENDCLASS = {
    {
        QT_MOC_LITERAL(0, 22)   // "GenericManagedPackPage"
    },
    "GenericManagedPackPage"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSGenericManagedPackPageENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject GenericManagedPackPage::staticMetaObject = { {
    QMetaObject::SuperData::link<ManagedPackPage::staticMetaObject>(),
    qt_meta_stringdata_CLASSGenericManagedPackPageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSGenericManagedPackPageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSGenericManagedPackPageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GenericManagedPackPage, std::true_type>
    >,
    nullptr
} };

void GenericManagedPackPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *GenericManagedPackPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *GenericManagedPackPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSGenericManagedPackPageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return ManagedPackPage::qt_metacast(_clname);
}

int GenericManagedPackPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ManagedPackPage::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSModrinthManagedPackPageENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSModrinthManagedPackPageENDCLASS = QtMocHelpers::stringData(
    "ModrinthManagedPackPage",
    "suggestVersion",
    "",
    "update"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSModrinthManagedPackPageENDCLASS_t {
    uint offsetsAndSizes[8];
    char stringdata0[24];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSModrinthManagedPackPageENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSModrinthManagedPackPageENDCLASS_t qt_meta_stringdata_CLASSModrinthManagedPackPageENDCLASS = {
    {
        QT_MOC_LITERAL(0, 23),  // "ModrinthManagedPackPage"
        QT_MOC_LITERAL(24, 14),  // "suggestVersion"
        QT_MOC_LITERAL(39, 0),  // ""
        QT_MOC_LITERAL(40, 6)   // "update"
    },
    "ModrinthManagedPackPage",
    "suggestVersion",
    "",
    "update"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSModrinthManagedPackPageENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x0a,    1 /* Public */,
       3,    0,   27,    2, 0x0a,    2 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject ModrinthManagedPackPage::staticMetaObject = { {
    QMetaObject::SuperData::link<ManagedPackPage::staticMetaObject>(),
    qt_meta_stringdata_CLASSModrinthManagedPackPageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSModrinthManagedPackPageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSModrinthManagedPackPageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ModrinthManagedPackPage, std::true_type>,
        // method 'suggestVersion'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'update'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ModrinthManagedPackPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ModrinthManagedPackPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->suggestVersion(); break;
        case 1: _t->update(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *ModrinthManagedPackPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModrinthManagedPackPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSModrinthManagedPackPageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return ManagedPackPage::qt_metacast(_clname);
}

int ModrinthManagedPackPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ManagedPackPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSFlameManagedPackPageENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSFlameManagedPackPageENDCLASS = QtMocHelpers::stringData(
    "FlameManagedPackPage",
    "suggestVersion",
    "",
    "update"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSFlameManagedPackPageENDCLASS_t {
    uint offsetsAndSizes[8];
    char stringdata0[21];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[7];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSFlameManagedPackPageENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSFlameManagedPackPageENDCLASS_t qt_meta_stringdata_CLASSFlameManagedPackPageENDCLASS = {
    {
        QT_MOC_LITERAL(0, 20),  // "FlameManagedPackPage"
        QT_MOC_LITERAL(21, 14),  // "suggestVersion"
        QT_MOC_LITERAL(36, 0),  // ""
        QT_MOC_LITERAL(37, 6)   // "update"
    },
    "FlameManagedPackPage",
    "suggestVersion",
    "",
    "update"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSFlameManagedPackPageENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x0a,    1 /* Public */,
       3,    0,   27,    2, 0x0a,    2 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject FlameManagedPackPage::staticMetaObject = { {
    QMetaObject::SuperData::link<ManagedPackPage::staticMetaObject>(),
    qt_meta_stringdata_CLASSFlameManagedPackPageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSFlameManagedPackPageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSFlameManagedPackPageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FlameManagedPackPage, std::true_type>,
        // method 'suggestVersion'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'update'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void FlameManagedPackPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FlameManagedPackPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->suggestVersion(); break;
        case 1: _t->update(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *FlameManagedPackPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FlameManagedPackPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSFlameManagedPackPageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return ManagedPackPage::qt_metacast(_clname);
}

int FlameManagedPackPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ManagedPackPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
