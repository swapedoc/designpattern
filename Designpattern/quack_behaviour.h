//abstract class having a pure virtual function
#ifndef _QUACK_BEHAVIOUR_H
#define _QUACK_BEHAVIOUR_H
class QuackBehaviour{
public:
    QuackBehaviour(){};
    virtual ~QuackBehaviour(){}; //RAII , virtual destructor so base class object dont accidently try to delete this interface object
    virtual void Quack() const = 0;
};
#endif // _QUACK_BEHAVIOUR_H
