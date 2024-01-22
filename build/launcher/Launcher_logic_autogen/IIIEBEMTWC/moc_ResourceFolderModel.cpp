/****************************************************************************
** Meta object code from reading C++ file 'ResourceFolderModel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../launcher/minecraft/mod/ResourceFolderModel.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ResourceFolderModel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSResourceFolderModelENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSResourceFolderModelENDCLASS = QtMocHelpers::stringData(
    "ResourceFolderModel",
    "updateFinished",
    "",
    "enableInteraction",
    "enabled",
    "disableInteraction",
    "disabled",
    "directoryChanged",
    "onUpdateSucceeded",
    "onUpdateFailed",
    "onParseSucceeded",
    "ticket",
    "resource_id",
    "onParseFailed"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSResourceFolderModelENDCLASS_t {
    uint offsetsAndSizes[28];
    char stringdata0[20];
    char stringdata1[15];
    char stringdata2[1];
    char stringdata3[18];
    char stringdata4[8];
    char stringdata5[19];
    char stringdata6[9];
    char stringdata7[17];
    char stringdata8[18];
    char stringdata9[15];
    char stringdata10[17];
    char stringdata11[7];
    char stringdata12[12];
    char stringdata13[14];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSResourceFolderModelENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSResourceFolderModelENDCLASS_t qt_meta_stringdata_CLASSResourceFolderModelENDCLASS = {
    {
        QT_MOC_LITERAL(0, 19),  // "ResourceFolderModel"
        QT_MOC_LITERAL(20, 14),  // "updateFinished"
        QT_MOC_LITERAL(35, 0),  // ""
        QT_MOC_LITERAL(36, 17),  // "enableInteraction"
        QT_MOC_LITERAL(54, 7),  // "enabled"
        QT_MOC_LITERAL(62, 18),  // "disableInteraction"
        QT_MOC_LITERAL(81, 8),  // "disabled"
        QT_MOC_LITERAL(90, 16),  // "directoryChanged"
        QT_MOC_LITERAL(107, 17),  // "onUpdateSucceeded"
        QT_MOC_LITERAL(125, 14),  // "onUpdateFailed"
        QT_MOC_LITERAL(140, 16),  // "onParseSucceeded"
        QT_MOC_LITERAL(157, 6),  // "ticket"
        QT_MOC_LITERAL(164, 11),  // "resource_id"
        QT_MOC_LITERAL(176, 13)   // "onParseFailed"
    },
    "ResourceFolderModel",
    "updateFinished",
    "",
    "enableInteraction",
    "enabled",
    "disableInteraction",
    "disabled",
    "directoryChanged",
    "onUpdateSucceeded",
    "onUpdateFailed",
    "onParseSucceeded",
    "ticket",
    "resource_id",
    "onParseFailed"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSResourceFolderModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   62,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,   63,    2, 0x0a,    2 /* Public */,
       5,    1,   66,    2, 0x0a,    4 /* Public */,
       7,    1,   69,    2, 0x09,    6 /* Protected */,
       8,    0,   72,    2, 0x09,    8 /* Protected */,
       9,    0,   73,    2, 0x09,    9 /* Protected */,
      10,    2,   74,    2, 0x09,   10 /* Protected */,
      13,    2,   79,    2, 0x09,   13 /* Protected */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void, QMetaType::Bool,    6,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   11,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   11,   12,

       0        // eod
};

Q_CONSTINIT const QMetaObject ResourceFolderModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSResourceFolderModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSResourceFolderModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSResourceFolderModelENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ResourceFolderModel, std::true_type>,
        // method 'updateFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'enableInteraction'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'disableInteraction'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'directoryChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'onUpdateSucceeded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onUpdateFailed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onParseSucceeded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'onParseFailed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>
    >,
    nullptr
} };

void ResourceFolderModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ResourceFolderModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->updateFinished(); break;
        case 1: _t->enableInteraction((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->disableInteraction((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->directoryChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->onUpdateSucceeded(); break;
        case 5: _t->onUpdateFailed(); break;
        case 6: _t->onParseSucceeded((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 7: _t->onParseFailed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ResourceFolderModel::*)();
            if (_t _q_method = &ResourceFolderModel::updateFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *ResourceFolderModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ResourceFolderModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSResourceFolderModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int ResourceFolderModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void ResourceFolderModel::updateFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
