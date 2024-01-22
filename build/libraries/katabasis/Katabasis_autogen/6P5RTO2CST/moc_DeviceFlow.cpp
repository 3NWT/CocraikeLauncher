/****************************************************************************
** Meta object code from reading C++ file 'DeviceFlow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../libraries/katabasis/include/katabasis/DeviceFlow.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'DeviceFlow.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSKatabasisSCOPEDeviceFlowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSKatabasisSCOPEDeviceFlowENDCLASS = QtMocHelpers::stringData(
    "Katabasis::DeviceFlow",
    "openBrowser",
    "",
    "url",
    "closeBrowser",
    "showVerificationUriAndCode",
    "uri",
    "code",
    "expiresIn",
    "activityChanged",
    "Activity",
    "activity",
    "login",
    "logout",
    "refresh",
    "serverHasClosed",
    "paramsfound",
    "onVerificationReceived",
    "QMap<QString,QString>",
    "onDeviceAuthReplyFinished",
    "onRefreshFinished",
    "onRefreshError",
    "QNetworkReply::NetworkError",
    "error",
    "QNetworkReply*",
    "reply"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSKatabasisSCOPEDeviceFlowENDCLASS_t {
    uint offsetsAndSizes[52];
    char stringdata0[22];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[4];
    char stringdata4[13];
    char stringdata5[27];
    char stringdata6[4];
    char stringdata7[5];
    char stringdata8[10];
    char stringdata9[16];
    char stringdata10[9];
    char stringdata11[9];
    char stringdata12[6];
    char stringdata13[7];
    char stringdata14[8];
    char stringdata15[16];
    char stringdata16[12];
    char stringdata17[23];
    char stringdata18[22];
    char stringdata19[26];
    char stringdata20[18];
    char stringdata21[15];
    char stringdata22[28];
    char stringdata23[6];
    char stringdata24[15];
    char stringdata25[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSKatabasisSCOPEDeviceFlowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSKatabasisSCOPEDeviceFlowENDCLASS_t qt_meta_stringdata_CLASSKatabasisSCOPEDeviceFlowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 21),  // "Katabasis::DeviceFlow"
        QT_MOC_LITERAL(22, 11),  // "openBrowser"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 3),  // "url"
        QT_MOC_LITERAL(39, 12),  // "closeBrowser"
        QT_MOC_LITERAL(52, 26),  // "showVerificationUriAndCode"
        QT_MOC_LITERAL(79, 3),  // "uri"
        QT_MOC_LITERAL(83, 4),  // "code"
        QT_MOC_LITERAL(88, 9),  // "expiresIn"
        QT_MOC_LITERAL(98, 15),  // "activityChanged"
        QT_MOC_LITERAL(114, 8),  // "Activity"
        QT_MOC_LITERAL(123, 8),  // "activity"
        QT_MOC_LITERAL(132, 5),  // "login"
        QT_MOC_LITERAL(138, 6),  // "logout"
        QT_MOC_LITERAL(145, 7),  // "refresh"
        QT_MOC_LITERAL(153, 15),  // "serverHasClosed"
        QT_MOC_LITERAL(169, 11),  // "paramsfound"
        QT_MOC_LITERAL(181, 22),  // "onVerificationReceived"
        QT_MOC_LITERAL(204, 21),  // "QMap<QString,QString>"
        QT_MOC_LITERAL(226, 25),  // "onDeviceAuthReplyFinished"
        QT_MOC_LITERAL(252, 17),  // "onRefreshFinished"
        QT_MOC_LITERAL(270, 14),  // "onRefreshError"
        QT_MOC_LITERAL(285, 27),  // "QNetworkReply::NetworkError"
        QT_MOC_LITERAL(313, 5),  // "error"
        QT_MOC_LITERAL(319, 14),  // "QNetworkReply*"
        QT_MOC_LITERAL(334, 5)   // "reply"
    },
    "Katabasis::DeviceFlow",
    "openBrowser",
    "",
    "url",
    "closeBrowser",
    "showVerificationUriAndCode",
    "uri",
    "code",
    "expiresIn",
    "activityChanged",
    "Activity",
    "activity",
    "login",
    "logout",
    "refresh",
    "serverHasClosed",
    "paramsfound",
    "onVerificationReceived",
    "QMap<QString,QString>",
    "onDeviceAuthReplyFinished",
    "onRefreshFinished",
    "onRefreshError",
    "QNetworkReply::NetworkError",
    "error",
    "QNetworkReply*",
    "reply"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSKatabasisSCOPEDeviceFlowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   92,    2, 0x06,    1 /* Public */,
       4,    0,   95,    2, 0x06,    3 /* Public */,
       5,    3,   96,    2, 0x06,    4 /* Public */,
       9,    1,  103,    2, 0x06,    8 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      12,    0,  106,    2, 0x0a,   10 /* Public */,
      13,    0,  107,    2, 0x0a,   11 /* Public */,
      14,    0,  108,    2, 0x0a,   12 /* Public */,
      15,    1,  109,    2, 0x0a,   13 /* Public */,
      15,    0,  112,    2, 0x2a,   15 /* Public | MethodCloned */,
      17,    1,  113,    2, 0x0a,   16 /* Public */,
      19,    0,  116,    2, 0x09,   18 /* Protected */,
      20,    0,  117,    2, 0x09,   19 /* Protected */,
      21,    2,  118,    2, 0x09,   20 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QUrl,    3,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl, QMetaType::QString, QMetaType::Int,    6,    7,    8,
    QMetaType::Void, 0x80000000 | 10,   11,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Bool,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 22, 0x80000000 | 24,   23,   25,

 // enums: name, alias, flags, count, data

 // enum data: key, value

       0        // eod
};

