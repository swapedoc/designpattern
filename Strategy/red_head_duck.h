#ifndef _RED_HEAD_DUCK_H
#define _RED_HEAD_DUCK_H
#include "duck.h"
#include <memory>
class RedHeadDuck : public Duck{
public:
    RedHeadDuck(std::shared_ptr<FlyBehaviour> fly.std::shared_ptr<QuackBehaviour> quack):Duck(fly,quack){}
};
#endif // _RED_HEAD_DUCK_H
