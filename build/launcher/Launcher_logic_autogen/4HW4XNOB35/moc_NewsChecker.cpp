/****************************************************************************
** Meta object code from reading C++ file 'NewsChecker.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../launcher/news/NewsChecker.h"
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
#error "The header file 'NewsChecker.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSNewsCheckerENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSNewsCheckerENDCLASS = QtMocHelpers::stringData(
    "NewsChecker",
    "newsLoaded",
    "",
    "newsLoadingFailed",
    "errorMsg",
    "rssDownloadFinished",
    "rssDownloadFailed",
    "reason",
    "succeed",
    "fail"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSNewsCheckerENDCLASS_t {
    uint offsetsAndSizes[20];
    char stringdata0[12];
    char stringdata1[11];
    char stringdata2[1];
    char stringdata3[18];
    char stringdata4[9];
    char stringdata5[20];
    char stringdata6[18];
    char stringdata7[7];
    char stringdata8[8];
    char stringdata9[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSNewsCheckerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSNewsCheckerENDCLASS_t qt_meta_stringdata_CLASSNewsCheckerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "NewsChecker"
        QT_MOC_LITERAL(12, 10),  // "newsLoaded"
        QT_MOC_LITERAL(23, 0),  // ""
        QT_MOC_LITERAL(24, 17),  // "newsLoadingFailed"
        QT_MOC_LITERAL(42, 8),  // "errorMsg"
        QT_MOC_LITERAL(51, 19),  // "rssDownloadFinished"
        QT_MOC_LITERAL(71, 17),  // "rssDownloadFailed"
        QT_MOC_LITERAL(89, 6),  // "reason"
        QT_MOC_LITERAL(96, 7),  // "succeed"
        QT_MOC_LITERAL(104, 4)   // "fail"
    },
    "NewsChecker",
    "newsLoaded",
    "",
    "newsLoadingFailed",
    "errorMsg",
    "rssDownloadFinished",
    "rssDownloadFailed",
    "reason",
    "succeed",
    "fail"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSNewsCheckerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x06,    1 /* Public */,
       3,    1,   51,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   54,    2, 0x09,    4 /* Protected */,
       6,    1,   55,    2, 0x09,    5 /* Protected */,
       8,    0,   58,    2, 0x09,    7 /* Protected */,
       9,    1,   59,    2, 0x09,    8 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

       0        // eod
};

Q_CONSTINIT const QMetaObject NewsChecker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSNewsCheckerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSNewsCheckerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSNewsCheckerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<NewsChecker, std::true_type>,
        // method 'newsLoaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'newsLoadingFailed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'rssDownloadFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'rssDownloadFailed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'succeed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'fail'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void NewsChecker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<NewsChecker *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->newsLoaded(); break;
        case 1: _t->newsLoadingFailed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->rssDownloadFinished(); break;
        case 3: _t->rssDownloadFailed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->succeed(); break;
        case 5: _t->fail((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (NewsChecker::*)();
            if (_t _q_method = &NewsChecker::newsLoaded; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (NewsChecker::*)(QString );
            if (_t _q_method = &NewsChecker::newsLoadingFailed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *NewsChecker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *NewsChecker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSNewsCheckerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int NewsChecker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void NewsChecker::newsLoaded()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void NewsChecker::newsLoadingFailed(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
