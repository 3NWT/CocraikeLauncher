/****************************************************************************
** Meta object code from reading C++ file 'ResourceDownloadDialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../launcher/ui/dialogs/ResourceDownloadDialog.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ResourceDownloadDialog.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSResourceDownloadSCOPEResourceDownloadDialogENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSResourceDownloadSCOPEResourceDownloadDialogENDCLASS = QtMocHelpers::stringData(
    "ResourceDownload::ResourceDownloadDialog",
    "accept",
    "",
    "reject",
    "selectedPageChanged",
    "BasePage*",
    "previous",
    "selected",
    "confirm"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSResourceDownloadSCOPEResourceDownloadDialogENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[41];
    char stringdata1[7];
    char stringdata2[1];
    char stringdata3[7];
    char stringdata4[20];
    char stringdata5[10];
    char stringdata6[9];
    char stringdata7[9];
    char stringdata8[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSResourceDownloadSCOPEResourceDownloadDialogENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSResourceDownloadSCOPEResourceDownloadDialogENDCLASS_t qt_meta_stringdata_CLASSResourceDownloadSCOPEResourceDownloadDialogENDCLASS = {
    {
        QT_MOC_LITERAL(0, 40),  // "ResourceDownload::ResourceDow..."
        QT_MOC_LITERAL(41, 6),  // "accept"
        QT_MOC_LITERAL(48, 0),  // ""
        QT_MOC_LITERAL(49, 6),  // "reject"
        QT_MOC_LITERAL(56, 19),  // "selectedPageChanged"
        QT_MOC_LITERAL(76, 9),  // "BasePage*"
        QT_MOC_LITERAL(86, 8),  // "previous"
        QT_MOC_LITERAL(95, 8),  // "selected"
        QT_MOC_LITERAL(104, 7)   // "confirm"
    },
    "ResourceDownload::ResourceDownloadDialog",
    "accept",
    "",
    "reject",
    "selectedPageChanged",
    "BasePage*",
    "previous",
    "selected",
    "confirm"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSResourceDownloadSCOPEResourceDownloadDialogENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x0a,    1 /* Public */,
       3,    0,   39,    2, 0x0a,    2 /* Public */,
       4,    2,   40,    2, 0x09,    3 /* Protected */,
       8,    0,   45,    2, 0x09,    6 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5, 0x80000000 | 5,    6,    7,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject ResourceDownload::ResourceDownloadDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSResourceDownloadSCOPEResourceDownloadDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSResourceDownloadSCOPEResourceDownloadDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSResourceDownloadSCOPEResourceDownloadDialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ResourceDownloadDialog, std::true_type>,
        // method 'accept'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'reject'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'selectedPageChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<BasePage *, std::false_type>,
        QtPrivate::TypeAndForceComplete<BasePage *, std::false_type>,
        // method 'confirm'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void ResourceDownload::ResourceDownloadDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ResourceDownloadDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->accept(); break;
        case 1: _t->reject(); break;
        case 2: _t->selectedPageChanged((*reinterpret_cast< std::add_pointer_t<BasePage*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<BasePage*>>(_a[2]))); break;
        case 3: _t->confirm(); break;
        default: ;
        }
    }
}

const QMetaObject *ResourceDownload::ResourceDownloadDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ResourceDownload::ResourceDownloadDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSResourceDownloadSCOPEResourceDownloadDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "BasePageProvider"))
        return static_cast< BasePageProvider*>(this);
    return QDialog::qt_metacast(_clname);
}

int ResourceDownload::ResourceDownloadDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSResourceDownloadSCOPEModDownloadDialogENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSResourceDownloadSCOPEModDownloadDialogENDCLASS = QtMocHelpers::stringData(
    "ResourceDownload::ModDownloadDialog"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSResourceDownloadSCOPEModDownloadDialogENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[36];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSResourceDownloadSCOPEModDownloadDialogENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSResourceDownloadSCOPEModDownloadDialogENDCLASS_t qt_meta_stringdata_CLASSResourceDownloadSCOPEModDownloadDialogENDCLASS = {
    {
        QT_MOC_LITERAL(0, 35)   // "ResourceDownload::ModDownload..."
    },
    "ResourceDownload::ModDownloadDialog"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSResourceDownloadSCOPEModDownloadDialogENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject ResourceDownload::ModDownloadDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<ResourceDownloadDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSResourceDownloadSCOPEModDownloadDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSResourceDownloadSCOPEModDownloadDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSResourceDownloadSCOPEModDownloadDialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ModDownloadDialog, std::true_type>
    >,
    nullptr
} };

void ResourceDownload::ModDownloadDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *ResourceDownload::ModDownloadDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ResourceDownload::ModDownloadDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSResourceDownloadSCOPEModDownloadDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return ResourceDownloadDialog::qt_metacast(_clname);
}

