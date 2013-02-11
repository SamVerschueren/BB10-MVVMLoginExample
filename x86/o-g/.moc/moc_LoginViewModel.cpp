/****************************************************************************
** Meta object code from reading C++ file 'LoginViewModel.hpp'
**
** Created by: The Qt Meta Object Compiler version 63 (Qt 4.8.4)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../src/ViewModels/LoginViewModel.hpp"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'LoginViewModel.hpp' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 63
#error "This file was generated using the moc from 4.8.4. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_LoginViewModel[] = {

 // content:
       6,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       3,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: signature, parameters, type, tag, flags
      24,   16,   15,   15, 0x05,
      57,   48,   15,   15, 0x05,
      91,   82,   15,   15, 0x05,

 // methods: signature, parameters, type, tag, flags
     116,   15,   15,   15, 0x02,

 // properties: name, type, flags
      16,  124, 0x0a495801,
      48,  124, 0x0a495903,
      82,  124, 0x0a495903,

 // properties: notify_signal_id
       0,
       1,
       2,

       0        // eod
};

static const char qt_meta_stringdata_LoginViewModel[] = {
    "LoginViewModel\0\0message\0messageChanged(QString)\0"
    "username\0usernameChanged(QString)\0"
    "password\0passwordChanged(QString)\0"
    "login()\0QString\0"
};

void LoginViewModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Q_ASSERT(staticMetaObject.cast(_o));
        LoginViewModel *_t = static_cast<LoginViewModel *>(_o);
        switch (_id) {
        case 0: _t->messageChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->usernameChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 2: _t->passwordChanged((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 3: _t->login(); break;
        default: ;
        }
    }
}

const QMetaObjectExtraData LoginViewModel::staticMetaObjectExtraData = {
    0,  qt_static_metacall 
};

const QMetaObject LoginViewModel::staticMetaObject = {
    { &QObject::staticMetaObject, qt_meta_stringdata_LoginViewModel,
      qt_meta_data_LoginViewModel, &staticMetaObjectExtraData }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &LoginViewModel::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *LoginViewModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *LoginViewModel::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_LoginViewModel))
        return static_cast<void*>(const_cast< LoginViewModel*>(this));
    return QObject::qt_metacast(_clname);
}

int LoginViewModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
#ifndef QT_NO_PROPERTIES
      else if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = getMessage(); break;
        case 1: *reinterpret_cast< QString*>(_v) = getUsername(); break;
        case 2: *reinterpret_cast< QString*>(_v) = getPassword(); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 1: setUsername(*reinterpret_cast< QString*>(_v)); break;
        case 2: setPassword(*reinterpret_cast< QString*>(_v)); break;
        }
        _id -= 3;
    } else if (_c == QMetaObject::ResetProperty) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 3;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 3;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void LoginViewModel::messageChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void LoginViewModel::usernameChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void LoginViewModel::passwordChanged(QString _t1)
{
    void *_a[] = { 0, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_END_MOC_NAMESPACE
