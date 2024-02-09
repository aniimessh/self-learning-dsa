#include <iostream>
#if !defined(BIRD_H)
#define BIRD_H

class Bird{
public:
    virtual void eat() = 0; // This is called pure virtual function, this acts a interface
    virtual void fly() = 0;
    // classes that iherit this class
    // has to use these pure function
};

class Sparrow: public Bird{
    void eat(){
        std::cout<<"Sparrow is eating\n";
    }
    void fly(){
        std::cout<<"Sparrow is flying\n";
    }
};

class Eagle: public Bird{
    void eat(){
        std::cout<<"Eagle is eating\n";
    }
    void fly(){
        std::cout<<"Eagle is flying\n";
    }
};


#endif // BIRD_H
