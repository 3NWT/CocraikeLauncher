/****************************************************************************
** Meta object code from reading C++ file 'PackFetchTask.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../launcher/modplatform/legacy_ftb/PackFetchTask.h"
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
#error "The header file 'PackFetchTask.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSLegacyFTBSCOPEPackFetchTaskENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSLegacyFTBSCOPEPackFetchTaskENDCLASS = QtMocHelpers::stringData(
    "LegacyFTB::PackFetchTask",
    "finished",
    "",
    "ModpackList",
    "publicPacks",
    "thirdPartyPacks",
    "failed",
    "reason",
    "aborted",
    "privateFileDownloadFinished",
    "Modpack",
    "modpack",
    "privateFileDownloadFailed",
    "packCode",
    "fileDownloadFinished",
    "fileDownloadFailed",
    "fileDownloadAborted"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSLegacyFTBSCOPEPackFetchTaskENDCLASS_t {
    uint offsetsAndSizes[34];
    char stringdata0[25];
    char stringdata1[9];
    char stringdata2[1];
    char stringdata3[12];
    char stringdata4[12];
    char stringdata5[16];
    char stringdata6[7];
    char stringdata7[7];
    char stringdata8[8];
    char stringdata9[28];
    char stringdata10[8];
    char stringdata11[8];
    char stringdata12[26];
    char stringdata13[9];
    char stringdata14[21];
    char stringdata15[19];
    char stringdata16[20];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSLegacyFTBSCOPEPackFetchTaskENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSLegacyFTBSCOPEPackFetchTaskENDCLASS_t qt_meta_stringdata_CLASSLegacyFTBSCOPEPackFetchTaskENDCLASS = {
    {
        QT_MOC_LITERAL(0, 24),  // "LegacyFTB::PackFetchTask"
        QT_MOC_LITERAL(25, 8),  // "finished"
        QT_MOC_LITERAL(34, 0),  // ""
        QT_MOC_LITERAL(35, 11),  // "ModpackList"
        QT_MOC_LITERAL(47, 11),  // "publicPacks"
        QT_MOC_LITERAL(59, 15),  // "thirdPartyPacks"
        QT_MOC_LITERAL(75, 6),  // "failed"
        QT_MOC_LITERAL(82, 6),  // "reason"
        QT_MOC_LITERAL(89, 7),  // "aborted"
        QT_MOC_LITERAL(97, 27),  // "privateFileDownloadFinished"
        QT_MOC_LITERAL(125, 7),  // "Modpack"
        QT_MOC_LITERAL(133, 7),  // "modpack"
        QT_MOC_LITERAL(141, 25),  // "privateFileDownloadFailed"
        QT_MOC_LITERAL(167, 8),  // "packCode"
        QT_MOC_LITERAL(176, 20),  // "fileDownloadFinished"
        QT_MOC_LITERAL(197, 18),  // "fileDownloadFailed"
        QT_MOC_LITERAL(216, 19)   // "fileDownloadAborted"
    },
    "LegacyFTB::PackFetchTask",
    "finished",
    "",
    "ModpackList",
    "publicPacks",
    "thirdPartyPacks",
    "failed",
    "reason",
    "aborted",
    "privateFileDownloadFinished",
    "Modpack",
    "modpack",
    "privateFileDownloadFailed",
    "packCode",
    "fileDownloadFinished",
    "fileDownloadFailed",
    "fileDownloadAborted"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSLegacyFTBSCOPEPackFetchTaskENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   62,    2, 0x06,    1 /* Public */,
       6,    1,   67,    2, 0x06,    4 /* Public */,
       8,    0,   70,    2, 0x06,    6 /* Public */,
       9,    1,   71,    2, 0x06,    7 /* Public */,
      12,    2,   74,    2, 0x06,    9 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      14,    0,   79,    2, 0x09,   12 /* Protected */,
      15,    1,   80,    2, 0x09,   13 /* Protected */,
      16,    0,   83,    2, 0x09,   15 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    4,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    7,   13,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject LegacyFTB::PackFetchTask::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSLegacyFTBSCOPEPackFetchTaskENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSLegacyFTBSCOPEPackFetchTaskENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSLegacyFTBSCOPEPackFetchTaskENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PackFetchTask, std::true_type>,
        // method 'finished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<ModpackList, std::false_type>,
        QtPrivate::TypeAndForceComplete<ModpackList, std::false_type>,
        // method 'failed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'aborted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'privateFileDownloadFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Modpack, std::false_type>,
        // method 'privateFileDownloadFailed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'fileDownloadFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'fileDownloadFailed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'fileDownloadAborted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void LegacyFTB::PackFetchTask::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PackFetchTask *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->finished((*reinterpret_cast< std::add_pointer_t<ModpackList>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<ModpackList>>(_a[2]))); break;
        case 1: _t->failed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->aborted(); break;
        case 3: _t->privateFileDownloadFinished((*reinterpret_cast< std::add_pointer_t<Modpack>>(_a[1]))); break;
        case 4: _t->privateFileDownloadFailed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 5: _t->fileDownloadFinished(); break;
        case 6: _t->fileDownloadFailed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->fileDownloadAborted(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PackFetchTask::*)(ModpackList , ModpackList );
            if (_t _q_method = &PackFetchTask::finished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PackFetchTask::*)(QString );
            if (_t _q_method = &PackFetchTask::failed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PackFetchTask::*)();
            if (_t _q_method = &PackFetchTask::aborted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PackFetchTask::*)(Modpack );
            if (_t _q_method = &PackFetchTask::privateFileDownloadFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PackFetchTask::*)(QString , QString );
            if (_t _q_method = &PackFetchTask::privateFileDownloadFailed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject *LegacyFTB::PackFetchTask::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *LegacyFTB::PackFetchTask::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSLegacyFTBSCOPEPackFetchTaskENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int LegacyFTB::PackFetchTask::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void LegacyFTB::PackFetchTask::finished(ModpackList _t1, ModpackList _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LegacyFTB::PackFetchTask::failed(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void LegacyFTB::PackFetchTask::aborted()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void LegacyFTB::PackFetchTask::privateFileDownloadFinished(Modpack _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void LegacyFTB::PackFetchTask::privateFileDownloadFailed(QString _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
