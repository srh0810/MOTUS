/****************************************************************************
** Meta object code from reading C++ file 'game.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../game.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'game.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.2. It"
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
struct qt_meta_tag_ZN4GameE_t {};
} // unnamed namespace


#ifdef QT_MOC_HAS_STRINGDATA
static constexpr auto qt_meta_stringdata_ZN4GameE = QtMocHelpers::stringData(
    "Game",
    "currentWordChanged",
    "",
    "maskedWordChanged",
    "attemptsLeftChanged",
    "currentAttemptChanged",
    "gameStateChanged",
    "gameStarted",
    "gameEnded",
    "won",
    "wordLengthChanged",
    "scoreChanged",
    "gridChanged",
    "keyboardStateChanged",
    "currentGuessChanged",
    "invalidWord",
    "letterInserted",
    "row",
    "col",
    "letter",
    "startNewGame",
    "checkGuess",
    "QVariantList",
    "guess",
    "isValidWord",
    "word",
    "abandonGame",
    "keyPressed",
    "key",
    "backspacePressed",
    "enterPressed",
    "resetCurrentGuess",
    "getCellInfo",
    "QVariantMap",
    "getKeyStatus",
    "currentWord",
    "maskedWord",
    "attemptsLeft",
    "currentAttempt",
    "gameWon",
    "gameLost",
    "gameActive",
    "wordLength",
    "score",
    "grid",
    "keyboardState",
    "currentGuess"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA

Q_CONSTINIT static const uint qt_meta_data_ZN4GameE[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
      12,  202, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      14,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  158,    2, 0x06,   13 /* Public */,
       3,    0,  159,    2, 0x06,   14 /* Public */,
       4,    0,  160,    2, 0x06,   15 /* Public */,
       5,    0,  161,    2, 0x06,   16 /* Public */,
       6,    0,  162,    2, 0x06,   17 /* Public */,
       7,    0,  163,    2, 0x06,   18 /* Public */,
       8,    1,  164,    2, 0x06,   19 /* Public */,
      10,    0,  167,    2, 0x06,   21 /* Public */,
      11,    0,  168,    2, 0x06,   22 /* Public */,
      12,    0,  169,    2, 0x06,   23 /* Public */,
      13,    0,  170,    2, 0x06,   24 /* Public */,
      14,    0,  171,    2, 0x06,   25 /* Public */,
      15,    0,  172,    2, 0x06,   26 /* Public */,
      16,    3,  173,    2, 0x06,   27 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      20,    0,  180,    2, 0x02,   31 /* Public */,
      21,    1,  181,    2, 0x02,   32 /* Public */,
      24,    1,  184,    2, 0x02,   34 /* Public */,
      26,    0,  187,    2, 0x02,   36 /* Public */,
      27,    1,  188,    2, 0x02,   37 /* Public */,
      29,    0,  191,    2, 0x02,   39 /* Public */,
      30,    0,  192,    2, 0x02,   40 /* Public */,
      31,    0,  193,    2, 0x02,   41 /* Public */,
      32,    2,  194,    2, 0x02,   42 /* Public */,
      34,    1,  199,    2, 0x102,   45 /* Public | MethodIsConst  */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString,   17,   18,   19,

 // methods: parameters
    QMetaType::Void,
    0x80000000 | 22, QMetaType::QString,   23,
    QMetaType::Bool, QMetaType::QString,   25,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   28,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 33, QMetaType::Int, QMetaType::Int,   17,   18,
    QMetaType::QString, QMetaType::QString,   28,

 // properties: name, type, flags, notifyId, revision
      35, QMetaType::QString, 0x00015001, uint(0), 0,
      36, QMetaType::QString, 0x00015001, uint(1), 0,
      37, QMetaType::Int, 0x00015001, uint(2), 0,
      38, QMetaType::Int, 0x00015001, uint(3), 0,
      39, QMetaType::Bool, 0x00015001, uint(4), 0,
      40, QMetaType::Bool, 0x00015001, uint(4), 0,
      41, QMetaType::Bool, 0x00015001, uint(4), 0,
      42, QMetaType::Int, 0x00015103, uint(7), 0,
      43, QMetaType::Int, 0x00015001, uint(8), 0,
      44, 0x80000000 | 22, 0x00015009, uint(9), 0,
      45, 0x80000000 | 22, 0x00015009, uint(10), 0,
      46, QMetaType::QString, 0x00015001, uint(11), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject Game::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_ZN4GameE.offsetsAndSizes,
    qt_meta_data_ZN4GameE,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_tag_ZN4GameE_t,
        // property 'currentWord'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'maskedWord'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'attemptsLeft'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'currentAttempt'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'gameWon'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'gameLost'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'gameActive'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'wordLength'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'score'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'grid'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // property 'keyboardState'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // property 'currentGuess'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Game, std::true_type>,
        // method 'currentWordChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'maskedWordChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'attemptsLeftChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'currentAttemptChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'gameStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'gameStarted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'gameEnded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'wordLengthChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'scoreChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'gridChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'keyboardStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'currentGuessChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'invalidWord'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'letterInserted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'startNewGame'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'checkGuess'
        QtPrivate::TypeAndForceComplete<QVariantList, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'isValidWord'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'abandonGame'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'keyPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'backspacePressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'enterPressed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resetCurrentGuess'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'getCellInfo'
        QtPrivate::TypeAndForceComplete<QVariantMap, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'getKeyStatus'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void Game::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    auto *_t = static_cast<Game *>(_o);
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: _t->currentWordChanged(); break;
        case 1: _t->maskedWordChanged(); break;
        case 2: _t->attemptsLeftChanged(); break;
        case 3: _t->currentAttemptChanged(); break;
        case 4: _t->gameStateChanged(); break;
        case 5: _t->gameStarted(); break;
        case 6: _t->gameEnded((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->wordLengthChanged(); break;
        case 8: _t->scoreChanged(); break;
        case 9: _t->gridChanged(); break;
        case 10: _t->keyboardStateChanged(); break;
        case 11: _t->currentGuessChanged(); break;
        case 12: _t->invalidWord(); break;
        case 13: _t->letterInserted((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 14: _t->startNewGame(); break;
        case 15: { QVariantList _r = _t->checkGuess((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 16: { bool _r = _t->isValidWord((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 17: _t->abandonGame(); break;
        case 18: _t->keyPressed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 19: _t->backspacePressed(); break;
        case 20: _t->enterPressed(); break;
        case 21: _t->resetCurrentGuess(); break;
        case 22: { QVariantMap _r = _t->getCellInfo((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])));
            if (_a[0]) *reinterpret_cast< QVariantMap*>(_a[0]) = std::move(_r); }  break;
        case 23: { QString _r = _t->getKeyStatus((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    }
    if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _q_method_type = void (Game::*)();
            if (_q_method_type _q_method = &Game::currentWordChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _q_method_type = void (Game::*)();
            if (_q_method_type _q_method = &Game::maskedWordChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _q_method_type = void (Game::*)();
            if (_q_method_type _q_method = &Game::attemptsLeftChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _q_method_type = void (Game::*)();
            if (_q_method_type _q_method = &Game::currentAttemptChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _q_method_type = void (Game::*)();
            if (_q_method_type _q_method = &Game::gameStateChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _q_method_type = void (Game::*)();
            if (_q_method_type _q_method = &Game::gameStarted; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _q_method_type = void (Game::*)(bool );
            if (_q_method_type _q_method = &Game::gameEnded; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _q_method_type = void (Game::*)();
            if (_q_method_type _q_method = &Game::wordLengthChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _q_method_type = void (Game::*)();
            if (_q_method_type _q_method = &Game::scoreChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _q_method_type = void (Game::*)();
            if (_q_method_type _q_method = &Game::gridChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _q_method_type = void (Game::*)();
            if (_q_method_type _q_method = &Game::keyboardStateChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _q_method_type = void (Game::*)();
            if (_q_method_type _q_method = &Game::currentGuessChanged; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _q_method_type = void (Game::*)();
            if (_q_method_type _q_method = &Game::invalidWord; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _q_method_type = void (Game::*)(int , int , const QString & );
            if (_q_method_type _q_method = &Game::letterInserted; *reinterpret_cast<_q_method_type *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
    }
    if (_c == QMetaObject::ReadProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->currentWord(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->maskedWord(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->attemptsLeft(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->currentAttempt(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->gameWon(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->gameLost(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->gameActive(); break;
        case 7: *reinterpret_cast< int*>(_v) = _t->wordLength(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->score(); break;
        case 9: *reinterpret_cast< QVariantList*>(_v) = _t->grid(); break;
        case 10: *reinterpret_cast< QVariantList*>(_v) = _t->keyboardState(); break;
        case 11: *reinterpret_cast< QString*>(_v) = _t->currentGuess(); break;
        default: break;
        }
    }
    if (_c == QMetaObject::WriteProperty) {
        void *_v = _a[0];
        switch (_id) {
        case 7: _t->setWordLength(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    }
}

const QMetaObject *Game::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Game::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ZN4GameE.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int Game::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    }
    if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 24)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 24;
    }
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void Game::currentWordChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Game::maskedWordChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Game::attemptsLeftChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void Game::currentAttemptChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void Game::gameStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void Game::gameStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void Game::gameEnded(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void Game::wordLengthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void Game::scoreChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void Game::gridChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void Game::keyboardStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void Game::currentGuessChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void Game::invalidWord()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void Game::letterInserted(int _t1, int _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}
QT_WARNING_POP
