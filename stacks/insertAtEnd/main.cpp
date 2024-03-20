#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int>&st, int& target){
    if(st.empty()){
        st.push(target);
        return;
    }
    int temp = st.top();
    st.pop();
    solve(st, target);
    st.push(temp);
    return;
}

void insertAtEnd(stack<int> &st)
{
    if(st.empty()){
        cout<<"Stack is empty \n";
    }
    int target = st.top();
    st.pop();
    solve(st, target);
}

int main()
{
    stack<int> st;
    st.push(5);
    st.push(15);
    st.push(27);
    st.push(32);
    st.push(11);
    insertAtEnd(st);
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << "\n";
    return 0;
}