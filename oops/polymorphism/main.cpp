#include<iostream>
using namespace std;

// class Math{
//     public:
//     int number1;
//     // Math(){
//     //     number1 = 7;
//     // };
//     // operator overloading;
//     void operator+(Math& num2){
//       int value1 = this->number1;
//       int value2 = num2.number1;
//       cout<<value2 - value1<<endl;
//     };
//     int operator-(Math&num2){
//         int value1 = this->number1;
//         int value2 = num2.number1;
//         return value1+value2;
//     }
//     void print(){
//         cout<<"This value is now "<<number1<<endl;
//     };
// };

class Animal{
    public:
    virtual void speak(){
        cout<<"Animesh is speaking"<<endl;
    };
};

class Dog: public Animal{
    public:
    // this is called function overriding
    void speak(){
        cout<<"Dog is barking"<<endl;
    };
};

int main(){
    Animal*a = new Dog();
    a->speak(); // The speak method of dog will be now called here, because the speak() of Animal id defined virtually;
    // Dog*d1 = new Dog();
    // d1->speak();
    // Animal*a = new Animal();
    // a->speak();
    // Animal a;
    // a.speak();

    // Math obj1, obj2;
    // obj1.number1 = 10;
    // obj2.number1 = 30;
    // obj1 + obj2;
    // int sum = obj1 - obj2;
    // cout<<"Sum is "<<sum<<endl;
    return 0;
}