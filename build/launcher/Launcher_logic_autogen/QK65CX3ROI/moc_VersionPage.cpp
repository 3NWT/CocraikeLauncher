/****************************************************************************
** Meta object code from reading C++ file 'VersionPage.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../launcher/ui/pages/instance/VersionPage.h"
#include <QtNetwork/QSslError>
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VersionPage.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSVersionPageENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSVersionPageENDCLASS = QtMocHelpers::stringData(
    "VersionPage",
    "on_actionChange_version_triggered",
    "",
    "on_actionInstall_Forge_triggered",
    "on_actionInstall_Fabric_triggered",
    "on_actionInstall_Quilt_triggered",
    "on_actionAdd_Empty_triggered",
    "on_actionInstall_LiteLoader_triggered",
    "on_actionReload_triggered",
    "on_actionRemove_triggered",
    "on_actionMove_up_triggered",
    "on_actionMove_down_triggered",
    "on_actionAdd_to_Minecraft_jar_triggered",
    "on_actionReplace_Minecraft_jar_triggered",
    "on_actionImport_Components_triggered",
    "on_actionAdd_Agents_triggered",
    "on_actionRevert_triggered",
    "on_actionEdit_triggered",
    "on_actionInstall_mods_triggered",
    "on_actionCustomize_triggered",
    "on_actionDownload_All_triggered",
    "on_actionMinecraftFolder_triggered",
    "on_actionLibrariesFolder_triggered",
    "updateVersionControls",
    "versionCurrent",
    "QModelIndex",
    "current",
    "previous",
    "updateRunningStatus",
    "running",
    "onGameUpdateError",
    "error",
    "packageCurrent",
    "showContextMenu",
    "pos",
    "onFilterTextChanged",
    "newContents"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSVersionPageENDCLASS_t {
    uint offsetsAndSizes[74];
    char stringdata0[12];
    char stringdata1[34];
    char stringdata2[1];
    char stringdata3[33];
    char stringdata4[34];
    char stringdata5[33];
    char stringdata6[29];
    char stringdata7[38];
    char stringdata8[26];
    char stringdata9[26];
    char stringdata10[27];
    char stringdata11[29];
    char stringdata12[40];
    char stringdata13[41];
    char stringdata14[37];
    char stringdata15[30];
    char stringdata16[26];
    char stringdata17[24];
    char stringdata18[32];
    char stringdata19[29];
    char stringdata20[32];
    char stringdata21[35];
    char stringdata22[35];
    char stringdata23[22];
    char stringdata24[15];
    char stringdata25[12];
    char stringdata26[8];
    char stringdata27[9];
    char stringdata28[20];
    char stringdata29[8];
    char stringdata30[18];
    char stringdata31[6];
    char stringdata32[15];
    char stringdata33[16];
    char stringdata34[4];
    char stringdata35[20];
    char stringdata36[12];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSVersionPageENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSVersionPageENDCLASS_t qt_meta_stringdata_CLASSVersionPageENDCLASS = {
    {
        QT_MOC_LITERAL(0, 11),  // "VersionPage"
        QT_MOC_LITERAL(12, 33),  // "on_actionChange_version_trigg..."
        QT_MOC_LITERAL(46, 0),  // ""
        QT_MOC_LITERAL(47, 32),  // "on_actionInstall_Forge_triggered"
        QT_MOC_LITERAL(80, 33),  // "on_actionInstall_Fabric_trigg..."
        QT_MOC_LITERAL(114, 32),  // "on_actionInstall_Quilt_triggered"
        QT_MOC_LITERAL(147, 28),  // "on_actionAdd_Empty_triggered"
        QT_MOC_LITERAL(176, 37),  // "on_actionInstall_LiteLoader_t..."
        QT_MOC_LITERAL(214, 25),  // "on_actionReload_triggered"
        QT_MOC_LITERAL(240, 25),  // "on_actionRemove_triggered"
        QT_MOC_LITERAL(266, 26),  // "on_actionMove_up_triggered"
        QT_MOC_LITERAL(293, 28),  // "on_actionMove_down_triggered"
        QT_MOC_LITERAL(322, 39),  // "on_actionAdd_to_Minecraft_jar..."
        QT_MOC_LITERAL(362, 40),  // "on_actionReplace_Minecraft_ja..."
        QT_MOC_LITERAL(403, 36),  // "on_actionImport_Components_tr..."
        QT_MOC_LITERAL(440, 29),  // "on_actionAdd_Agents_triggered"
        QT_MOC_LITERAL(470, 25),  // "on_actionRevert_triggered"
        QT_MOC_LITERAL(496, 23),  // "on_actionEdit_triggered"
        QT_MOC_LITERAL(520, 31),  // "on_actionInstall_mods_triggered"
        QT_MOC_LITERAL(552, 28),  // "on_actionCustomize_triggered"
        QT_MOC_LITERAL(581, 31),  // "on_actionDownload_All_triggered"
        QT_MOC_LITERAL(613, 34),  // "on_actionMinecraftFolder_trig..."
        QT_MOC_LITERAL(648, 34),  // "on_actionLibrariesFolder_trig..."
        QT_MOC_LITERAL(683, 21),  // "updateVersionControls"
        QT_MOC_LITERAL(705, 14),  // "versionCurrent"
        QT_MOC_LITERAL(720, 11),  // "QModelIndex"
        QT_MOC_LITERAL(732, 7),  // "current"
        QT_MOC_LITERAL(740, 8),  // "previous"
        QT_MOC_LITERAL(749, 19),  // "updateRunningStatus"
        QT_MOC_LITERAL(769, 7),  // "running"
        QT_MOC_LITERAL(777, 17),  // "onGameUpdateError"
        QT_MOC_LITERAL(795, 5),  // "error"
        QT_MOC_LITERAL(801, 14),  // "packageCurrent"
        QT_MOC_LITERAL(816, 15),  // "showContextMenu"
        QT_MOC_LITERAL(832, 3),  // "pos"
        QT_MOC_LITERAL(836, 19),  // "onFilterTextChanged"
        QT_MOC_LITERAL(856, 11)   // "newContents"
    },
    "VersionPage",
    "on_actionChange_version_triggered",
    "",
    "on_actionInstall_Forge_triggered",
    "on_actionInstall_Fabric_triggered",
    "on_actionInstall_Quilt_triggered",
    "on_actionAdd_Empty_triggered",
    "on_actionInstall_LiteLoader_triggered",
    "on_actionReload_triggered",
    "on_actionRemove_triggered",
    "on_actionMove_up_triggered",
    "on_actionMove_down_triggered",
    "on_actionAdd_to_Minecraft_jar_triggered",
    "on_actionReplace_Minecraft_jar_triggered",
    "on_actionImport_Components_triggered",
    "on_actionAdd_Agents_triggered",
    "on_actionRevert_triggered",
    "on_actionEdit_triggered",
    "on_actionInstall_mods_triggered",
    "on_actionCustomize_triggered",
    "on_actionDownload_All_triggered",
    "on_actionMinecraftFolder_triggered",
    "on_actionLibrariesFolder_triggered",
    "updateVersionControls",
    "versionCurrent",
    "QModelIndex",
    "current",
    "previous",
    "updateRunningStatus",
    "running",
    "onGameUpdateError",
    "error",
    "packageCurrent",
    "showContextMenu",
    "pos",
    "onFilterTextChanged",
    "newContents"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSVersionPageENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      28,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  182,    2, 0x08,    1 /* Private */,
       3,    0,  183,    2, 0x08,    2 /* Private */,
       4,    0,  184,    2, 0x08,    3 /* Private */,
       5,    0,  185,    2, 0x08,    4 /* Private */,
       6,    0,  186,    2, 0x08,    5 /* Private */,
       7,    0,  187,    2, 0x08,    6 /* Private */,
       8,    0,  188,    2, 0x08,    7 /* Private */,
       9,    0,  189,    2, 0x08,    8 /* Private */,
      10,    0,  190,    2, 0x08,    9 /* Private */,
      11,    0,  191,    2, 0x08,   10 /* Private */,
      12,    0,  192,    2, 0x08,   11 /* Private */,
      13,    0,  193,    2, 0x08,   12 /* Private */,
      14,    0,  194,    2, 0x08,   13 /* Private */,
      15,    0,  195,    2, 0x08,   14 /* Private */,
      16,    0,  196,    2, 0x08,   15 /* Private */,
      17,    0,  197,    2, 0x08,   16 /* Private */,
      18,    0,  198,    2, 0x08,   17 /* Private */,
      19,    0,  199,    2, 0x08,   18 /* Private */,
      20,    0,  200,    2, 0x08,   19 /* Private */,
      21,    0,  201,    2, 0x08,   20 /* Private */,
      22,    0,  202,    2, 0x08,   21 /* Private */,
      23,    0,  203,    2, 0x08,   22 /* Private */,
      24,    2,  204,    2, 0x0a,   23 /* Public */,
      28,    1,  209,    2, 0x08,   26 /* Private */,
      30,    1,  212,    2, 0x08,   28 /* Private */,
      32,    2,  215,    2, 0x08,   30 /* Private */,
      33,    1,  220,    2, 0x08,   33 /* Private */,
      35,    1,  223,    2, 0x08,   35 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 25, 0x80000000 | 25,   26,   27,
    QMetaType::Void, QMetaType::Bool,   29,
    QMetaType::Void, QMetaType::QString,   31,
    QMetaType::Void, 0x80000000 | 25, 0x80000000 | 25,   26,   27,
    QMetaType::Void, QMetaType::QPoint,   34,
    QMetaType::Void, QMetaType::QString,   36,

       0        // eod
};

