/****************************************************************************
** Meta object code from reading C++ file 'LauncherPage.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../launcher/ui/pages/global/LauncherPage.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LauncherPage.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSLauncherPageENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSLauncherPageENDCLASS = QtMocHelpers::stringData(
    "LauncherPage",
    "on_instDirBrowseBtn_clicked",
    "",
    "on_modsDirBrowseBtn_clicked",
    "on_iconsDirBrowseBtn_clicked",
    "on_downloadsDirBrowseBtn_clicked",
    "on_metadataDisableBtn_clicked",
    "refreshFontPreview"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSLauncherPageENDCLASS_t {
    uint offsetsAndSizes[16];
    char stringdata0[13];
    char stringdata1[28];
    char stringdata2[1];
    char stringdata3[28];
    char stringdata4[29];
    char stringdata5[33];
    char stringdata6[30];
    char stringdata7[19];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSLauncherPageENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSLauncherPageENDCLASS_t qt_meta_stringdata_CLASSLauncherPageENDCLASS = {
    {
        QT_MOC_LITERAL(0, 12),  // "LauncherPage"
        QT_MOC_LITERAL(13, 27),  // "on_instDirBrowseBtn_clicked"
        QT_MOC_LITERAL(41, 0),  // ""
        QT_MOC_LITERAL(42, 27),  // "on_modsDirBrowseBtn_clicked"
        QT_MOC_LITERAL(70, 28),  // "on_iconsDirBrowseBtn_clicked"
        QT_MOC_LITERAL(99, 32),  // "on_downloadsDirBrowseBtn_clicked"
        QT_MOC_LITERAL(132, 29),  // "on_metadataDisableBtn_clicked"
        QT_MOC_LITERAL(162, 18)   // "refreshFontPreview"
    },
    "LauncherPage",
    "on_instDirBrowseBtn_clicked",
    "",
    "on_modsDirBrowseBtn_clicked",
    "on_iconsDirBrowseBtn_clicked",
    "on_downloadsDirBrowseBtn_clicked",
    "on_metadataDisableBtn_clicked",
    "refreshFontPreview"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSLauncherPageENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x08,    1 /* Private */,
       3,    0,   51,    2, 0x08,    2 /* Private */,
       4,    0,   52,    2, 0x08,    3 /* Private */,
       5,    0,   53,    2, 0x08,    4 /* Private */,
       6,    0,   54,    2, 0x08,    5 /* Private */,
       7,    0,   55,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject LauncherPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSLauncherPageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSLauncherPageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSLauncherPageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LauncherPage, std::true_type>,
        // method 'on_instDirBrowseBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_modsDirBrowseBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_iconsDirBrowseBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_downloadsDirBrowseBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_metadataDisableBtn_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'refreshFontPreview'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void LauncherPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LauncherPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_instDirBrowseBtn_clicked(); break;
        case 1: _t->on_modsDirBrowseBtn_clicked(); break;
        case 2: _t->on_iconsDirBrowseBtn_clicked(); break;
        case 3: _t->on_downloadsDirBrowseBtn_clicked(); break;
        case 4: _t->on_metadataDisableBtn_clicked(); break;
        case 5: _t->refreshFontPreview(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *LauncherPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LauncherPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSLauncherPageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "BasePage"))
        return static_cast< BasePage*>(this);
    return QWidget::qt_metacast(_clname);
}

int LauncherPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
