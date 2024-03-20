#include <iostream>
#include <stack>
using namespace std;

void findMiddle(stack<int> &st, int &size)
{
    if (st.size() == size + 1)
    {
        cout << "Middle element is " << st.top() << " \n";
        return;
    }
    int temp = st.top();
    st.pop();
    findMiddle(st, size);
    st.push(temp);
}

int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    st.push(50);
    st.push(60);
    st.push(70);
    int middle = st.size() / 2;
    findMiddle(st, middle);

    // string str = "Animesh";
    // stack<char> name;
    // for(int i=0;i<str.length();i++){
    //     name.push(str[i]);
    // }
    // while(!name.empty()){
    //     cout<<name.top()<<" ";
    //     name.pop();
    // }
    // cout<<"\n";
    return 0;
}