#ifndef _RUBBER_DUCK_H
#define _RUBBER_DUCK_H
#include "duck.h"
class RubberDuck : public Duck{
RubberDuck(std::shared_ptr<FlyBehaviour> Fly,std::shared_ptr<QuackBehaviour> quack):Duck(fly,quack){};
};
#endif // _RUBBER_DUCK_H
