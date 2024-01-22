/****************************************************************************
** Meta object code from reading C++ file 'LogView.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../launcher/ui/widgets/LogView.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LogView.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSLogViewENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSLogViewENDCLASS = QtMocHelpers::stringData(
    "LogView",
    "setWordWrap",
    "",
    "wrapping",
    "findNext",
    "what",
    "reverse",
    "scrollToBottom",
    "repopulate",
    "rowsInserted",
    "QModelIndex",
    "parent",
    "first",
    "last",
    "rowsAboutToBeInserted",
    "rowsRemoved",
    "modelDestroyed",
    "model"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSLogViewENDCLASS_t {
    uint offsetsAndSizes[36];
    char stringdata0[8];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[9];
    char stringdata4[9];
    char stringdata5[5];
    char stringdata6[8];
    char stringdata7[15];
    char stringdata8[11];
    char stringdata9[13];
    char stringdata10[12];
    char stringdata11[7];
    char stringdata12[6];
    char stringdata13[5];
    char stringdata14[22];
    char stringdata15[12];
    char stringdata16[15];
    char stringdata17[6];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSLogViewENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSLogViewENDCLASS_t qt_meta_stringdata_CLASSLogViewENDCLASS = {
    {
        QT_MOC_LITERAL(0, 7),  // "LogView"
        QT_MOC_LITERAL(8, 11),  // "setWordWrap"
        QT_MOC_LITERAL(20, 0),  // ""
        QT_MOC_LITERAL(21, 8),  // "wrapping"
        QT_MOC_LITERAL(30, 8),  // "findNext"
        QT_MOC_LITERAL(39, 4),  // "what"
        QT_MOC_LITERAL(44, 7),  // "reverse"
        QT_MOC_LITERAL(52, 14),  // "scrollToBottom"
        QT_MOC_LITERAL(67, 10),  // "repopulate"
        QT_MOC_LITERAL(78, 12),  // "rowsInserted"
        QT_MOC_LITERAL(91, 11),  // "QModelIndex"
        QT_MOC_LITERAL(103, 6),  // "parent"
        QT_MOC_LITERAL(110, 5),  // "first"
        QT_MOC_LITERAL(116, 4),  // "last"
        QT_MOC_LITERAL(121, 21),  // "rowsAboutToBeInserted"
        QT_MOC_LITERAL(143, 11),  // "rowsRemoved"
        QT_MOC_LITERAL(155, 14),  // "modelDestroyed"
        QT_MOC_LITERAL(170, 5)   // "model"
    },
    "LogView",
    "setWordWrap",
    "",
    "wrapping",
    "findNext",
    "what",
    "reverse",
    "scrollToBottom",
    "repopulate",
    "rowsInserted",
    "QModelIndex",
    "parent",
    "first",
    "last",
    "rowsAboutToBeInserted",
    "rowsRemoved",
    "modelDestroyed",
    "model"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSLogViewENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   62,    2, 0x0a,    1 /* Public */,
       4,    2,   65,    2, 0x0a,    3 /* Public */,
       7,    0,   70,    2, 0x0a,    6 /* Public */,
       8,    0,   71,    2, 0x09,    7 /* Protected */,
       9,    3,   72,    2, 0x09,    8 /* Protected */,
      14,    3,   79,    2, 0x09,   12 /* Protected */,
      15,    3,   86,    2, 0x09,   16 /* Protected */,
      16,    1,   93,    2, 0x09,   20 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10, QMetaType::Int, QMetaType::Int,   11,   12,   13,
    QMetaType::Void, 0x80000000 | 10, QMetaType::Int, QMetaType::Int,   11,   12,   13,
    QMetaType::Void, 0x80000000 | 10, QMetaType::Int, QMetaType::Int,   11,   12,   13,
    QMetaType::Void, QMetaType::QObjectStar,   17,

       0        // eod
};

Q_CONSTINIT const QMetaObject LogView::staticMetaObject = { {
    QMetaObject::SuperData::link<QPlainTextEdit::staticMetaObject>(),
    qt_meta_stringdata_CLASSLogViewENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSLogViewENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSLogViewENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LogView, std::true_type>,
        // method 'setWordWrap'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'findNext'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'scrollToBottom'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'repopulate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'rowsInserted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'rowsAboutToBeInserted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'rowsRemoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'modelDestroyed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>
    >,
    nullptr
} };

void LogView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LogView *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setWordWrap((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->findNext((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 2: _t->scrollToBottom(); break;
        case 3: _t->repopulate(); break;
        case 4: _t->rowsInserted((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 5: _t->rowsAboutToBeInserted((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 6: _t->rowsRemoved((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[3]))); break;
        case 7: _t->modelDestroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *LogView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LogView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSLogViewENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QPlainTextEdit::qt_metacast(_clname);
}

int LogView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QPlainTextEdit::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
