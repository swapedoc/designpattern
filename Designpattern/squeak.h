#ifndef _SQUEAK_H
#define _SQUEAK_H
#include "quack_behaviour.h"
#include <memory>
class Squeak : public QuackBehaviour{
public:
    void Quack() const;
};
#endif // _SQUEAK_H
