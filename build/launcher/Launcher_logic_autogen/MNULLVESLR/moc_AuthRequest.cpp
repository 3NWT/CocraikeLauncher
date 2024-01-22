/****************************************************************************
** Meta object code from reading C++ file 'AuthRequest.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../launcher/minecraft/auth/AuthRequest.h"
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
#error "The header file 'AuthRequest.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSAuthRequestENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSAuthRequestENDCLASS = QtMocHelpers::stringData(
    "AuthRequest",
    "finished",
    "",
    "QNetworkReply::NetworkError",
    "error",
    "data",
    "QList<QNetworkReply::RawHeaderPair>",
    "headers",
    "uploadProgress",
    "bytesSent",
    "bytesTotal",
    "get",
    "QNetworkRequest",
    "req",
    "timeout",
    "post",
    "onRequestFinished",
    "onRequestError",
    "onSslErrors",
    "QList<QSslError>",
    "errors",
    "finish",
    "onUploadProgress",
    "uploaded",
    "total"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSAuthRequestENDCLASS_t {
    uint offsetsAndSizes[50];
    char stringdata0[12];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[28];
    char stringdata4[6];
    char stringdata5[5];
    char stringdata6[36];
    char stringdata7[8];
    char stringdata8[15];
    char stringdata9[10];
    char stringdata10[11];
    char stringdata11[4];
    char stringdata12[16];
    char stringdata13[4];
    char stringdata14[8];
    char stringdata15[5];
    char stringdata16[18];
    char stringdata17[15];
    char stringdata18[12];
    char stringdata19[17];
    char stringdata20[7];
    char stringdata21[7];
    char stringdata22[17];
    char stringdata23[9];
    char stringdata24[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSAuthRequestENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSAuthRequestENDCLASS_t qt_meta_stringdata_CLASSAuthRequestENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "AuthRequest"
        QT_MOC_LITERAL(12, 8),  // "finished"
        QT_MOC_LITERAL(21, 0),  // ""
        QT_MOC_LITERAL(22, 27),  // "QNetworkReply::NetworkError"
        QT_MOC_LITERAL(50, 5),  // "error"
        QT_MOC_LITERAL(56, 4),  // "data"
        QT_MOC_LITERAL(61, 35),  // "QList<QNetworkReply::RawHeade..."
        QT_MOC_LITERAL(97, 7),  // "headers"
        QT_MOC_LITERAL(105, 14),  // "uploadProgress"
        QT_MOC_LITERAL(120, 9),  // "bytesSent"
        QT_MOC_LITERAL(130, 10),  // "bytesTotal"
        QT_MOC_LITERAL(141, 3),  // "get"
        QT_MOC_LITERAL(145, 15),  // "QNetworkRequest"
        QT_MOC_LITERAL(161, 3),  // "req"
        QT_MOC_LITERAL(165, 7),  // "timeout"
        QT_MOC_LITERAL(173, 4),  // "post"
        QT_MOC_LITERAL(178, 17),  // "onRequestFinished"
        QT_MOC_LITERAL(196, 14),  // "onRequestError"
        QT_MOC_LITERAL(211, 11),  // "onSslErrors"
        QT_MOC_LITERAL(223, 16),  // "QList<QSslError>"
        QT_MOC_LITERAL(240, 6),  // "errors"
        QT_MOC_LITERAL(247, 6),  // "finish"
        QT_MOC_LITERAL(254, 16),  // "onUploadProgress"
        QT_MOC_LITERAL(271, 8),  // "uploaded"
        QT_MOC_LITERAL(280, 5)   // "total"
    },
    "AuthRequest",
    "finished",
    "",
    "QNetworkReply::NetworkError",
    "error",
    "data",
    "QList<QNetworkReply::RawHeaderPair>",
    "headers",
    "uploadProgress",
    "bytesSent",
    "bytesTotal",
    "get",
    "QNetworkRequest",
    "req",
    "timeout",
    "post",
    "onRequestFinished",
    "onRequestError",
    "onSslErrors",
    "QList<QSslError>",
    "errors",
    "finish",
    "onUploadProgress",
    "uploaded",
    "total"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSAuthRequestENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   80,    2, 0x06,    1 /* Public */,
       8,    2,   87,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      11,    2,   92,    2, 0x0a,    8 /* Public */,
      11,    1,   97,    2, 0x2a,   11 /* Public | MethodCloned */,
      15,    3,  100,    2, 0x0a,   13 /* Public */,
      15,    2,  107,    2, 0x2a,   17 /* Public | MethodCloned */,
      16,    0,  112,    2, 0x09,   20 /* Protected */,
      17,    1,  113,    2, 0x09,   21 /* Protected */,
      18,    1,  116,    2, 0x09,   23 /* Protected */,
      21,    0,  119,    2, 0x09,   25 /* Protected */,
      22,    2,  120,    2, 0x09,   26 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QByteArray, 0x80000000 | 6,    4,    5,    7,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    9,   10,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 12, QMetaType::Int,   13,   14,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 12, QMetaType::QByteArray, QMetaType::Int,   13,    5,   14,
    QMetaType::Void, 0x80000000 | 12, QMetaType::QByteArray,   13,    5,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   23,   24,

       0        // eod
};

