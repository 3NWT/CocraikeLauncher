/****************************************************************************
** Meta object code from reading C++ file 'Page.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../launcher/ui/pages/modplatform/legacy_ftb/Page.h"
#include <QtGui/qtextcursor.h>
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
#error "The header file 'Page.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSLegacyFTBSCOPEPageENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSLegacyFTBSCOPEPageENDCLASS = QtMocHelpers::stringData(
    "LegacyFTB::Page",
    "ftbPackDataDownloadSuccessfully",
    "",
    "ModpackList",
    "publicPacks",
    "thirdPartyPacks",
    "ftbPackDataDownloadFailed",
    "reason",
    "ftbPackDataDownloadAborted",
    "ftbPrivatePackDataDownloadSuccessfully",
    "Modpack",
    "pack",
    "ftbPrivatePackDataDownloadFailed",
    "packCode",
    "onSortingSelectionChanged",
    "data",
    "onVersionSelectionItemChanged",
    "onPublicPackSelectionChanged",
    "QModelIndex",
    "first",
    "second",
    "onThirdPartyPackSelectionChanged",
    "onPrivatePackSelectionChanged",
    "onTabChanged",
    "tab",
    "onAddPackClicked",
    "onRemovePackClicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSLegacyFTBSCOPEPageENDCLASS_t {
    uint offsetsAndSizes[54];
    char stringdata0[16];
    char stringdata1[32];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[12];
    char stringdata5[16];
    char stringdata6[26];
    char stringdata7[7];
    char stringdata8[27];
    char stringdata9[39];
    char stringdata10[8];
    char stringdata11[5];
    char stringdata12[33];
    char stringdata13[9];
    char stringdata14[26];
    char stringdata15[5];
    char stringdata16[30];
    char stringdata17[29];
    char stringdata18[12];
    char stringdata19[6];
    char stringdata20[7];
    char stringdata21[33];
    char stringdata22[30];
    char stringdata23[13];
    char stringdata24[4];
    char stringdata25[17];
    char stringdata26[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSLegacyFTBSCOPEPageENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSLegacyFTBSCOPEPageENDCLASS_t qt_meta_stringdata_CLASSLegacyFTBSCOPEPageENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15),  // "LegacyFTB::Page"
        QT_MOC_LITERAL(16, 31),  // "ftbPackDataDownloadSuccessfully"
        QT_MOC_LITERAL(48, 0),  // ""
        QT_MOC_LITERAL(49, 11),  // "ModpackList"
        QT_MOC_LITERAL(61, 11),  // "publicPacks"
        QT_MOC_LITERAL(73, 15),  // "thirdPartyPacks"
        QT_MOC_LITERAL(89, 25),  // "ftbPackDataDownloadFailed"
        QT_MOC_LITERAL(115, 6),  // "reason"
        QT_MOC_LITERAL(122, 26),  // "ftbPackDataDownloadAborted"
        QT_MOC_LITERAL(149, 38),  // "ftbPrivatePackDataDownloadSuc..."
        QT_MOC_LITERAL(188, 7),  // "Modpack"
        QT_MOC_LITERAL(196, 4),  // "pack"
        QT_MOC_LITERAL(201, 32),  // "ftbPrivatePackDataDownloadFailed"
        QT_MOC_LITERAL(234, 8),  // "packCode"
        QT_MOC_LITERAL(243, 25),  // "onSortingSelectionChanged"
        QT_MOC_LITERAL(269, 4),  // "data"
        QT_MOC_LITERAL(274, 29),  // "onVersionSelectionItemChanged"
        QT_MOC_LITERAL(304, 28),  // "onPublicPackSelectionChanged"
        QT_MOC_LITERAL(333, 11),  // "QModelIndex"
        QT_MOC_LITERAL(345, 5),  // "first"
        QT_MOC_LITERAL(351, 6),  // "second"
        QT_MOC_LITERAL(358, 32),  // "onThirdPartyPackSelectionChanged"
        QT_MOC_LITERAL(391, 29),  // "onPrivatePackSelectionChanged"
        QT_MOC_LITERAL(421, 12),  // "onTabChanged"
        QT_MOC_LITERAL(434, 3),  // "tab"
        QT_MOC_LITERAL(438, 16),  // "onAddPackClicked"
        QT_MOC_LITERAL(455, 19)   // "onRemovePackClicked"
    },
    "LegacyFTB::Page",
    "ftbPackDataDownloadSuccessfully",
    "",
    "ModpackList",
    "publicPacks",
    "thirdPartyPacks",
    "ftbPackDataDownloadFailed",
    "reason",
    "ftbPackDataDownloadAborted",
    "ftbPrivatePackDataDownloadSuccessfully",
    "Modpack",
    "pack",
    "ftbPrivatePackDataDownloadFailed",
    "packCode",
    "onSortingSelectionChanged",
    "data",
    "onVersionSelectionItemChanged",
    "onPublicPackSelectionChanged",
    "QModelIndex",
    "first",
    "second",
    "onThirdPartyPackSelectionChanged",
    "onPrivatePackSelectionChanged",
    "onTabChanged",
    "tab",
    "onAddPackClicked",
    "onRemovePackClicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSLegacyFTBSCOPEPageENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   92,    2, 0x08,    1 /* Private */,
       6,    1,   97,    2, 0x08,    4 /* Private */,
       8,    0,  100,    2, 0x08,    6 /* Private */,
       9,    1,  101,    2, 0x08,    7 /* Private */,
      12,    2,  104,    2, 0x08,    9 /* Private */,
      14,    1,  109,    2, 0x08,   12 /* Private */,
      16,    1,  112,    2, 0x08,   14 /* Private */,
      17,    2,  115,    2, 0x08,   16 /* Private */,
      21,    2,  120,    2, 0x08,   19 /* Private */,
      22,    2,  125,    2, 0x08,   22 /* Private */,
      23,    1,  130,    2, 0x08,   25 /* Private */,
      25,    0,  133,    2, 0x08,   27 /* Private */,
      26,    0,  134,    2, 0x08,   28 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,   13,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, 0x80000000 | 18, 0x80000000 | 18,   19,   20,
    QMetaType::Void, 0x80000000 | 18, 0x80000000 | 18,   19,   20,
    QMetaType::Void, 0x80000000 | 18, 0x80000000 | 18,   19,   20,
    QMetaType::Void, QMetaType::Int,   24,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject LegacyFTB::Page::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSLegacyFTBSCOPEPageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSLegacyFTBSCOPEPageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSLegacyFTBSCOPEPageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Page, std::true_type>,
        // method 'ftbPackDataDownloadSuccessfully'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<ModpackList, std::false_type>,
        QtPrivate::TypeAndForceComplete<ModpackList, std::false_type>,
        // method 'ftbPackDataDownloadFailed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'ftbPackDataDownloadAborted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ftbPrivatePackDataDownloadSuccessfully'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Modpack, std::false_type>,
        // method 'ftbPrivatePackDataDownloadFailed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'onSortingSelectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'onVersionSelectionItemChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'onPublicPackSelectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        // method 'onThirdPartyPackSelectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        // method 'onPrivatePackSelectionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        // method 'onTabChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'onAddPackClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRemovePackClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void LegacyFTB::Page::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Page *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ftbPackDataDownloadSuccessfully((*reinterpret_cast< std::add_pointer_t<ModpackList>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<ModpackList>>(_a[2]))); break;
        case 1: _t->ftbPackDataDownloadFailed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->ftbPackDataDownloadAborted(); break;
        case 3: _t->ftbPrivatePackDataDownloadSuccessfully((*reinterpret_cast< std::add_pointer_t<Modpack>>(_a[1]))); break;
        case 4: _t->ftbPrivatePackDataDownloadFailed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 5: _t->onSortingSelectionChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->onVersionSelectionItemChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->onPublicPackSelectionChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 8: _t->onThirdPartyPackSelectionChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 9: _t->onPrivatePackSelectionChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 10: _t->onTabChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->onAddPackClicked(); break;
        case 12: _t->onRemovePackClicked(); break;
        default: ;
        }
    }
}

const QMetaObject *LegacyFTB::Page::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LegacyFTB::Page::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSLegacyFTBSCOPEPageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "BasePage"))
        return static_cast< BasePage*>(this);
    return QWidget::qt_metacast(_clname);
}

int LegacyFTB::Page::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }
    return _id;
}
QT_WARNING_POP
