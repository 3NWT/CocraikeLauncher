/****************************************************************************
** Meta object code from reading C++ file 'Upload.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../launcher/net/Upload.h"
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
#error "The header file 'Upload.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSNetSCOPEUploadENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSNetSCOPEUploadENDCLASS = QtMocHelpers::stringData(
    "Net::Upload",
    "downloadProgress",
    "",
    "bytesReceived",
    "bytesTotal",
    "downloadError",
    "QNetworkReply::NetworkError",
    "error",
    "sslErrors",
    "QList<QSslError>",
    "errors",
    "downloadFinished",
    "downloadReadyRead",
    "executeTask"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSNetSCOPEUploadENDCLASS_t {
    uint offsetsAndSizes[28];
    char stringdata0[12];
    char stringdata1[17];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[11];
    char stringdata5[14];
    char stringdata6[28];
    char stringdata7[6];
    char stringdata8[10];
    char stringdata9[17];
    char stringdata10[7];
    char stringdata11[17];
    char stringdata12[18];
    char stringdata13[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSNetSCOPEUploadENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSNetSCOPEUploadENDCLASS_t qt_meta_stringdata_CLASSNetSCOPEUploadENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "Net::Upload"
        QT_MOC_LITERAL(12, 16),  // "downloadProgress"
        QT_MOC_LITERAL(29, 0),  // ""
        QT_MOC_LITERAL(30, 13),  // "bytesReceived"
        QT_MOC_LITERAL(44, 10),  // "bytesTotal"
        QT_MOC_LITERAL(55, 13),  // "downloadError"
        QT_MOC_LITERAL(69, 27),  // "QNetworkReply::NetworkError"
        QT_MOC_LITERAL(97, 5),  // "error"
        QT_MOC_LITERAL(103, 9),  // "sslErrors"
        QT_MOC_LITERAL(113, 16),  // "QList<QSslError>"
        QT_MOC_LITERAL(130, 6),  // "errors"
        QT_MOC_LITERAL(137, 16),  // "downloadFinished"
        QT_MOC_LITERAL(154, 17),  // "downloadReadyRead"
        QT_MOC_LITERAL(172, 11)   // "executeTask"
    },
    "Net::Upload",
    "downloadProgress",
    "",
    "bytesReceived",
    "bytesTotal",
    "downloadError",
    "QNetworkReply::NetworkError",
    "error",
    "sslErrors",
    "QList<QSslError>",
    "errors",
    "downloadFinished",
    "downloadReadyRead",
    "executeTask"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSNetSCOPEUploadENDCLASS[] = {

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
       1,    2,   50,    2, 0x09,    1 /* Protected */,
       5,    1,   55,    2, 0x09,    4 /* Protected */,
       8,    1,   58,    2, 0x09,    6 /* Protected */,
      11,    0,   61,    2, 0x09,    8 /* Protected */,
      12,    0,   62,    2, 0x09,    9 /* Protected */,
      13,    0,   63,    2, 0x0a,   10 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Net::Upload::staticMetaObject = { {
    QMetaObject::SuperData::link<NetAction::staticMetaObject>(),
    qt_meta_stringdata_CLASSNetSCOPEUploadENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSNetSCOPEUploadENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSNetSCOPEUploadENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Upload, std::true_type>,
        // method 'downloadProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'downloadError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply::NetworkError, std::false_type>,
        // method 'sslErrors'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<QSslError> &, std::false_type>,
        // method 'downloadFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'downloadReadyRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'executeTask'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Net::Upload::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Upload *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->downloadProgress((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        case 1: _t->downloadError((*reinterpret_cast< std::add_pointer_t<QNetworkReply::NetworkError>>(_a[1]))); break;
        case 2: _t->sslErrors((*reinterpret_cast< std::add_pointer_t<QList<QSslError>>>(_a[1]))); break;
        case 3: _t->downloadFinished(); break;
        case 4: _t->downloadReadyRead(); break;
        case 5: _t->executeTask(); break;
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
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QSslError> >(); break;
            }
            break;
        }
    }
}

const QMetaObject *Net::Upload::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Net::Upload::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSNetSCOPEUploadENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return NetAction::qt_metacast(_clname);
}

int Net::Upload::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = NetAction::qt_metacall(_c, _id, _a);
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
