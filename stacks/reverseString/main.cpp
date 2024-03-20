#include<iostream>
#include<stack>
using namespace std;
int main(){
    string str = "Animesh";
    stack<char> name;
    for(int i=0;i<str.length();i++){
        name.push(str[i]);
    }
    while(!name.empty()){
        cout<<name.top()<<" ";
        name.pop();
    }
    cout<<"\n";
}