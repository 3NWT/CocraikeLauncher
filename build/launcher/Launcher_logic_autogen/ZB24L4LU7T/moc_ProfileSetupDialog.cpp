/****************************************************************************
** Meta object code from reading C++ file 'ProfileSetupDialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../launcher/ui/dialogs/ProfileSetupDialog.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ProfileSetupDialog.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSProfileSetupDialogENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSProfileSetupDialogENDCLASS = QtMocHelpers::stringData(
    "ProfileSetupDialog",
    "on_buttonBox_accepted",
    "",
    "on_buttonBox_rejected",
    "nameEdited",
    "name",
    "checkFinished",
    "QNetworkReply::NetworkError",
    "error",
    "data",
    "QList<QNetworkReply::RawHeaderPair>",
    "headers",
    "startCheck",
    "setupProfileFinished"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSProfileSetupDialogENDCLASS_t {
    uint offsetsAndSizes[28];
    char stringdata0[19];
    char stringdata1[22];
    char stringdata2[1];
    char stringdata3[22];
    char stringdata4[11];
    char stringdata5[5];
    char stringdata6[14];
    char stringdata7[28];
    char stringdata8[6];
    char stringdata9[5];
    char stringdata10[36];
    char stringdata11[8];
    char stringdata12[11];
    char stringdata13[21];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSProfileSetupDialogENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSProfileSetupDialogENDCLASS_t qt_meta_stringdata_CLASSProfileSetupDialogENDCLASS = {
    {
        QT_MOC_LITERAL(0, 18),  // "ProfileSetupDialog"
        QT_MOC_LITERAL(19, 21),  // "on_buttonBox_accepted"
        QT_MOC_LITERAL(41, 0),  // ""
        QT_MOC_LITERAL(42, 21),  // "on_buttonBox_rejected"
        QT_MOC_LITERAL(64, 10),  // "nameEdited"
        QT_MOC_LITERAL(75, 4),  // "name"
        QT_MOC_LITERAL(80, 13),  // "checkFinished"
        QT_MOC_LITERAL(94, 27),  // "QNetworkReply::NetworkError"
        QT_MOC_LITERAL(122, 5),  // "error"
        QT_MOC_LITERAL(128, 4),  // "data"
        QT_MOC_LITERAL(133, 35),  // "QList<QNetworkReply::RawHeade..."
        QT_MOC_LITERAL(169, 7),  // "headers"
        QT_MOC_LITERAL(177, 10),  // "startCheck"
        QT_MOC_LITERAL(188, 20)   // "setupProfileFinished"
    },
    "ProfileSetupDialog",
    "on_buttonBox_accepted",
    "",
    "on_buttonBox_rejected",
    "nameEdited",
    "name",
    "checkFinished",
    "QNetworkReply::NetworkError",
    "error",
    "data",
    "QList<QNetworkReply::RawHeaderPair>",
    "headers",
    "startCheck",
    "setupProfileFinished"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSProfileSetupDialogENDCLASS[] = {

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
       1,    0,   50,    2, 0x08,    1 /* Private */,
       3,    0,   51,    2, 0x08,    2 /* Private */,
       4,    1,   52,    2, 0x08,    3 /* Private */,
       6,    3,   55,    2, 0x08,    5 /* Private */,
      12,    0,   62,    2, 0x08,    9 /* Private */,
      13,    3,   63,    2, 0x08,   10 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QByteArray, 0x80000000 | 10,    8,    9,   11,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7, QMetaType::QByteArray, 0x80000000 | 10,    8,    9,   11,

       0        // eod
};

Q_CONSTINIT const QMetaObject ProfileSetupDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSProfileSetupDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSProfileSetupDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSProfileSetupDialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ProfileSetupDialog, std::true_type>,
        // method 'on_buttonBox_accepted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_buttonBox_rejected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'nameEdited'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'checkFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply::NetworkError, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>,
        QtPrivate::TypeAndForceComplete<QList<QNetworkReply::RawHeaderPair>, std::false_type>,
        // method 'startCheck'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setupProfileFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply::NetworkError, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>,
        QtPrivate::TypeAndForceComplete<QList<QNetworkReply::RawHeaderPair>, std::false_type>
    >,
    nullptr
} };

void ProfileSetupDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ProfileSetupDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_buttonBox_accepted(); break;
        case 1: _t->on_buttonBox_rejected(); break;
        case 2: _t->nameEdited((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->checkFinished((*reinterpret_cast< std::add_pointer_t<QNetworkReply::NetworkError>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QList<QNetworkReply::RawHeaderPair>>>(_a[3]))); break;
        case 4: _t->startCheck(); break;
        case 5: _t->setupProfileFinished((*reinterpret_cast< std::add_pointer_t<QNetworkReply::NetworkError>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QList<QNetworkReply::RawHeaderPair>>>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply::NetworkError >(); break;
            }
            break;
        }
    }
}

const QMetaObject *ProfileSetupDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ProfileSetupDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSProfileSetupDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ProfileSetupDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
