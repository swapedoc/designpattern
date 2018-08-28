#ifndef _FLY_WITH_WINGS_H
#define _FLY_WITH_WINGS_H
#include "fly_behaviour.h"
#include <memory>
class FlyWithWings : public FlyBehaviour{
public:
    void Fly() const;
};
#endif // FLY_WITH_WINGS