Q_CONSTINIT const QMetaObject AuthRequest::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSAuthRequestENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSAuthRequestENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSAuthRequestENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AuthRequest, std::true_type>,
        // method 'finished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply::NetworkError, std::false_type>,
        QtPrivate::TypeAndForceComplete<QByteArray, std::false_type>,
        QtPrivate::TypeAndForceComplete<QList<QNetworkReply::RawHeaderPair>, std::false_type>,
        // method 'uploadProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'get'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QNetworkRequest &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'get'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QNetworkRequest &, std::false_type>,
        // method 'post'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QNetworkRequest &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'post'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QNetworkRequest &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        // method 'onRequestFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRequestError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply::NetworkError, std::false_type>,
        // method 'onSslErrors'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QList<QSslError>, std::false_type>,
        // method 'finish'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onUploadProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>
    >,
    nullptr
} };

void AuthRequest::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AuthRequest *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->finished((*reinterpret_cast< std::add_pointer_t<QNetworkReply::NetworkError>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QList<QNetworkReply::RawHeaderPair>>>(_a[3]))); break;
        case 1: _t->uploadProgress((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        case 2: _t->get((*reinterpret_cast< std::add_pointer_t<QNetworkRequest>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 3: _t->get((*reinterpret_cast< std::add_pointer_t<QNetworkRequest>>(_a[1]))); break;
        case 4: _t->post((*reinterpret_cast< std::add_pointer_t<QNetworkRequest>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 5: _t->post((*reinterpret_cast< std::add_pointer_t<QNetworkRequest>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[2]))); break;
        case 6: _t->onRequestFinished(); break;
        case 7: _t->onRequestError((*reinterpret_cast< std::add_pointer_t<QNetworkReply::NetworkError>>(_a[1]))); break;
        case 8: _t->onSslErrors((*reinterpret_cast< std::add_pointer_t<QList<QSslError>>>(_a[1]))); break;
        case 9: _t->finish(); break;
        case 10: _t->onUploadProgress((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
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
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkRequest >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkRequest >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkRequest >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkRequest >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply::NetworkError >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QSslError> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AuthRequest::*)(QNetworkReply::NetworkError , QByteArray , QList<QNetworkReply::RawHeaderPair> );
            if (_t _q_method = &AuthRequest::finished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AuthRequest::*)(qint64 , qint64 );
            if (_t _q_method = &AuthRequest::uploadProgress; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *AuthRequest::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AuthRequest::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSAuthRequestENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int AuthRequest::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void AuthRequest::finished(QNetworkReply::NetworkError _t1, QByteArray _t2, QList<QNetworkReply::RawHeaderPair> _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AuthRequest::uploadProgress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
