#ifndef _QUACKER_H
#define _QUACKER_H
#include "quack_behaviour.h"
#include <memory>
class Quacker : public QuackBehaviour{
public:
    void Quack() const;
};
#endif // _QUACKER_H
