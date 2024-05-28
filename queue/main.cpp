#include<iostream>
#include<queue>
using namespace std;
int main() {
    queue<int>q;
    // insertion
    q.push(5);
    q.push(15);
    q.push(25);
    q.push(55);

    // size of queue
    cout<<"Size of Queue is: "<<q.size()<<"\n";

    // removal
    q.pop();

    // size of queue
    cout<<"Size of Queue is: "<<q.size()<<"\n";

    // empty or not
    if(q.empty()){
        cout<<"Queue is Empty"<<endl;
    }else{
        cout<<"Queue is not empty"<<endl;
    }

    // front element
    cout<<"Front element is "<<q.front()<<endl;
    return 0;
}