Q_CONSTINIT const QMetaObject Katabasis::DeviceFlow::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSKatabasisSCOPEDeviceFlowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSKatabasisSCOPEDeviceFlowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSKatabasisSCOPEDeviceFlowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DeviceFlow, std::true_type>,
        // method 'openBrowser'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        // method 'closeBrowser'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showVerificationUriAndCode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'activityChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Activity, std::false_type>,
        // method 'login'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'logout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'refresh'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'serverHasClosed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'serverHasClosed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onVerificationReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QMap<QString,QString>, std::false_type>,
        // method 'onDeviceAuthReplyFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRefreshFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRefreshError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply::NetworkError, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>
    >,
    nullptr
} };

void Katabasis::DeviceFlow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DeviceFlow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->openBrowser((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1]))); break;
        case 1: _t->closeBrowser(); break;
        case 2: _t->showVerificationUriAndCode((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 3: _t->activityChanged((*reinterpret_cast< std::add_pointer_t<Activity>>(_a[1]))); break;
        case 4: _t->login(); break;
        case 5: _t->logout(); break;
        case 6: { bool _r = _t->refresh();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: _t->serverHasClosed((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->serverHasClosed(); break;
        case 9: _t->onVerificationReceived((*reinterpret_cast< std::add_pointer_t<QMap<QString,QString>>>(_a[1]))); break;
        case 10: _t->onDeviceAuthReplyFinished(); break;
        case 11: _t->onRefreshFinished(); break;
        case 12: _t->onRefreshError((*reinterpret_cast< std::add_pointer_t<QNetworkReply::NetworkError>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply::NetworkError >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DeviceFlow::*)(const QUrl & );
            if (_t _q_method = &DeviceFlow::openBrowser; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DeviceFlow::*)();
            if (_t _q_method = &DeviceFlow::closeBrowser; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DeviceFlow::*)(const QUrl & , const QString & , int );
            if (_t _q_method = &DeviceFlow::showVerificationUriAndCode; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DeviceFlow::*)(Activity );
            if (_t _q_method = &DeviceFlow::activityChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *Katabasis::DeviceFlow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Katabasis::DeviceFlow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSKatabasisSCOPEDeviceFlowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Katabasis::DeviceFlow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void Katabasis::DeviceFlow::openBrowser(const QUrl & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void Katabasis::DeviceFlow::closeBrowser()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Katabasis::DeviceFlow::showVerificationUriAndCode(const QUrl & _t1, const QString & _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void Katabasis::DeviceFlow::activityChanged(Activity _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
