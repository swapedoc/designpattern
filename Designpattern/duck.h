#ifndef _DUCK_H_
#define _DUCK_H_
#include "fly_behaviour.h"
#include "quack_behaviour.h"
class Duck{
public:
    Duck(std::shared_ptr<FlyBehaviour) fly,std::shared_ptr<QuackBehaviour> quack):fly_behaviour_(fly),quack_behaviour_(quack){}
    void Swim() const;// swim promises not to alter any members of the class
    void Display() const;
    void PerformQuack() const;
    void PerformFly() const;
    void SetFlyBehaviour(std::shared_ptr<FlyBehaviour>);
    void SetQuackBehaviour(std::shared_ptr<QuackBehaviour>);

protected:
    std::shared_ptr<FlyBehaviour> fly_behaviour_;
    std::shared_ptr<QuackBehaviour> quack_behaviour_;

};
#endif // _DUCK_H_