Q_CONSTINIT const QMetaObject VersionPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSVersionPageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSVersionPageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSVersionPageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<VersionPage, std::true_type>,
        // method 'on_actionChange_version_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionInstall_Forge_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionInstall_Fabric_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionInstall_Quilt_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionAdd_Empty_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionInstall_LiteLoader_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionReload_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionRemove_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionMove_up_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionMove_down_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionAdd_to_Minecraft_jar_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionReplace_Minecraft_jar_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionImport_Components_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionAdd_Agents_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionRevert_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionEdit_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionInstall_mods_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionCustomize_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionDownload_All_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionMinecraftFolder_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionLibrariesFolder_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateVersionControls'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'versionCurrent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'updateRunningStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onGameUpdateError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'packageCurrent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'showContextMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'onFilterTextChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void VersionPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VersionPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_actionChange_version_triggered(); break;
        case 1: _t->on_actionInstall_Forge_triggered(); break;
        case 2: _t->on_actionInstall_Fabric_triggered(); break;
        case 3: _t->on_actionInstall_Quilt_triggered(); break;
        case 4: _t->on_actionAdd_Empty_triggered(); break;
        case 5: _t->on_actionInstall_LiteLoader_triggered(); break;
        case 6: _t->on_actionReload_triggered(); break;
        case 7: _t->on_actionRemove_triggered(); break;
        case 8: _t->on_actionMove_up_triggered(); break;
        case 9: _t->on_actionMove_down_triggered(); break;
        case 10: _t->on_actionAdd_to_Minecraft_jar_triggered(); break;
        case 11: _t->on_actionReplace_Minecraft_jar_triggered(); break;
        case 12: _t->on_actionImport_Components_triggered(); break;
        case 13: _t->on_actionAdd_Agents_triggered(); break;
        case 14: _t->on_actionRevert_triggered(); break;
        case 15: _t->on_actionEdit_triggered(); break;
        case 16: _t->on_actionInstall_mods_triggered(); break;
        case 17: _t->on_actionCustomize_triggered(); break;
        case 18: _t->on_actionDownload_All_triggered(); break;
        case 19: _t->on_actionMinecraftFolder_triggered(); break;
        case 20: _t->on_actionLibrariesFolder_triggered(); break;
        case 21: _t->updateVersionControls(); break;
        case 22: _t->versionCurrent((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 23: _t->updateRunningStatus((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 24: _t->onGameUpdateError((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 25: _t->packageCurrent((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 26: _t->showContextMenu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 27: _t->onFilterTextChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *VersionPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VersionPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSVersionPageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "BasePage"))
        return static_cast< BasePage*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int VersionPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 28)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 28;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 28)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 28;
    }
    return _id;
}
QT_WARNING_POP
