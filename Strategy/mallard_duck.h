#ifndef _MALLARD_DUCK_H_
#define _MALLARD_DUCK_H_
#include "duck.h"
#include <memory>
#include <tr1/memory>
class MallardDuck: public Duck{
public:
    MallardDuck(std::shared_ptr<FlyBehaviour> fly, std::shared_ptr<QuackBehaviour> quack):Duck(fly,quack){}
};
#endif // _MALLARD_DUCK_H_

