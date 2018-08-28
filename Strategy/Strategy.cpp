#include<iostream>
using namespace std;
class Duck{
public:
    void quack(){
        cout<<"Quack";
    };
    void swim(){
        cout<<"I swim";
    };
    void display(){
        cout<<"duck";
    };
    void fly(){
        cout<<"i fly";
    };
};

class Mallard: public Duck{
public:
    void display(){
        cout<<"Mallard duck";
    };
};

class RedheadDuck: public Duck{
public:
    void display(){
        cout<<"Redhead duck";
    };
};

class RubberDuck: public Duck{
public:
    void display(){
        cout<<"Rubber duck";
        return;
    };
};

int main()
{
RubberDuck p1;
p1.display();
cout<<endl;
std::cout<<"displaying"<<p1.display();
//p1.fly();
return 0;
}
