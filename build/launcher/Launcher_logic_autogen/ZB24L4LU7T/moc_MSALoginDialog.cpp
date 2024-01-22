/****************************************************************************
** Meta object code from reading C++ file 'MSALoginDialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../launcher/ui/dialogs/MSALoginDialog.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MSALoginDialog.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSMSALoginDialogENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMSALoginDialogENDCLASS = QtMocHelpers::stringData(
    "MSALoginDialog",
    "onTaskFailed",
    "",
    "reason",
    "onTaskSucceeded",
    "onTaskStatus",
    "status",
    "onTaskProgress",
    "current",
    "total",
    "showVerificationUriAndCode",
    "uri",
    "code",
    "expiresIn",
    "hideVerificationUriAndCode",
    "externalLoginTick"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMSALoginDialogENDCLASS_t {
    uint offsetsAndSizes[32];
    char stringdata0[15];
    char stringdata1[13];
    char stringdata2[1];
    char stringdata3[7];
    char stringdata4[16];
    char stringdata5[13];
    char stringdata6[7];
    char stringdata7[15];
    char stringdata8[8];
    char stringdata9[6];
    char stringdata10[27];
    char stringdata11[4];
    char stringdata12[5];
    char stringdata13[10];
    char stringdata14[27];
    char stringdata15[18];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMSALoginDialogENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMSALoginDialogENDCLASS_t qt_meta_stringdata_CLASSMSALoginDialogENDCLASS = {
    {
        QT_MOC_LITERAL(0, 14),  // "MSALoginDialog"
        QT_MOC_LITERAL(15, 12),  // "onTaskFailed"
        QT_MOC_LITERAL(28, 0),  // ""
        QT_MOC_LITERAL(29, 6),  // "reason"
        QT_MOC_LITERAL(36, 15),  // "onTaskSucceeded"
        QT_MOC_LITERAL(52, 12),  // "onTaskStatus"
        QT_MOC_LITERAL(65, 6),  // "status"
        QT_MOC_LITERAL(72, 14),  // "onTaskProgress"
        QT_MOC_LITERAL(87, 7),  // "current"
        QT_MOC_LITERAL(95, 5),  // "total"
        QT_MOC_LITERAL(101, 26),  // "showVerificationUriAndCode"
        QT_MOC_LITERAL(128, 3),  // "uri"
        QT_MOC_LITERAL(132, 4),  // "code"
        QT_MOC_LITERAL(137, 9),  // "expiresIn"
        QT_MOC_LITERAL(147, 26),  // "hideVerificationUriAndCode"
        QT_MOC_LITERAL(174, 17)   // "externalLoginTick"
    },
    "MSALoginDialog",
    "onTaskFailed",
    "",
    "reason",
    "onTaskSucceeded",
    "onTaskStatus",
    "status",
    "onTaskProgress",
    "current",
    "total",
    "showVerificationUriAndCode",
    "uri",
    "code",
    "expiresIn",
    "hideVerificationUriAndCode",
    "externalLoginTick"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMSALoginDialogENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   56,    2, 0x09,    1 /* Protected */,
       4,    0,   59,    2, 0x09,    3 /* Protected */,
       5,    1,   60,    2, 0x09,    4 /* Protected */,
       7,    2,   63,    2, 0x09,    6 /* Protected */,
      10,    3,   68,    2, 0x09,    9 /* Protected */,
      14,    0,   75,    2, 0x09,   13 /* Protected */,
      15,    0,   76,    2, 0x09,   14 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    8,    9,
    QMetaType::Void, QMetaType::QUrl, QMetaType::QString, QMetaType::Int,   11,   12,   13,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MSALoginDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSMSALoginDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMSALoginDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMSALoginDialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MSALoginDialog, std::true_type>,
        // method 'onTaskFailed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onTaskSucceeded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onTaskStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onTaskProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'showVerificationUriAndCode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'hideVerificationUriAndCode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'externalLoginTick'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MSALoginDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MSALoginDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onTaskFailed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->onTaskSucceeded(); break;
        case 2: _t->onTaskStatus((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->onTaskProgress((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        case 4: _t->showVerificationUriAndCode((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 5: _t->hideVerificationUriAndCode(); break;
        case 6: _t->externalLoginTick(); break;
        default: ;
        }
    }
}

const QMetaObject *MSALoginDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MSALoginDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMSALoginDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int MSALoginDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
