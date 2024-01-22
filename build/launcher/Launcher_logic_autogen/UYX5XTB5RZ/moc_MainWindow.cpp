/****************************************************************************
** Meta object code from reading C++ file 'MainWindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../launcher/ui/MainWindow.h"
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
#error "The header file 'MainWindow.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "isClosing",
    "",
    "onCatToggled",
    "onCatChanged",
    "on_actionAbout_triggered",
    "on_actionAddInstance_triggered",
    "on_actionREDDIT_triggered",
    "on_actionMATRIX_triggered",
    "on_actionDISCORD_triggered",
    "on_actionCopyInstance_triggered",
    "on_actionChangeInstGroup_triggered",
    "on_actionChangeInstIcon_triggered",
    "on_actionViewInstanceFolder_triggered",
    "on_actionViewSelectedInstFolder_triggered",
    "refreshInstances",
    "on_actionViewCentralModsFolder_triggered",
    "checkForUpdates",
    "on_actionSettings_triggered",
    "on_actionManageAccounts_triggered",
    "on_actionReportBug_triggered",
    "on_actionClearMetadata_triggered",
    "on_actionOpenWiki_triggered",
    "on_actionMoreNews_triggered",
    "newsButtonClicked",
    "on_actionLaunchInstance_triggered",
    "on_actionLaunchInstanceOffline_triggered",
    "on_actionLaunchInstanceDemo_triggered",
    "on_actionKillInstance_triggered",
    "on_actionDeleteInstance_triggered",
    "deleteGroup",
    "undoTrashInstance",
    "on_actionExportInstance_triggered",
    "on_actionRenameInstance_triggered",
    "on_actionEditInstance_triggered",
    "on_actionCreateInstanceShortcut_triggered",
    "taskEnd",
    "iconUpdated",
    "showInstanceContextMenu",
    "updateMainToolBar",
    "updateToolsMenu",
    "updateThemeMenu",
    "instanceActivated",
    "QModelIndex",
    "instanceChanged",
    "current",
    "previous",
    "instanceSelectRequest",
    "id",
    "instanceDataChanged",
    "topLeft",
    "bottomRight",
    "selectionBad",
    "startTask",
    "Task*",
    "task",
    "defaultAccountChanged",
    "changeActiveAccount",
    "repopulateAccountsMenu",
    "updateNewsLabel",
    "konamiTriggered",
    "globalSettingsClosed",
    "lockToolbars",
    "keyReleaseEvent",
    "QKeyEvent*",
    "event",
    "refreshCurrentInstance",
    "running"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {
    uint offsetsAndSizes[136];
    char stringdata0[11];
    char stringdata1[10];
    char stringdata2[1];
    char stringdata3[13];
    char stringdata4[13];
    char stringdata5[25];
    char stringdata6[31];
    char stringdata7[26];
    char stringdata8[26];
    char stringdata9[27];
    char stringdata10[32];
    char stringdata11[35];
    char stringdata12[34];
    char stringdata13[38];
    char stringdata14[42];
    char stringdata15[17];
    char stringdata16[41];
    char stringdata17[16];
    char stringdata18[28];
    char stringdata19[34];
    char stringdata20[29];
    char stringdata21[33];
    char stringdata22[28];
    char stringdata23[28];
    char stringdata24[18];
    char stringdata25[34];
    char stringdata26[41];
    char stringdata27[38];
    char stringdata28[32];
    char stringdata29[34];
    char stringdata30[12];
    char stringdata31[18];
    char stringdata32[34];
    char stringdata33[34];
    char stringdata34[32];
    char stringdata35[42];
    char stringdata36[8];
    char stringdata37[12];
    char stringdata38[24];
    char stringdata39[18];
    char stringdata40[16];
    char stringdata41[16];
    char stringdata42[18];
    char stringdata43[12];
    char stringdata44[16];
    char stringdata45[8];
    char stringdata46[9];
    char stringdata47[22];
    char stringdata48[3];
    char stringdata49[20];
    char stringdata50[8];
    char stringdata51[12];
    char stringdata52[13];
    char stringdata53[10];
    char stringdata54[6];
    char stringdata55[5];
    char stringdata56[22];
    char stringdata57[20];
    char stringdata58[23];
    char stringdata59[16];
    char stringdata60[16];
    char stringdata61[21];
    char stringdata62[13];
    char stringdata63[16];
    char stringdata64[11];
    char stringdata65[6];
    char stringdata66[23];
    char stringdata67[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMainWindowENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMainWindowENDCLASS_t qt_meta_stringdata_CLASSMainWindowENDCLASS = {
    {
        QT_MOC_LITERAL(0, 10),  // "MainWindow"
        QT_MOC_LITERAL(11, 9),  // "isClosing"
        QT_MOC_LITERAL(21, 0),  // ""
        QT_MOC_LITERAL(22, 12),  // "onCatToggled"
        QT_MOC_LITERAL(35, 12),  // "onCatChanged"
        QT_MOC_LITERAL(48, 24),  // "on_actionAbout_triggered"
        QT_MOC_LITERAL(73, 30),  // "on_actionAddInstance_triggered"
        QT_MOC_LITERAL(104, 25),  // "on_actionREDDIT_triggered"
        QT_MOC_LITERAL(130, 25),  // "on_actionMATRIX_triggered"
        QT_MOC_LITERAL(156, 26),  // "on_actionDISCORD_triggered"
        QT_MOC_LITERAL(183, 31),  // "on_actionCopyInstance_triggered"
        QT_MOC_LITERAL(215, 34),  // "on_actionChangeInstGroup_trig..."
        QT_MOC_LITERAL(250, 33),  // "on_actionChangeInstIcon_trigg..."
        QT_MOC_LITERAL(284, 37),  // "on_actionViewInstanceFolder_t..."
        QT_MOC_LITERAL(322, 41),  // "on_actionViewSelectedInstFold..."
        QT_MOC_LITERAL(364, 16),  // "refreshInstances"
        QT_MOC_LITERAL(381, 40),  // "on_actionViewCentralModsFolde..."
        QT_MOC_LITERAL(422, 15),  // "checkForUpdates"
        QT_MOC_LITERAL(438, 27),  // "on_actionSettings_triggered"
        QT_MOC_LITERAL(466, 33),  // "on_actionManageAccounts_trigg..."
        QT_MOC_LITERAL(500, 28),  // "on_actionReportBug_triggered"
        QT_MOC_LITERAL(529, 32),  // "on_actionClearMetadata_triggered"
        QT_MOC_LITERAL(562, 27),  // "on_actionOpenWiki_triggered"
        QT_MOC_LITERAL(590, 27),  // "on_actionMoreNews_triggered"
        QT_MOC_LITERAL(618, 17),  // "newsButtonClicked"
        QT_MOC_LITERAL(636, 33),  // "on_actionLaunchInstance_trigg..."
        QT_MOC_LITERAL(670, 40),  // "on_actionLaunchInstanceOfflin..."
        QT_MOC_LITERAL(711, 37),  // "on_actionLaunchInstanceDemo_t..."
        QT_MOC_LITERAL(749, 31),  // "on_actionKillInstance_triggered"
        QT_MOC_LITERAL(781, 33),  // "on_actionDeleteInstance_trigg..."
        QT_MOC_LITERAL(815, 11),  // "deleteGroup"
        QT_MOC_LITERAL(827, 17),  // "undoTrashInstance"
        QT_MOC_LITERAL(845, 33),  // "on_actionExportInstance_trigg..."
        QT_MOC_LITERAL(879, 33),  // "on_actionRenameInstance_trigg..."
        QT_MOC_LITERAL(913, 31),  // "on_actionEditInstance_triggered"
        QT_MOC_LITERAL(945, 41),  // "on_actionCreateInstanceShortc..."
        QT_MOC_LITERAL(987, 7),  // "taskEnd"
        QT_MOC_LITERAL(995, 11),  // "iconUpdated"
        QT_MOC_LITERAL(1007, 23),  // "showInstanceContextMenu"
        QT_MOC_LITERAL(1031, 17),  // "updateMainToolBar"
        QT_MOC_LITERAL(1049, 15),  // "updateToolsMenu"
        QT_MOC_LITERAL(1065, 15),  // "updateThemeMenu"
        QT_MOC_LITERAL(1081, 17),  // "instanceActivated"
        QT_MOC_LITERAL(1099, 11),  // "QModelIndex"
        QT_MOC_LITERAL(1111, 15),  // "instanceChanged"
        QT_MOC_LITERAL(1127, 7),  // "current"
        QT_MOC_LITERAL(1135, 8),  // "previous"
        QT_MOC_LITERAL(1144, 21),  // "instanceSelectRequest"
        QT_MOC_LITERAL(1166, 2),  // "id"
        QT_MOC_LITERAL(1169, 19),  // "instanceDataChanged"
        QT_MOC_LITERAL(1189, 7),  // "topLeft"
        QT_MOC_LITERAL(1197, 11),  // "bottomRight"
        QT_MOC_LITERAL(1209, 12),  // "selectionBad"
        QT_MOC_LITERAL(1222, 9),  // "startTask"
        QT_MOC_LITERAL(1232, 5),  // "Task*"
        QT_MOC_LITERAL(1238, 4),  // "task"
        QT_MOC_LITERAL(1243, 21),  // "defaultAccountChanged"
        QT_MOC_LITERAL(1265, 19),  // "changeActiveAccount"
        QT_MOC_LITERAL(1285, 22),  // "repopulateAccountsMenu"
        QT_MOC_LITERAL(1308, 15),  // "updateNewsLabel"
        QT_MOC_LITERAL(1324, 15),  // "konamiTriggered"
        QT_MOC_LITERAL(1340, 20),  // "globalSettingsClosed"
        QT_MOC_LITERAL(1361, 12),  // "lockToolbars"
        QT_MOC_LITERAL(1374, 15),  // "keyReleaseEvent"
        QT_MOC_LITERAL(1390, 10),  // "QKeyEvent*"
        QT_MOC_LITERAL(1401, 5),  // "event"
        QT_MOC_LITERAL(1407, 22),  // "refreshCurrentInstance"
        QT_MOC_LITERAL(1430, 7)   // "running"
    },
    "MainWindow",
    "isClosing",
    "",
    "onCatToggled",
    "onCatChanged",
    "on_actionAbout_triggered",
    "on_actionAddInstance_triggered",
    "on_actionREDDIT_triggered",
    "on_actionMATRIX_triggered",
    "on_actionDISCORD_triggered",
    "on_actionCopyInstance_triggered",
    "on_actionChangeInstGroup_triggered",
    "on_actionChangeInstIcon_triggered",
    "on_actionViewInstanceFolder_triggered",
    "on_actionViewSelectedInstFolder_triggered",
    "refreshInstances",
    "on_actionViewCentralModsFolder_triggered",
    "checkForUpdates",
    "on_actionSettings_triggered",
    "on_actionManageAccounts_triggered",
    "on_actionReportBug_triggered",
    "on_actionClearMetadata_triggered",
    "on_actionOpenWiki_triggered",
    "on_actionMoreNews_triggered",
    "newsButtonClicked",
    "on_actionLaunchInstance_triggered",
    "on_actionLaunchInstanceOffline_triggered",
    "on_actionLaunchInstanceDemo_triggered",
    "on_actionKillInstance_triggered",
    "on_actionDeleteInstance_triggered",
    "deleteGroup",
    "undoTrashInstance",
    "on_actionExportInstance_triggered",
    "on_actionRenameInstance_triggered",
    "on_actionEditInstance_triggered",
    "on_actionCreateInstanceShortcut_triggered",
    "taskEnd",
    "iconUpdated",
    "showInstanceContextMenu",
    "updateMainToolBar",
    "updateToolsMenu",
    "updateThemeMenu",
    "instanceActivated",
    "QModelIndex",
    "instanceChanged",
    "current",
    "previous",
    "instanceSelectRequest",
    "id",
    "instanceDataChanged",
    "topLeft",
    "bottomRight",
    "selectionBad",
    "startTask",
    "Task*",
    "task",
    "defaultAccountChanged",
    "changeActiveAccount",
    "repopulateAccountsMenu",
    "updateNewsLabel",
    "konamiTriggered",
    "globalSettingsClosed",
    "lockToolbars",
    "keyReleaseEvent",
    "QKeyEvent*",
    "event",
    "refreshCurrentInstance",
    "running"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      55,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  344,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,  345,    2, 0x08,    2 /* Private */,
       4,    1,  348,    2, 0x08,    4 /* Private */,
       5,    0,  351,    2, 0x08,    6 /* Private */,
       6,    0,  352,    2, 0x08,    7 /* Private */,
       7,    0,  353,    2, 0x08,    8 /* Private */,
       8,    0,  354,    2, 0x08,    9 /* Private */,
       9,    0,  355,    2, 0x08,   10 /* Private */,
      10,    0,  356,    2, 0x08,   11 /* Private */,
      11,    0,  357,    2, 0x08,   12 /* Private */,
      12,    0,  358,    2, 0x08,   13 /* Private */,
      13,    0,  359,    2, 0x08,   14 /* Private */,
      14,    0,  360,    2, 0x08,   15 /* Private */,
      15,    0,  361,    2, 0x08,   16 /* Private */,
      16,    0,  362,    2, 0x08,   17 /* Private */,
      17,    0,  363,    2, 0x08,   18 /* Private */,
      18,    0,  364,    2, 0x08,   19 /* Private */,
      19,    0,  365,    2, 0x08,   20 /* Private */,
      20,    0,  366,    2, 0x08,   21 /* Private */,
      21,    0,  367,    2, 0x08,   22 /* Private */,
      22,    0,  368,    2, 0x08,   23 /* Private */,
      23,    0,  369,    2, 0x08,   24 /* Private */,
      24,    0,  370,    2, 0x08,   25 /* Private */,
      25,    0,  371,    2, 0x08,   26 /* Private */,
      26,    0,  372,    2, 0x08,   27 /* Private */,
      27,    0,  373,    2, 0x08,   28 /* Private */,
      28,    0,  374,    2, 0x08,   29 /* Private */,
      29,    0,  375,    2, 0x08,   30 /* Private */,
      30,    0,  376,    2, 0x08,   31 /* Private */,
      31,    0,  377,    2, 0x08,   32 /* Private */,
      32,    0,  378,    2, 0x08,   33 /* Private */,
      33,    0,  379,    2, 0x08,   34 /* Private */,
      34,    0,  380,    2, 0x08,   35 /* Private */,
      35,    0,  381,    2, 0x08,   36 /* Private */,
      36,    0,  382,    2, 0x08,   37 /* Private */,
      37,    1,  383,    2, 0x08,   38 /* Private */,
      38,    1,  386,    2, 0x08,   40 /* Private */,
      39,    0,  389,    2, 0x08,   42 /* Private */,
      40,    0,  390,    2, 0x08,   43 /* Private */,
      41,    0,  391,    2, 0x08,   44 /* Private */,
      42,    1,  392,    2, 0x08,   45 /* Private */,
      44,    2,  395,    2, 0x08,   47 /* Private */,
      47,    1,  400,    2, 0x08,   50 /* Private */,
      49,    2,  403,    2, 0x08,   52 /* Private */,
      52,    0,  408,    2, 0x08,   55 /* Private */,
      53,    1,  409,    2, 0x08,   56 /* Private */,
      56,    0,  412,    2, 0x08,   58 /* Private */,
      57,    0,  413,    2, 0x08,   59 /* Private */,
      58,    0,  414,    2, 0x08,   60 /* Private */,
      59,    0,  415,    2, 0x08,   61 /* Private */,
      60,    0,  416,    2, 0x08,   62 /* Private */,
      61,    0,  417,    2, 0x08,   63 /* Private */,
      62,    1,  418,    2, 0x08,   64 /* Private */,
      63,    1,  421,    2, 0x08,   66 /* Private */,
      66,    1,  424,    2, 0x08,   68 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,    2,
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
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 43,    2,
    QMetaType::Void, 0x80000000 | 43, 0x80000000 | 43,   45,   46,
    QMetaType::Void, QMetaType::QString,   48,
    QMetaType::Void, 0x80000000 | 43, 0x80000000 | 43,   50,   51,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 54,   55,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, 0x80000000 | 64,   65,
    QMetaType::Void, QMetaType::Bool,   67,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'isClosing'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onCatToggled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'onCatChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_actionAbout_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionAddInstance_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionREDDIT_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionMATRIX_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionDISCORD_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionCopyInstance_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionChangeInstGroup_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionChangeInstIcon_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionViewInstanceFolder_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionViewSelectedInstFolder_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'refreshInstances'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionViewCentralModsFolder_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'checkForUpdates'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionSettings_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionManageAccounts_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionReportBug_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionClearMetadata_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionOpenWiki_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionMoreNews_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'newsButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionLaunchInstance_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionLaunchInstanceOffline_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionLaunchInstanceDemo_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionKillInstance_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionDeleteInstance_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'deleteGroup'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'undoTrashInstance'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionExportInstance_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionRenameInstance_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionEditInstance_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_actionCreateInstanceShortcut_triggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'taskEnd'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'iconUpdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'showInstanceContextMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'updateMainToolBar'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateToolsMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateThemeMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'instanceActivated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QModelIndex, std::false_type>,
        // method 'instanceChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'instanceSelectRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'instanceDataChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'selectionBad'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'startTask'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Task *, std::false_type>,
        // method 'defaultAccountChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'changeActiveAccount'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'repopulateAccountsMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateNewsLabel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'konamiTriggered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'globalSettingsClosed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'lockToolbars'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'keyReleaseEvent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QKeyEvent *, std::false_type>,
        // method 'refreshCurrentInstance'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->isClosing(); break;
        case 1: _t->onCatToggled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 2: _t->onCatChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->on_actionAbout_triggered(); break;
        case 4: _t->on_actionAddInstance_triggered(); break;
        case 5: _t->on_actionREDDIT_triggered(); break;
        case 6: _t->on_actionMATRIX_triggered(); break;
        case 7: _t->on_actionDISCORD_triggered(); break;
        case 8: _t->on_actionCopyInstance_triggered(); break;
        case 9: _t->on_actionChangeInstGroup_triggered(); break;
        case 10: _t->on_actionChangeInstIcon_triggered(); break;
        case 11: _t->on_actionViewInstanceFolder_triggered(); break;
        case 12: _t->on_actionViewSelectedInstFolder_triggered(); break;
        case 13: _t->refreshInstances(); break;
        case 14: _t->on_actionViewCentralModsFolder_triggered(); break;
        case 15: _t->checkForUpdates(); break;
        case 16: _t->on_actionSettings_triggered(); break;
        case 17: _t->on_actionManageAccounts_triggered(); break;
        case 18: _t->on_actionReportBug_triggered(); break;
        case 19: _t->on_actionClearMetadata_triggered(); break;
        case 20: _t->on_actionOpenWiki_triggered(); break;
        case 21: _t->on_actionMoreNews_triggered(); break;
        case 22: _t->newsButtonClicked(); break;
        case 23: _t->on_actionLaunchInstance_triggered(); break;
        case 24: _t->on_actionLaunchInstanceOffline_triggered(); break;
        case 25: _t->on_actionLaunchInstanceDemo_triggered(); break;
        case 26: _t->on_actionKillInstance_triggered(); break;
        case 27: _t->on_actionDeleteInstance_triggered(); break;
        case 28: _t->deleteGroup(); break;
        case 29: _t->undoTrashInstance(); break;
        case 30: _t->on_actionExportInstance_triggered(); break;
        case 31: _t->on_actionRenameInstance_triggered(); break;
        case 32: _t->on_actionEditInstance_triggered(); break;
        case 33: _t->on_actionCreateInstanceShortcut_triggered(); break;
        case 34: _t->taskEnd(); break;
        case 35: _t->iconUpdated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 36: _t->showInstanceContextMenu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 37: _t->updateMainToolBar(); break;
        case 38: _t->updateToolsMenu(); break;
        case 39: _t->updateThemeMenu(); break;
        case 40: _t->instanceActivated((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 41: _t->instanceChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 42: _t->instanceSelectRequest((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 43: _t->instanceDataChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2]))); break;
        case 44: _t->selectionBad(); break;
        case 45: _t->startTask((*reinterpret_cast< std::add_pointer_t<Task*>>(_a[1]))); break;
        case 46: _t->defaultAccountChanged(); break;
        case 47: _t->changeActiveAccount(); break;
        case 48: _t->repopulateAccountsMenu(); break;
        case 49: _t->updateNewsLabel(); break;
        case 50: _t->konamiTriggered(); break;
        case 51: _t->globalSettingsClosed(); break;
        case 52: _t->lockToolbars((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 53: _t->keyReleaseEvent((*reinterpret_cast< std::add_pointer_t<QKeyEvent*>>(_a[1]))); break;
        case 54: _t->refreshCurrentInstance((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 45:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Task* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (MainWindow::*)();
            if (_t _q_method = &MainWindow::isClosing; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 55)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 55;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 55)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 55;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::isClosing()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
