/****************************************************************************
** Meta object code from reading C++ file 'ChatItemMsgFile.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../chatmessage/chatItemMsgFile/ChatItemMsgFile.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ChatItemMsgFile.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.3. It"
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
struct qt_meta_stringdata_CLASSChatItemMsgFileENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSChatItemMsgFileENDCLASS = QtMocHelpers::stringData(
    "ChatItemMsgFile",
    "onBtnMoreOptionClicked",
    "",
    "onMenuClicked",
    "QAction*",
    "action",
    "showRightClickMenu",
    "pos",
    "openFile",
    "url",
    "openFolder",
    "forward"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSChatItemMsgFileENDCLASS_t {
    uint offsetsAndSizes[24];
    char stringdata0[16];
    char stringdata1[23];
    char stringdata2[1];
    char stringdata3[14];
    char stringdata4[9];
    char stringdata5[7];
    char stringdata6[19];
    char stringdata7[4];
    char stringdata8[9];
    char stringdata9[4];
    char stringdata10[11];
    char stringdata11[8];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSChatItemMsgFileENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSChatItemMsgFileENDCLASS_t qt_meta_stringdata_CLASSChatItemMsgFileENDCLASS = {
    {
        QT_MOC_LITERAL(0, 15),  // "ChatItemMsgFile"
        QT_MOC_LITERAL(16, 22),  // "onBtnMoreOptionClicked"
        QT_MOC_LITERAL(39, 0),  // ""
        QT_MOC_LITERAL(40, 13),  // "onMenuClicked"
        QT_MOC_LITERAL(54, 8),  // "QAction*"
        QT_MOC_LITERAL(63, 6),  // "action"
        QT_MOC_LITERAL(70, 18),  // "showRightClickMenu"
        QT_MOC_LITERAL(89, 3),  // "pos"
        QT_MOC_LITERAL(93, 8),  // "openFile"
        QT_MOC_LITERAL(102, 3),  // "url"
        QT_MOC_LITERAL(106, 10),  // "openFolder"
        QT_MOC_LITERAL(117, 7)   // "forward"
    },
    "ChatItemMsgFile",
    "onBtnMoreOptionClicked",
    "",
    "onMenuClicked",
    "QAction*",
    "action",
    "showRightClickMenu",
    "pos",
    "openFile",
    "url",
    "openFolder",
    "forward"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSChatItemMsgFileENDCLASS[] = {

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
       3,    1,   51,    2, 0x08,    2 /* Private */,
       6,    1,   54,    2, 0x08,    4 /* Private */,
       8,    1,   57,    2, 0x08,    6 /* Private */,
      10,    1,   60,    2, 0x08,    8 /* Private */,
      11,    1,   63,    2, 0x08,   10 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::QPoint,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,

       0        // eod
};

Q_CONSTINIT const QMetaObject ChatItemMsgFile::staticMetaObject = { {
    QMetaObject::SuperData::link<ChatItemMsg::staticMetaObject>(),
    qt_meta_stringdata_CLASSChatItemMsgFileENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSChatItemMsgFileENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSChatItemMsgFileENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ChatItemMsgFile, std::true_type>,
        // method 'onBtnMoreOptionClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onMenuClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAction *, std::false_type>,
        // method 'showRightClickMenu'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'openFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'openFolder'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'forward'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>
    >,
    nullptr
} };

void ChatItemMsgFile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ChatItemMsgFile *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->onBtnMoreOptionClicked(); break;
        case 1: _t->onMenuClicked((*reinterpret_cast< std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 2: _t->showRightClickMenu((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 3: _t->openFile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->openFolder((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->forward((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *ChatItemMsgFile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChatItemMsgFile::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSChatItemMsgFileENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return ChatItemMsg::qt_metacast(_clname);
}

int ChatItemMsgFile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ChatItemMsg::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
