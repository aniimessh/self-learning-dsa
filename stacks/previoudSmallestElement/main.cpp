#include <iostream>
#include <vector>
#include <stack>
using namespace std;
int main()
{
    vector<int> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(4);
    v.push_back(3);
    stack<int> st;
    st.push(-1);
    vector<int> ans(v.size());
    for (int i = 0; i < v.size(); i++)
    {
        int currElement = v[i];
        while (st.top() >= currElement)
        {
            st.pop();
        }
        ans[i] = st.top();
        st.push(currElement);
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
    cout << "\n";
    return 0;
}