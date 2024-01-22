/****************************************************************************
** Meta object code from reading C++ file 'PageContainer.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../launcher/ui/widgets/PageContainer.h"
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PageContainer.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSPageContainerENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSPageContainerENDCLASS = QtMocHelpers::stringData(
    "PageContainer",
    "selectedPageChanged",
    "",
    "BasePage*",
    "previous",
    "selected",
    "help",
    "currentChanged",
    "QModelIndex",
    "current",
    "showPage",
    "row"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSPageContainerENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[14];
    char stringdata1[20];
    char stringdata2[1];
    char stringdata3[10];
    char stringdata4[9];
    char stringdata5[9];
    char stringdata6[5];
    char stringdata7[15];
    char stringdata8[12];
    char stringdata9[8];
    char stringdata10[9];
    char stringdata11[4];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSPageContainerENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSPageContainerENDCLASS_t qt_meta_stringdata_CLASSPageContainerENDCLASS = {
    {
        QT_MOC_LITERAL(0, 13),  // "PageContainer"
        QT_MOC_LITERAL(14, 19),  // "selectedPageChanged"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 9),  // "BasePage*"
        QT_MOC_LITERAL(45, 8),  // "previous"
        QT_MOC_LITERAL(54, 8),  // "selected"
        QT_MOC_LITERAL(63, 4),  // "help"
        QT_MOC_LITERAL(68, 14),  // "currentChanged"
        QT_MOC_LITERAL(83, 11),  // "QModelIndex"
        QT_MOC_LITERAL(95, 7),  // "current"
        QT_MOC_LITERAL(103, 8),  // "showPage"
        QT_MOC_LITERAL(112, 3)   // "row"
    },
    "PageContainer",
    "selectedPageChanged",
    "",
    "BasePage*",
    "previous",
    "selected",
    "help",
    "currentChanged",
    "QModelIndex",
    "current",
    "showPage",
    "row"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSPageContainerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   38,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,   43,    2, 0x0a,    4 /* Public */,
       7,    1,   44,    2, 0x08,    5 /* Private */,
      10,    1,   47,    2, 0x08,    7 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::Int,   11,

       0        // eod
};

Q_CONSTINIT const QMetaObject PageContainer::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSPageContainerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSPageContainerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSPageContainerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PageContainer, std::true_type>,
        // method 'selectedPageChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<BasePage *, std::false_type>,
        QtPrivate::TypeAndForceComplete<BasePage *, std::false_type>,
        // method 'help'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'currentChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'showPage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void PageContainer::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PageContainer *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->selectedPageChanged((*reinterpret_cast< std::add_pointer_t<BasePage*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<BasePage*>>(_a[2]))); break;
        case 1: _t->help(); break;
        case 2: _t->currentChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 3: _t->showPage((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PageContainer::*)(BasePage * , BasePage * );
            if (_t _q_method = &PageContainer::selectedPageChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *PageContainer::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PageContainer::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSPageContainerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "BasePageContainer"))
        return static_cast< BasePageContainer*>(this);
    return QWidget::qt_metacast(_clname);
}

int PageContainer::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void PageContainer::selectedPageChanged(BasePage * _t1, BasePage * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
