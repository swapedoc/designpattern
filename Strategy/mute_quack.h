#ifndef _MUTE_QUACK_H
#define _MUTE_QUACK_H
#include "quack_behaviour.h"
#include <memory>
class MuteQuack : public QuackBehaviour{
    void Quack() const;
};
#endif
