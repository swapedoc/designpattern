#include<iostream>
#include "duck.h"
#include "mallard_duck.h"
#include "fly_behaviour.h"
#include "quack_behaviour.h"
#include "decoy_duck.h"
#include "fly_no_way.h"
#include "fly_with_wings.h"
#include "quacker.h"

int main(){
    std::shared_ptr<FlyBehaviour> no_fly= std::make_shared<FlyNoWay>(FlyNoWay());
    std::shared_ptr<QuackBehaviour> quack= std::make_shared<new Quacker());
    Duck my_mallard = MallardDuck(no_fly,quack);
    my_mallard.PerformFly();
    my_mallard.PerformQuack();
    std::shared_ptr<FlyBehaviour> fly= std::make_shared<FlyBehaviour>(new FlyWithWings());
    my_mallard.SetFlyBehaviour(fly);
    my_mallard.PerformFly();

    Duck decoy_duck = DecoyDuck(no_fly,quack);
    return 0;
}
