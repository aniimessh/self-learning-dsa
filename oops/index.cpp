#include<iostream>
using namespace std;

class Animal{
    private:
    int age;
    int weight;

    public:
    void eat(){
        cout<<"Eating"<<endl;
    };
    int getAge(){
        return this->age;
    };
    void setAge(int age){
        this->age = age;
    }
};

class Dog:public Animal{

};

int main(){
    Dog*d1 = new Dog;
    d1->setAge(15);
    cout<<d1->getAge()<<endl;
    return 0;
}