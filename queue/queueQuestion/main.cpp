#include <iostream>
#include <queue>
#include <stack>
#include <vector>
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
    if (k == 0 || k > q.size())
        return;
    stack<int> s;
    int count = 0;
    while (!q.empty())
    {
        int element = q.front();
        q.pop();
        s.push(element);
        count++;
        if (count == k)
            break;
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
        if (count == q.size() - k)
            break;
    }
}

void interleaveQueue(queue<int> &q)
{
    int k = q.size() / 2;
    int count = 0;
    queue<int> q2;
    while (!q.empty())
    {
        int temp = q.front();
        q.pop();
        q2.push(temp);
        count++;
        if (count == k)
            break;
    }

    while (!q.empty() && !q2.empty())
    {
        int first = q2.front();
        q2.pop();
        q.push(first);
        int second = q.front();
        q.pop();
        q.push(second);
    }

    if (q.size() & 1)
    {
        int temp = q.front();
        q.pop();
        q.push(temp);
    }
}

void solve(vector<int> &arr, int size, int k)
{
    deque<int> q;
    for (int i = 0; i < k; i++)
    {
        if (arr[i] < 0)
        {
            q.push_back(i);
        }
    }

    for (int i = k; i < size; i++)
    {
        if (q.empty())
        {
            cout << 0 << " \n";
        }
        else
        {
            cout << arr[q.front()] << " ";
        }

        // remove out of window element
        while ((!q.empty()) && (i - q.front() >= k))
        {
            q.pop_front();
        }

        if (arr[i] < 0)
        {
            q.push_back(i);
        }
    }

    if (q.empty())
    {
        cout << 0 << " \n";
    }
    else
    {
        cout << arr[q.front()] << " ";
    }
}

int main()
{
    vector<int> arr{12, -1, -7, 8, -15, 30, 16, 28};
    int size = arr.size();
    int k = 3;
    solve(arr, size, k);

    // queue<int> q;
    // q.push(10);
    // q.push(20);
    // q.push(30);
    // q.push(40);
    // q.push(50);
    // q.push(60);
    // q.push(70);
    // q.push(80);

    // interleaveQueue(q);

    // while (!q.empty())
    // {
    //     cout << q.front() << " ";
    //     q.pop();
    // }
    return 0;
}