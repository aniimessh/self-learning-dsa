#include <iostream>
using namespace std;

class Stack
{
public:
    int *arr;
    int size;
    int top1;
    int top2;

    Stack(int size) : arr(new int[size]), top1(-1), top2(size), size(size){};

    // functions
    void push1(int data)
    {
        if (top2 - top1 == 1)
        {
            cout << "Stack Overflow in stack 1 \n";
            return;
        }
        top1++;
        arr[top1] = data;
    }
    void pop1()
    {
        if(top1 == -1){
            cout<<"Stack Underflow in stack 1 \n";
            return;
        }
        top1--;
    }
    void push2(int data)
    {
        if(top2 - top2 == 1){
            cout<<"Stack Overflow in stack 2 \n";
            return;
        }
        top2--;
        arr[top2] = data;
    }
    void pop2()
    {
         if(top2 == size){
            cout<<"Stack Underflow in stack 2 \n";
            return;
        }
        top2++;
    }
};

int main()
{   
    Stack st(10);
    st.push1(10);
    st.push1(20);
    st.push1(30);
    st.push1(40);
    st.push2(50);
    st.push2(60);
    return 0;
}