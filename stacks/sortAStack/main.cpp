#include <iostream>
#include <stack>
using namespace std;

void solve(stack<int> &st, int target)
{
    if (st.empty())
    {
        st.push(target);
        return;
    }
    if (st.top() >= target)
    {
        st.push(target);
        return;
    }
    int topElement = st.top();
    st.pop();
    solve(st, target);
    st.push(topElement);
}

void sortStack(stack<int> &st)
{
    if (st.empty())
        return;
    int top = st.top();
    st.pop();
    sortStack(st);
    solve(st, top);
}

int main()
{
    stack<int> st;
    st.push(9);
    st.push(5);
    st.push(3);
    st.push(11);
    st.push(7);
    sortStack(st);
    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }
    cout << "\n";
    return 0;
}