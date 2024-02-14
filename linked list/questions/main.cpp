#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    // initlialisation list
    Node(int data, Node *next = NULL) : data(data), next(NULL) {}
};

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node *reverse(Node *&prev, Node *&curr)
{
    // base case;
    if (curr == NULL)
    {
        return prev;
    }
    Node *forward = curr->next;
    curr->next = prev;
    reverse(curr, forward);
}
int main()
{
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = NULL;

    cout << "Printing LL \n";
    print(first);

    Node *prev = NULL;
    Node *curr = first;
    first = reverse(prev, curr);

    cout << "Reversed LL \n";
    print(first);
    return 0;
}