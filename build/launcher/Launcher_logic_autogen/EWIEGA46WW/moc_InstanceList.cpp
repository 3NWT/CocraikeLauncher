/****************************************************************************
** Meta object code from reading C++ file 'InstanceList.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../launcher/InstanceList.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QSet>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'InstanceList.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSInstanceListENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSInstanceListENDCLASS = QtMocHelpers::stringData(
    "InstanceList",
    "dataIsInvalid",
    "",
    "instancesChanged",
    "instanceSelectRequest",
    "instanceId",
    "groupsChanged",
    "QSet<QString>",
    "groups",
    "on_InstFolderChanged",
    "Setting",
    "setting",
    "value",
    "on_GroupStateChanged",
    "group",
    "collapsed",
    "propertiesChanged",
    "BaseInstance*",
    "inst",
    "providerUpdated",
    "instanceDirContentsChanged",
    "path"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSInstanceListENDCLASS_t {
    uint offsetsAndSizes[44];
    char stringdata0[13];
    char stringdata1[14];
    char stringdata2[1];
    char stringdata3[17];
    char stringdata4[22];
    char stringdata5[11];
    char stringdata6[14];
    char stringdata7[14];
    char stringdata8[7];
    char stringdata9[21];
    char stringdata10[8];
    char stringdata11[8];
    char stringdata12[6];
    char stringdata13[21];
    char stringdata14[6];
    char stringdata15[10];
    char stringdata16[18];
    char stringdata17[14];
    char stringdata18[5];
    char stringdata19[16];
    char stringdata20[27];
    char stringdata21[5];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSInstanceListENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSInstanceListENDCLASS_t qt_meta_stringdata_CLASSInstanceListENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "InstanceList"
        QT_MOC_LITERAL(13, 13),  // "dataIsInvalid"
        QT_MOC_LITERAL(27, 0),  // ""
        QT_MOC_LITERAL(28, 16),  // "instancesChanged"
        QT_MOC_LITERAL(45, 21),  // "instanceSelectRequest"
        QT_MOC_LITERAL(67, 10),  // "instanceId"
        QT_MOC_LITERAL(78, 13),  // "groupsChanged"
        QT_MOC_LITERAL(92, 13),  // "QSet<QString>"
        QT_MOC_LITERAL(106, 6),  // "groups"
        QT_MOC_LITERAL(113, 20),  // "on_InstFolderChanged"
        QT_MOC_LITERAL(134, 7),  // "Setting"
        QT_MOC_LITERAL(142, 7),  // "setting"
        QT_MOC_LITERAL(150, 5),  // "value"
        QT_MOC_LITERAL(156, 20),  // "on_GroupStateChanged"
        QT_MOC_LITERAL(177, 5),  // "group"
        QT_MOC_LITERAL(183, 9),  // "collapsed"
        QT_MOC_LITERAL(193, 17),  // "propertiesChanged"
        QT_MOC_LITERAL(211, 13),  // "BaseInstance*"
        QT_MOC_LITERAL(225, 4),  // "inst"
        QT_MOC_LITERAL(230, 15),  // "providerUpdated"
        QT_MOC_LITERAL(246, 26),  // "instanceDirContentsChanged"
        QT_MOC_LITERAL(273, 4)   // "path"
    },
    "InstanceList",
    "dataIsInvalid",
    "",
    "instancesChanged",
    "instanceSelectRequest",
    "instanceId",
    "groupsChanged",
    "QSet<QString>",
    "groups",
    "on_InstFolderChanged",
    "Setting",
    "setting",
    "value",
    "on_GroupStateChanged",
    "group",
    "collapsed",
    "propertiesChanged",
    "BaseInstance*",
    "inst",
    "providerUpdated",
    "instanceDirContentsChanged",
    "path"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSInstanceListENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x06,    1 /* Public */,
       3,    0,   69,    2, 0x06,    2 /* Public */,
       4,    1,   70,    2, 0x06,    3 /* Public */,
       6,    1,   73,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    2,   76,    2, 0x0a,    7 /* Public */,
      13,    2,   81,    2, 0x0a,   10 /* Public */,
      16,    1,   86,    2, 0x08,   13 /* Private */,
      19,    0,   89,    2, 0x08,   15 /* Private */,
      20,    1,   90,    2, 0x08,   16 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, 0x80000000 | 7,    8,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 10, QMetaType::QVariant,   11,   12,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   14,   15,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   21,

       0        // eod
};

Q_CONSTINIT const QMetaObject InstanceList::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSInstanceListENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSInstanceListENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSInstanceListENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<InstanceList, std::true_type>,
        // method 'dataIsInvalid'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'instancesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'instanceSelectRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'groupsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QSet<QString>, std::false_type>,
        // method 'on_InstFolderChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const Setting &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVariant, std::false_type>,
        // method 'on_GroupStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'propertiesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<BaseInstance *, std::false_type>,
        // method 'providerUpdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'instanceDirContentsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void InstanceList::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InstanceList *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->dataIsInvalid(); break;
        case 1: _t->instancesChanged(); break;
        case 2: _t->instanceSelectRequest((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->groupsChanged((*reinterpret_cast< std::add_pointer_t<QSet<QString>>>(_a[1]))); break;
        case 4: _t->on_InstFolderChanged((*reinterpret_cast< std::add_pointer_t<Setting>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[2]))); break;
        case 5: _t->on_GroupStateChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 6: _t->propertiesChanged((*reinterpret_cast< std::add_pointer_t<BaseInstance*>>(_a[1]))); break;
        case 7: _t->providerUpdated(); break;
        case 8: _t->instanceDirContentsChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QSet<QString> >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< BaseInstance* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (InstanceList::*)();
            if (_t _q_method = &InstanceList::dataIsInvalid; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (InstanceList::*)();
            if (_t _q_method = &InstanceList::instancesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (InstanceList::*)(QString );
            if (_t _q_method = &InstanceList::instanceSelectRequest; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (InstanceList::*)(QSet<QString> );
            if (_t _q_method = &InstanceList::groupsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *InstanceList::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InstanceList::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSInstanceListENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int InstanceList::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void InstanceList::dataIsInvalid()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void InstanceList::instancesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void InstanceList::instanceSelectRequest(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void InstanceList::groupsChanged(QSet<QString> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
