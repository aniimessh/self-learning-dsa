#include<iostream>
#include<string>
using namespace std;

class Animal{
    public:
    // state
    int age;
    string name;

    // default constructor
    Animal(){
        // initilization
        this->age = 0;
        this->name = "";
        cout<<"Constructor Called"<<endl;
    };

    // parameterised constructor
    Animal(int age){
        this->age = age;
        cout<<this->age<<endl;
        cout<<"Parametrised Constructor Called"<<endl;
    };

    // copy constructor
    Animal(Animal& obj){
        this->age = obj.age;
        this->name = obj.name;
        this->weight = obj.weight;
        cout<<"Inside Copy Constructor"<<endl;
    };

    // private state
    private:
    int weight;


    // behaviour
    public:
    void eat(){
        cout<<"Eating"<<endl;
    };
    void sleep(){
        cout<<"Sleeping"<<endl;
    };

    int getWeight(){
        return weight;
    }

    void setWeight(int weight){
        this->weight = weight;
    }
};

int main(){
    Animal a;
    Animal b = a;

    // dynamic
    // Animal* animesh = new Animal(15);
    // animesh->eat();
    // animesh->setWeight(56);
    // cout<<"Weight "<<animesh->getWeight()<<endl;

    // static
    // Animal animesh;
    // animesh.age = 21;
    // animesh.name = "Dog";
    // cout<<"Age of animesh is "<<animesh.age<<endl;
    // cout<<"name of animesd is "<<animesh.name<<endl;
    // animesh.setWeight(56);
    // cout<<"Weight "<<animesh.getWeight()<<endl;
    // animesh.eat();
}