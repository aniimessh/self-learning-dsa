#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void reverseQ(queue<int> &q)
{
    stack<int> s;
    while (!q.empty())
    {
        int element = q.front();
        q.pop();

        s.push(element);
    }

    while (!s.empty())
    {
        int element = s.top();
        s.pop();

        q.push(element);
    }
}

void reverseQrecursion(queue<int> &q)
{
    // base case;
    if (q.empty())
    {
        return;
    }
    int temp = q.front();
    q.pop();
    reverseQrecursion(q);

    q.push(temp);
}

void reverseKElement(queue<int> &q, int k)
{
    if(k == 0 || k > q.size()) return;
    stack<int> s;
    int count = 0;
    while (!q.empty())
    {
        int element = q.front();
        q.pop();
        s.push(element);
        count++;
        if(count == k) break;
    }
    while (!s.empty())
    {
        int temp = s.top();
        s.pop();
        q.push(temp);
    }

    count = 0;
    while (!q.empty() && q.size() - k != 0)
    {
        int temp = q.front();
        q.pop();
        q.push(temp);
        count++;
        if(count == q.size() - k) break;
    }
}

int main()
{
    queue<int> q;
    q.push(3);
    q.push(6);
    q.push(9);
    q.push(12);
    q.push(15);

    reverseKElement(q, 50);
    // reverseQrecursion(q);

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }
    return 0;
}