int ResourceDownload::ModDownloadDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ResourceDownloadDialog::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSResourceDownloadSCOPEResourcePackDownloadDialogENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSResourceDownloadSCOPEResourcePackDownloadDialogENDCLASS = QtMocHelpers::stringData(
    "ResourceDownload::ResourcePackDownloadDialog"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSResourceDownloadSCOPEResourcePackDownloadDialogENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[45];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSResourceDownloadSCOPEResourcePackDownloadDialogENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSResourceDownloadSCOPEResourcePackDownloadDialogENDCLASS_t qt_meta_stringdata_CLASSResourceDownloadSCOPEResourcePackDownloadDialogENDCLASS = {
    {
        QT_MOC_LITERAL(0, 44)   // "ResourceDownload::ResourcePac..."
    },
    "ResourceDownload::ResourcePackDownloadDialog"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSResourceDownloadSCOPEResourcePackDownloadDialogENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject ResourceDownload::ResourcePackDownloadDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<ResourceDownloadDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSResourceDownloadSCOPEResourcePackDownloadDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSResourceDownloadSCOPEResourcePackDownloadDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSResourceDownloadSCOPEResourcePackDownloadDialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ResourcePackDownloadDialog, std::true_type>
    >,
    nullptr
} };

void ResourceDownload::ResourcePackDownloadDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *ResourceDownload::ResourcePackDownloadDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ResourceDownload::ResourcePackDownloadDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSResourceDownloadSCOPEResourcePackDownloadDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return ResourceDownloadDialog::qt_metacast(_clname);
}

int ResourceDownload::ResourcePackDownloadDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ResourceDownloadDialog::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSResourceDownloadSCOPETexturePackDownloadDialogENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSResourceDownloadSCOPETexturePackDownloadDialogENDCLASS = QtMocHelpers::stringData(
    "ResourceDownload::TexturePackDownloadDialog"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSResourceDownloadSCOPETexturePackDownloadDialogENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[44];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSResourceDownloadSCOPETexturePackDownloadDialogENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSResourceDownloadSCOPETexturePackDownloadDialogENDCLASS_t qt_meta_stringdata_CLASSResourceDownloadSCOPETexturePackDownloadDialogENDCLASS = {
    {
        QT_MOC_LITERAL(0, 43)   // "ResourceDownload::TexturePack..."
    },
    "ResourceDownload::TexturePackDownloadDialog"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSResourceDownloadSCOPETexturePackDownloadDialogENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject ResourceDownload::TexturePackDownloadDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<ResourceDownloadDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSResourceDownloadSCOPETexturePackDownloadDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSResourceDownloadSCOPETexturePackDownloadDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSResourceDownloadSCOPETexturePackDownloadDialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TexturePackDownloadDialog, std::true_type>
    >,
    nullptr
} };

void ResourceDownload::TexturePackDownloadDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *ResourceDownload::TexturePackDownloadDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ResourceDownload::TexturePackDownloadDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSResourceDownloadSCOPETexturePackDownloadDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return ResourceDownloadDialog::qt_metacast(_clname);
}

int ResourceDownload::TexturePackDownloadDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ResourceDownloadDialog::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSResourceDownloadSCOPEShaderPackDownloadDialogENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSResourceDownloadSCOPEShaderPackDownloadDialogENDCLASS = QtMocHelpers::stringData(
    "ResourceDownload::ShaderPackDownloadDialog"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSResourceDownloadSCOPEShaderPackDownloadDialogENDCLASS_t {
    uint offsetsAndSizes[2];
    char stringdata0[43];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSResourceDownloadSCOPEShaderPackDownloadDialogENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSResourceDownloadSCOPEShaderPackDownloadDialogENDCLASS_t qt_meta_stringdata_CLASSResourceDownloadSCOPEShaderPackDownloadDialogENDCLASS = {
    {
        QT_MOC_LITERAL(0, 42)   // "ResourceDownload::ShaderPackD..."
    },
    "ResourceDownload::ShaderPackDownloadDialog"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSResourceDownloadSCOPEShaderPackDownloadDialogENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject ResourceDownload::ShaderPackDownloadDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<ResourceDownloadDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSResourceDownloadSCOPEShaderPackDownloadDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSResourceDownloadSCOPEShaderPackDownloadDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSResourceDownloadSCOPEShaderPackDownloadDialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ShaderPackDownloadDialog, std::true_type>
    >,
    nullptr
} };

void ResourceDownload::ShaderPackDownloadDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *ResourceDownload::ShaderPackDownloadDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ResourceDownload::ShaderPackDownloadDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSResourceDownloadSCOPEShaderPackDownloadDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return ResourceDownloadDialog::qt_metacast(_clname);
}

int ResourceDownload::ShaderPackDownloadDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ResourceDownloadDialog::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
