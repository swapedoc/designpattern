#ifndef _MODEL_DUCK_H_
#define _MODEL_DUCK_H_
#include "duck.h"
#include <memory>
class ModelDuck :  public Duck{
public:
    ModelDuck(std::shared_ptr<FlyBehaviour> fly,
              std::shared_ptr<QuackBehaviour> quack) : Duck(fly, quack) {}
};
#endif // _MODEL_DUCK_H
