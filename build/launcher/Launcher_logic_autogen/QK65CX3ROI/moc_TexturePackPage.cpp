/****************************************************************************
** Meta object code from reading C++ file 'TexturePackPage.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../launcher/ui/pages/instance/TexturePackPage.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TexturePackPage.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSTexturePackPageENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSTexturePackPageENDCLASS = QtMocHelpers::stringData(
    "TexturePackPage",
    "onSelectionChanged",
    "",
    "QModelIndex",
    "current",
    "previous",
    "downloadTPs"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSTexturePackPageENDCLASS_t {
    uint offsetsAndSizes[14];
    char stringdata0[16];
    char stringdata1[19];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[8];
    char stringdata5[9];
    char stringdata6[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSTexturePackPageENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSTexturePackPageENDCLASS_t qt_meta_stringdata_CLASSTexturePackPageENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15),  // "TexturePackPage"
        QT_MOC_LITERAL(16, 18),  // "onSelectionChanged"
        QT_MOC_LITERAL(35, 0),  // ""
        QT_MOC_LITERAL(36, 11),  // "QModelIndex"
        QT_MOC_LITERAL(48, 7),  // "current"
        QT_MOC_LITERAL(56, 8),  // "previous"
        QT_MOC_LITERAL(65, 11)   // "downloadTPs"
    },
    "TexturePackPage",
    "onSelectionChanged",
    "",
    "QModelIndex",
    "current",
    "previous",
    "downloadTPs"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSTexturePackPageENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   26,    2, 0x0a,    1 /* Public */,
       6,    0,   31,    2, 0x0a,    4 /* Public */,

 // slots: parameters
    QMetaType::Bool, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject TexturePackPage::staticMetaObject = { {
    QMetaObject::SuperData::link<ExternalResourcesPage::staticMetaObject>(),
    qt_meta_stringdata_CLASSTexturePackPageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSTexturePackPageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSTexturePackPageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TexturePackPage, std::true_type>,
        // method 'onSelectionChanged'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'downloadTPs'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void TexturePackPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TexturePackPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: { bool _r = _t->onSelectionChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->downloadTPs(); break;
        default: ;
        }
    }
}

const QMetaObject *TexturePackPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TexturePackPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSTexturePackPageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return ExternalResourcesPage::qt_metacast(_clname);
}

int TexturePackPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ExternalResourcesPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP