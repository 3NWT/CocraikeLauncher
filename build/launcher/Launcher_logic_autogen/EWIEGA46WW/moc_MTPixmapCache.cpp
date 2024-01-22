/****************************************************************************
** Meta object code from reading C++ file 'MTPixmapCache.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../launcher/MTPixmapCache.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'MTPixmapCache.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSPixmapCacheENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSPixmapCacheENDCLASS = QtMocHelpers::stringData(
    "PixmapCache",
    "_cacheLimit",
    "",
    "_clear",
    "_find",
    "key",
    "QPixmap*",
    "pixmap",
    "QPixmapCache::Key",
    "_insert",
    "_remove",
    "_replace",
    "_setCacheLimit",
    "n"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSPixmapCacheENDCLASS_t {
    uint offsetsAndSizes[28];
    char stringdata0[12];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[7];
    char stringdata4[6];
    char stringdata5[4];
    char stringdata6[9];
    char stringdata7[7];
    char stringdata8[18];
    char stringdata9[8];
    char stringdata10[8];
    char stringdata11[9];
    char stringdata12[15];
    char stringdata13[2];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSPixmapCacheENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSPixmapCacheENDCLASS_t qt_meta_stringdata_CLASSPixmapCacheENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "PixmapCache"
        QT_MOC_LITERAL(12, 11),  // "_cacheLimit"
        QT_MOC_LITERAL(24, 0),  // ""
        QT_MOC_LITERAL(25, 6),  // "_clear"
        QT_MOC_LITERAL(32, 5),  // "_find"
        QT_MOC_LITERAL(38, 3),  // "key"
        QT_MOC_LITERAL(42, 8),  // "QPixmap*"
        QT_MOC_LITERAL(51, 6),  // "pixmap"
        QT_MOC_LITERAL(58, 17),  // "QPixmapCache::Key"
        QT_MOC_LITERAL(76, 7),  // "_insert"
        QT_MOC_LITERAL(84, 7),  // "_remove"
        QT_MOC_LITERAL(92, 8),  // "_replace"
        QT_MOC_LITERAL(101, 14),  // "_setCacheLimit"
        QT_MOC_LITERAL(116, 1)   // "n"
    },
    "PixmapCache",
    "_cacheLimit",
    "",
    "_clear",
    "_find",
    "key",
    "QPixmap*",
    "pixmap",
    "QPixmapCache::Key",
    "_insert",
    "_remove",
    "_replace",
    "_setCacheLimit",
    "n"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPixmapCacheENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x08,    1 /* Private */,
       3,    0,   75,    2, 0x08,    2 /* Private */,
       4,    2,   76,    2, 0x08,    3 /* Private */,
       4,    2,   81,    2, 0x08,    6 /* Private */,
       9,    2,   86,    2, 0x08,    9 /* Private */,
       9,    1,   91,    2, 0x08,   12 /* Private */,
      10,    1,   94,    2, 0x08,   14 /* Private */,
      10,    1,   97,    2, 0x08,   16 /* Private */,
      11,    2,  100,    2, 0x08,   18 /* Private */,
      12,    1,  105,    2, 0x08,   21 /* Private */,

 // slots: parameters
    QMetaType::Int,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::QString, 0x80000000 | 6,    5,    7,
    QMetaType::Bool, 0x80000000 | 8, 0x80000000 | 6,    5,    7,
    QMetaType::Bool, QMetaType::QString, QMetaType::QPixmap,    5,    7,
    0x80000000 | 8, QMetaType::QPixmap,    7,
    QMetaType::Bool, QMetaType::QString,    5,
    QMetaType::Bool, 0x80000000 | 8,    5,
    QMetaType::Bool, 0x80000000 | 8, QMetaType::QPixmap,    5,    7,
    QMetaType::Bool, QMetaType::Int,   13,

       0        // eod
};

Q_CONSTINIT const QMetaObject PixmapCache::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSPixmapCacheENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPixmapCacheENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPixmapCacheENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PixmapCache, std::true_type>,
        // method '_cacheLimit'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method '_clear'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method '_find'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPixmap *, std::false_type>,
        // method '_find'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPixmapCache::Key &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QPixmap *, std::false_type>,
        // method '_insert'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPixmap &, std::false_type>,
        // method '_insert'
        QtPrivate::TypeAndForceComplete<QPixmapCache::Key, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPixmap &, std::false_type>,
        // method '_remove'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method '_remove'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPixmapCache::Key &, std::false_type>,
        // method '_replace'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPixmapCache::Key &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPixmap &, std::false_type>,
        // method '_setCacheLimit'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void PixmapCache::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PixmapCache *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { int _r = _t->_cacheLimit();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 1: { bool _r = _t->_clear();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: { bool _r = _t->_find((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPixmap*>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 3: { bool _r = _t->_find((*reinterpret_cast< std::add_pointer_t<QPixmapCache::Key>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPixmap*>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 4: { bool _r = _t->_insert((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPixmap>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 5: { QPixmapCache::Key _r = _t->_insert((*reinterpret_cast< std::add_pointer_t<QPixmap>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QPixmapCache::Key*>(_a[0]) = std::move(_r); }  break;
        case 6: { bool _r = _t->_remove((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 7: { bool _r = _t->_remove((*reinterpret_cast< std::add_pointer_t<QPixmapCache::Key>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 8: { bool _r = _t->_replace((*reinterpret_cast< std::add_pointer_t<QPixmapCache::Key>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPixmap>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 9: { bool _r = _t->_setCacheLimit((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *PixmapCache::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PixmapCache::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPixmapCacheENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int PixmapCache::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
