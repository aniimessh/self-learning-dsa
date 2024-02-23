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
    return reverse(curr, forward);
}

int getLength(Node *&head)
{
    Node *temp = head;
    int length = 0;
    while (temp != NULL)
    {
        length++;
        temp = temp->next;
    }
    return length;
}

int findMiddle(Node *&head, Node *&tail)
{
    int length = getLength(head);
    if (length % 2 == 0)
    {
        return length / 2;
    }
    return (length / 2) + 1;
}

void printParticularIndex(Node *&head, int index)
{
    Node *temp = head;
    int i = 1;
    while (i != index)
    {
        temp = temp->next;
        i++;
    }
    if (i == index)
    {
        cout << temp->data << " \n";
    }
}

int main()
{
    Node *first = new Node(5);
    Node *second = new Node(10);
    Node *third = new Node(15);
    Node *fourth = new Node(20);
    Node *fifth = new Node(25);
    // Node *sixth = new Node(60);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = NULL;
    // sixth->next = NULL;

    cout << "Printing LL \n";
    print(first);

    cout << "Middle Node Of LL is: \n";
    Node *head = first;
    Node *tail = fifth;
    int middleIndex = findMiddle(head, tail);
    printParticularIndex(head, middleIndex);

    // Node *prev = NULL;
    // Node *curr = first;
    // first = reverse(prev, curr);

    // cout << "Reversed LL \n";
    // print(first);
    return 0;
}