#include <iostream>
#include <memory>

#include "duck.h"
#include "mallard_duck.h"
#include "decoy_duck.h"

#include "fly_behaviour.h"
#include "quack_behaviour.h"
#include "fly_no_way.h"
#include "fly_with_wings.h"
#include "quacker.h"
#include "fly_rocket_powered.h"
#include "model_duck.h"
#include "mute_quack.h"

int main()
{
    std::shared_ptr<FlyBehaviour> no_fly =
        std::make_shared<FlyNoWay>(FlyNoWay());
    std::shared_ptr<QuackBehaviour> quack =
        std::shared_ptr<QuackBehaviour>(new Quacker());
    Duck my_mallard = MallardDuck(no_fly, quack);

    my_mallard.PerformFly();
    my_mallard.PerformQuack();

    // Change run-time behaviour
    std::shared_ptr<FlyBehaviour> fly =
        std::shared_ptr<FlyBehaviour>(new FlyWithWings());
    my_mallard.SetFlyBehaviour(fly);
    my_mallard.PerformFly();

    /* --- */
    Duck decoy_duck = DecoyDuck(no_fly, quack);
    std::shared_ptr<FlyBehaviour> fly_rocket_powered=  std::shared_ptr<FlyBehaviour>(new FlyRocketPowered());
    Duck my_model_duck= ModelDuck(fly_rocket_powered,quack);
    my_model_duck.PerformFly();
    my_model_duck.PerformQuack();
    std::shared_ptr<QuackBehaviour> no_quack=std::shared_ptr<QuackBehaviour>(new MuteQuack());
    my_model_duck.SetQuackBehaviour(no_quack);
    my_model_duck.PerformQuack();
    return 0;
}
