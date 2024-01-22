/****************************************************************************
** Meta object code from reading C++ file 'ShaderPackModel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../launcher/ui/pages/modplatform/ShaderPackModel.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ShaderPackModel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSResourceDownloadSCOPEShaderPackResourceModelENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSResourceDownloadSCOPEShaderPackResourceModelENDCLASS = QtMocHelpers::stringData(
    "ResourceDownload::ShaderPackResourceModel",
    "createSearchArguments",
    "ResourceAPI::SearchArgs",
    "",
    "createVersionsArguments",
    "ResourceAPI::VersionSearchArgs",
    "QModelIndex&",
    "createInfoArguments",
    "ResourceAPI::ProjectInfoArgs"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSResourceDownloadSCOPEShaderPackResourceModelENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[42];
    char stringdata1[22];
    char stringdata2[24];
    char stringdata3[1];
    char stringdata4[24];
    char stringdata5[31];
    char stringdata6[13];
    char stringdata7[20];
    char stringdata8[29];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSResourceDownloadSCOPEShaderPackResourceModelENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSResourceDownloadSCOPEShaderPackResourceModelENDCLASS_t qt_meta_stringdata_CLASSResourceDownloadSCOPEShaderPackResourceModelENDCLASS = {
    {
        QT_MOC_LITERAL(0, 41),  // "ResourceDownload::ShaderPackR..."
        QT_MOC_LITERAL(42, 21),  // "createSearchArguments"
        QT_MOC_LITERAL(64, 23),  // "ResourceAPI::SearchArgs"
        QT_MOC_LITERAL(88, 0),  // ""
        QT_MOC_LITERAL(89, 23),  // "createVersionsArguments"
        QT_MOC_LITERAL(113, 30),  // "ResourceAPI::VersionSearchArgs"
        QT_MOC_LITERAL(144, 12),  // "QModelIndex&"
        QT_MOC_LITERAL(157, 19),  // "createInfoArguments"
        QT_MOC_LITERAL(177, 28)   // "ResourceAPI::ProjectInfoArgs"
    },
    "ResourceDownload::ShaderPackResourceModel",
    "createSearchArguments",
    "ResourceAPI::SearchArgs",
    "",
    "createVersionsArguments",
    "ResourceAPI::VersionSearchArgs",
    "QModelIndex&",
    "createInfoArguments",
    "ResourceAPI::ProjectInfoArgs"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSResourceDownloadSCOPEShaderPackResourceModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    3, 0x0a,    1 /* Public */,
       4,    1,   33,    3, 0x0a,    2 /* Public */,
       7,    1,   36,    3, 0x0a,    4 /* Public */,

 // slots: parameters
    0x80000000 | 2,
    0x80000000 | 5, 0x80000000 | 6,    3,
    0x80000000 | 8, 0x80000000 | 6,    3,

       0        // eod
};

Q_CONSTINIT const QMetaObject ResourceDownload::ShaderPackResourceModel::staticMetaObject = { {
    QMetaObject::SuperData::link<ResourceModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSResourceDownloadSCOPEShaderPackResourceModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSResourceDownloadSCOPEShaderPackResourceModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSResourceDownloadSCOPEShaderPackResourceModelENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ShaderPackResourceModel, std::true_type>,
        // method 'createSearchArguments'
        QtPrivate::TypeAndForceComplete<ResourceAPI::SearchArgs, std::false_type>,
        // method 'createVersionsArguments'
        QtPrivate::TypeAndForceComplete<ResourceAPI::VersionSearchArgs, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndex &, std::false_type>,
        // method 'createInfoArguments'
        QtPrivate::TypeAndForceComplete<ResourceAPI::ProjectInfoArgs, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndex &, std::false_type>
    >,
    nullptr
} };

void ResourceDownload::ShaderPackResourceModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ShaderPackResourceModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { ResourceAPI::SearchArgs _r = _t->createSearchArguments();
            if (_a[0]) *reinterpret_cast< ResourceAPI::SearchArgs*>(_a[0]) = std::move(_r); }  break;
        case 1: { ResourceAPI::VersionSearchArgs _r = _t->createVersionsArguments((*reinterpret_cast< std::add_pointer_t<QModelIndex&>>(_a[1])));
            if (_a[0]) *reinterpret_cast< ResourceAPI::VersionSearchArgs*>(_a[0]) = std::move(_r); }  break;
        case 2: { ResourceAPI::ProjectInfoArgs _r = _t->createInfoArguments((*reinterpret_cast< std::add_pointer_t<QModelIndex&>>(_a[1])));
            if (_a[0]) *reinterpret_cast< ResourceAPI::ProjectInfoArgs*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
}

const QMetaObject *ResourceDownload::ShaderPackResourceModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ResourceDownload::ShaderPackResourceModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSResourceDownloadSCOPEShaderPackResourceModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return ResourceModel::qt_metacast(_clname);
}

int ResourceDownload::ShaderPackResourceModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ResourceModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
