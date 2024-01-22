/****************************************************************************
** Meta object code from reading C++ file 'NetAction.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../launcher/net/NetAction.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'NetAction.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSNetActionENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSNetActionENDCLASS = QtMocHelpers::stringData(
    "NetAction",
    "downloadProgress",
    "",
    "bytesReceived",
    "bytesTotal",
    "downloadError",
    "QNetworkReply::NetworkError",
    "error",
    "downloadFinished",
    "downloadReadyRead",
    "startAction",
    "shared_qobject_ptr<QNetworkAccessManager>",
    "network"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSNetActionENDCLASS_t {
    uint offsetsAndSizes[26];
    char stringdata0[10];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[11];
    char stringdata5[14];
    char stringdata6[28];
    char stringdata7[6];
    char stringdata8[17];
    char stringdata9[18];
    char stringdata10[12];
    char stringdata11[42];
    char stringdata12[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSNetActionENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSNetActionENDCLASS_t qt_meta_stringdata_CLASSNetActionENDCLASS = {
    {
        QT_MOC_LITERAL(0, 9),  // "NetAction"
        QT_MOC_LITERAL(10, 16),  // "downloadProgress"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 13),  // "bytesReceived"
        QT_MOC_LITERAL(42, 10),  // "bytesTotal"
        QT_MOC_LITERAL(53, 13),  // "downloadError"
        QT_MOC_LITERAL(67, 27),  // "QNetworkReply::NetworkError"
        QT_MOC_LITERAL(95, 5),  // "error"
        QT_MOC_LITERAL(101, 16),  // "downloadFinished"
        QT_MOC_LITERAL(118, 17),  // "downloadReadyRead"
        QT_MOC_LITERAL(136, 11),  // "startAction"
        QT_MOC_LITERAL(148, 41),  // "shared_qobject_ptr<QNetworkAc..."
        QT_MOC_LITERAL(190, 7)   // "network"
    },
    "NetAction",
    "downloadProgress",
    "",
    "bytesReceived",
    "bytesTotal",
    "downloadError",
    "QNetworkReply::NetworkError",
    "error",
    "downloadFinished",
    "downloadReadyRead",
    "startAction",
    "shared_qobject_ptr<QNetworkAccessManager>",
    "network"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSNetActionENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   44,    2, 0x09,    1 /* Protected */,
       5,    1,   49,    2, 0x09,    4 /* Protected */,
       8,    0,   52,    2, 0x09,    6 /* Protected */,
       9,    0,   53,    2, 0x09,    7 /* Protected */,
      10,    1,   54,    2, 0x0a,    8 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   12,

       0        // eod
};

Q_CONSTINIT const QMetaObject NetAction::staticMetaObject = { {
    QMetaObject::SuperData::link<Task::staticMetaObject>(),
    qt_meta_stringdata_CLASSNetActionENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSNetActionENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSNetActionENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<NetAction, std::true_type>,
        // method 'downloadProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'downloadError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply::NetworkError, std::false_type>,
        // method 'downloadFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'downloadReadyRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'startAction'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<shared_qobject_ptr<QNetworkAccessManager>, std::false_type>
    >,
    nullptr
} };

void NetAction::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NetAction *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->downloadProgress((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        case 1: _t->downloadError((*reinterpret_cast< std::add_pointer_t<QNetworkReply::NetworkError>>(_a[1]))); break;
        case 2: _t->downloadFinished(); break;
        case 3: _t->downloadReadyRead(); break;
        case 4: _t->startAction((*reinterpret_cast< std::add_pointer_t<shared_qobject_ptr<QNetworkAccessManager>>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply::NetworkError >(); break;
            }
            break;
        }
    }
}

const QMetaObject *NetAction::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NetAction::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSNetActionENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return Task::qt_metacast(_clname);
}

int NetAction::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Task::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
