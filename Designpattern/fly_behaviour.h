//abstract class having a pure virtual function
#ifndef _FLY_BEHAVIOUR_H
#define _FLY_BEHAVIOUR_H
class FlyBehaviour{
public:
    FlyBehaviour(){}
    virtual ~FlyBehaviour(){} //RAII since shared pointer not used
    virtual void Fly() const = 0;
};
#endif // _FLY_BEHAVIOUR_H
