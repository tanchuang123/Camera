/****************************************************************************
** Meta object code from reading C++ file 'onevideo.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.9.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../LiveCamera/onevideo.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'onevideo.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.9.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_OneVideo_t {
    QByteArrayData data[12];
    char stringdata0[127];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_OneVideo_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_OneVideo_t qt_meta_stringdata_OneVideo = {
    {
QT_MOC_LITERAL(0, 0, 8), // "OneVideo"
QT_MOC_LITERAL(1, 9, 11), // "closeSignal"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 9), // "OneVideo*"
QT_MOC_LITERAL(4, 32, 3), // "who"
QT_MOC_LITERAL(5, 36, 11), // "playBtnSlot"
QT_MOC_LITERAL(6, 48, 13), // "cameraBtnSlot"
QT_MOC_LITERAL(7, 62, 13), // "recordBtnSlot"
QT_MOC_LITERAL(8, 76, 17), // "fullScreenBtnSlot"
QT_MOC_LITERAL(9, 94, 11), // "updateImage"
QT_MOC_LITERAL(10, 106, 5), // "image"
QT_MOC_LITERAL(11, 112, 14) // "disconnectSlot"

    },
    "OneVideo\0closeSignal\0\0OneVideo*\0who\0"
    "playBtnSlot\0cameraBtnSlot\0recordBtnSlot\0"
    "fullScreenBtnSlot\0updateImage\0image\0"
    "disconnectSlot"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_OneVideo[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    0,   54,    2, 0x08 /* Private */,
       8,    0,   55,    2, 0x08 /* Private */,
       9,    1,   56,    2, 0x08 /* Private */,
      11,    0,   59,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QImage,   10,
    QMetaType::Void,

       0        // eod
};

void OneVideo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        OneVideo *_t = static_cast<OneVideo *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->closeSignal((*reinterpret_cast< OneVideo*(*)>(_a[1]))); break;
        case 1: _t->playBtnSlot(); break;
        case 2: _t->cameraBtnSlot(); break;
        case 3: _t->recordBtnSlot(); break;
        case 4: _t->fullScreenBtnSlot(); break;
        case 5: _t->updateImage((*reinterpret_cast< QImage(*)>(_a[1]))); break;
        case 6: _t->disconnectSlot(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OneVideo* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        void **func = reinterpret_cast<void **>(_a[1]);
        {
            typedef void (OneVideo::*_t)(OneVideo * );
            if (*reinterpret_cast<_t *>(func) == static_cast<_t>(&OneVideo::closeSignal)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject OneVideo::staticMetaObject = {
    { &QFrame::staticMetaObject, qt_meta_stringdata_OneVideo.data,
      qt_meta_data_OneVideo,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *OneVideo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OneVideo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_OneVideo.stringdata0))
        return static_cast<void*>(const_cast< OneVideo*>(this));
    return QFrame::qt_metacast(_clname);
}

int OneVideo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void OneVideo::closeSignal(OneVideo * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
