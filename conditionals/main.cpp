#include<iostream>
using namespace std;
int main() {
    int marks;
    cin>>marks;
    if(marks >= 90){
        cout<<"A"<<endl;
    }else if(marks >= 80){
        cout<<"B"<<endl;
    }else if(marks >= 60){
        cout<<"C"<<endl;
    }else if(marks >= 40){
        cout<<"D"<<endl;
    }else {
        cout<<"F"<<endl;
    }

    // int age;
    // cout<<"Enter the age ";
    // cin>>age;
    // if(age<18){
    //     cout<<"I can't vote"<<endl;
    // }else{
    //     cout<<"I can vote"<<endl;
    // }
    return 0;
}