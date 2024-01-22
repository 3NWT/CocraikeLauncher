/****************************************************************************
** Meta object code from reading C++ file 'ModUpdateDialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../launcher/ui/dialogs/ModUpdateDialog.h"
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
#error "The header file 'ModUpdateDialog.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSModUpdateDialogENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSModUpdateDialogENDCLASS = QtMocHelpers::stringData(
    "ModUpdateDialog",
    "onMetadataEnsured",
    "",
    "Mod*",
    "onMetadataFailed",
    "try_others",
    "ModPlatform::ResourceProvider",
    "first_choice"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSModUpdateDialogENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[16];
    char stringdata1[18];
    char stringdata2[1];
    char stringdata3[5];
    char stringdata4[17];
    char stringdata5[11];
    char stringdata6[30];
    char stringdata7[13];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSModUpdateDialogENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSModUpdateDialogENDCLASS_t qt_meta_stringdata_CLASSModUpdateDialogENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15),  // "ModUpdateDialog"
        QT_MOC_LITERAL(16, 17),  // "onMetadataEnsured"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 4),  // "Mod*"
        QT_MOC_LITERAL(40, 16),  // "onMetadataFailed"
        QT_MOC_LITERAL(57, 10),  // "try_others"
        QT_MOC_LITERAL(68, 29),  // "ModPlatform::ResourceProvider"
        QT_MOC_LITERAL(98, 12)   // "first_choice"
    },
    "ModUpdateDialog",
    "onMetadataEnsured",
    "",
    "Mod*",
    "onMetadataFailed",
    "try_others",
    "ModPlatform::ResourceProvider",
    "first_choice"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSModUpdateDialogENDCLASS[] = {

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
       1,    1,   38,    2, 0x08,    1 /* Private */,
       4,    3,   41,    2, 0x08,    3 /* Private */,
       4,    2,   48,    2, 0x28,    7 /* Private | MethodCloned */,
       4,    1,   53,    2, 0x28,   10 /* Private | MethodCloned */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool, 0x80000000 | 6,    2,    5,    7,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    2,    5,
    QMetaType::Void, 0x80000000 | 3,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject ModUpdateDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<ReviewMessageBox::staticMetaObject>(),
    qt_meta_stringdata_CLASSModUpdateDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSModUpdateDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSModUpdateDialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ModUpdateDialog, std::true_type>,
        // method 'onMetadataEnsured'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Mod *, std::false_type>,
        // method 'onMetadataFailed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Mod *, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<ModPlatform::ResourceProvider, std::false_type>,
        // method 'onMetadataFailed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Mod *, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onMetadataFailed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Mod *, std::false_type>
    >,
    nullptr
} };

void ModUpdateDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ModUpdateDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onMetadataEnsured((*reinterpret_cast< std::add_pointer_t<Mod*>>(_a[1]))); break;
        case 1: _t->onMetadataFailed((*reinterpret_cast< std::add_pointer_t<Mod*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<ModPlatform::ResourceProvider>>(_a[3]))); break;
        case 2: _t->onMetadataFailed((*reinterpret_cast< std::add_pointer_t<Mod*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 3: _t->onMetadataFailed((*reinterpret_cast< std::add_pointer_t<Mod*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Mod* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Mod* >(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< ModPlatform::ResourceProvider >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Mod* >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Mod* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *ModUpdateDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ModUpdateDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSModUpdateDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return ReviewMessageBox::qt_metacast(_clname);
}

int ModUpdateDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ReviewMessageBox::qt_metacall(_c, _id, _a);
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
