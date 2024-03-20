#include <iostream>
// #include<stack>
using namespace std;

class Stack
{
public:
    int *arr;
    int top;
    int size;
    // initialization list
    Stack(int size) : arr(new int[size]), top(-1), size(size){};
    // behaviour
    void push(int data)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = data;
        }
        else
        {
            cout << "Stack OVerflow \n";
        }
    }
    void pop()
    {
        if (top == -1)
        {
            cout << "Stack underflow \n";
        }
        else
        {
            top--;
        }
    }
    int getTop()
    {
        if (top == -1)
        {
            cout << "Stack is Empty";
            return -1;
        }
        return arr[top];
    }
    int getSize()
    {
        return top + 1;
    }
    bool isEmpty()
    {
        if (top == -1)
            return true;
        return false;
    }
};

int main()
{
    Stack s(10);
    // insertion
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    while (!s.isEmpty())
    {
        cout << s.getTop() << " ";
        s.pop();
    }
    cout << "\n";

    // stack<int>st;
    // // insertion
    // st.push(10);
    // st.push(20);
    // st.push(30);
    // st.push(40);
    // // printing Stack
    // while(!st.empty()){
    //     cout<<st.top()<<" ";
    //     st.pop();
    // }
    // cout<<"\n";

    // // remove
    // st.pop();
    // // top element
    // cout<<"Top Element in Stack is "<<st.top()<<"\n";
    // // is empty;
    // if(st.empty()){
    //     cout<<"Stack is empty \n";
    // }else{
    //     cout<<"Stack is not empty \n";
    // }
    // // size of stack;
    // cout<<"Size of Stack is "<<st.size()<<"\n";
    return 0;
}