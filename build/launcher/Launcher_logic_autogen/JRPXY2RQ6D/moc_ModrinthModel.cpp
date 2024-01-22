/****************************************************************************
** Meta object code from reading C++ file 'ModrinthModel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../launcher/ui/pages/modplatform/modrinth/ModrinthModel.h"
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
#error "The header file 'ModrinthModel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSModrinthSCOPEModpackListModelENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSModrinthSCOPEModpackListModelENDCLASS = QtMocHelpers::stringData(
    "Modrinth::ModpackListModel",
    "searchRequestFinished",
    "",
    "QJsonDocument&",
    "doc_all",
    "searchRequestFailed",
    "reason",
    "logoFailed",
    "logo",
    "logoLoaded",
    "out",
    "performPaginatedSearch"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSModrinthSCOPEModpackListModelENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[27];
    char stringdata1[22];
    char stringdata2[1];
    char stringdata3[15];
    char stringdata4[8];
    char stringdata5[20];
    char stringdata6[7];
    char stringdata7[11];
    char stringdata8[5];
    char stringdata9[11];
    char stringdata10[4];
    char stringdata11[23];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSModrinthSCOPEModpackListModelENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSModrinthSCOPEModpackListModelENDCLASS_t qt_meta_stringdata_CLASSModrinthSCOPEModpackListModelENDCLASS = {
    {
        QT_MOC_LITERAL(0, 26),  // "Modrinth::ModpackListModel"
        QT_MOC_LITERAL(27, 21),  // "searchRequestFinished"
        QT_MOC_LITERAL(49, 0),  // ""
        QT_MOC_LITERAL(50, 14),  // "QJsonDocument&"
        QT_MOC_LITERAL(65, 7),  // "doc_all"
        QT_MOC_LITERAL(73, 19),  // "searchRequestFailed"
        QT_MOC_LITERAL(93, 6),  // "reason"
        QT_MOC_LITERAL(100, 10),  // "logoFailed"
        QT_MOC_LITERAL(111, 4),  // "logo"
        QT_MOC_LITERAL(116, 10),  // "logoLoaded"
        QT_MOC_LITERAL(127, 3),  // "out"
        QT_MOC_LITERAL(131, 22)   // "performPaginatedSearch"
    },
    "Modrinth::ModpackListModel",
    "searchRequestFinished",
    "",
    "QJsonDocument&",
    "doc_all",
    "searchRequestFailed",
    "reason",
    "logoFailed",
    "logo",
    "logoLoaded",
    "out",
    "performPaginatedSearch"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSModrinthSCOPEModpackListModelENDCLASS[] = {

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
       1,    1,   44,    2, 0x0a,    1 /* Public */,
       5,    1,   47,    2, 0x0a,    3 /* Public */,
       7,    1,   50,    2, 0x09,    5 /* Protected */,
       9,    2,   53,    2, 0x09,    7 /* Protected */,
      11,    0,   58,    2, 0x09,   10 /* Protected */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::QIcon,    8,   10,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject Modrinth::ModpackListModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSModrinthSCOPEModpackListModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSModrinthSCOPEModpackListModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSModrinthSCOPEModpackListModelENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ModpackListModel, std::true_type>,
        // method 'searchRequestFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QJsonDocument &, std::false_type>,
        // method 'searchRequestFailed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'logoFailed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'logoLoaded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QIcon, std::false_type>,
        // method 'performPaginatedSearch'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void Modrinth::ModpackListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ModpackListModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->searchRequestFinished((*reinterpret_cast< std::add_pointer_t<QJsonDocument&>>(_a[1]))); break;
        case 1: _t->searchRequestFailed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->logoFailed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->logoLoaded((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QIcon>>(_a[2]))); break;
        case 4: _t->performPaginatedSearch(); break;
        default: ;
        }
    }
}

const QMetaObject *Modrinth::ModpackListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Modrinth::ModpackListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSModrinthSCOPEModpackListModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int Modrinth::ModpackListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
