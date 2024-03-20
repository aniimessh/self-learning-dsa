#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int> &st, int &target)
{
    if (st.empty())
    {
        st.push(target);
        return;
    }
    int temp = st.top();
    st.pop();
    solve(st, target);
    st.push(temp);
    return;
}

void reverseStack(stack<int> &st)
{
    if (st.empty())
    {
        return;
    }
    int topElement = st.top();
    st.pop();
    reverseStack(st);
    solve(st, topElement);
    return;
}

int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    reverseStack(st);
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << "\n";
    return 0;
}