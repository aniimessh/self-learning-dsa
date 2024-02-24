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

Node *getMiddle(Node *&head)
{
    if (head == NULL)
    {
        cout << "Linked List is Empty\n";
        return head;
    }
    if (head->next == NULL)
    {
        return head;
    }

    Node *slow = head;
    Node *fast = head;
    while (slow != NULL && fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
    }
    return slow;
}

Node *reverseKNode(Node *head, int k)
{
    if (head == NULL)
    {
        cout << "LL is empty\n";
        return head;
    }
    Node *curr = head;
    Node *prev = NULL;
    int count = 0;
    Node *forward = curr->next;
    while (count < k)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
        count++;
    }
    if (forward != NULL)
    {
        head->next = reverseKNode(forward, k);
    }
    return prev;
}

Node *startingPointOfLoop(Node *&head)
{
    if (head == NULL)
    {
        cout << "LL id empty \n";
        return NULL;
    }
    Node *slow = head;
    Node *fast = head;

    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }

        if (slow == fast)
        {
            slow = head;
            break;
        }
    }
    while (slow != fast)
    {
        slow = slow->next;
        fast = fast->next;
    }
    return slow;
}

Node *removeLoop(Node *&head)
{
    if (head == NULL)
    {
        cout << "LL id empty \n";
        return NULL;
    }
    Node *slow = head;
    Node *fast = head;

    while (fast != NULL)
    {
        fast = fast->next;
        if (fast != NULL)
        {
            fast = fast->next;
            slow = slow->next;
        }
        if (slow == fast)
        {
            slow = head;
            break;
        }
    }
    Node *prev = fast;
    while (slow != fast)
    {
        prev = fast;
        slow = slow->next;
        fast = fast->next;
    }
    prev->next = NULL;
    return slow;
}

int main()
{
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    Node *fourth = new Node(40);
    Node *fifth = new Node(50);
    Node *sixth = new Node(60);
    Node *seventh = new Node(70);
    Node *eighth = new Node(80);
    Node *ninth = new Node(90);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;
    sixth->next = seventh;
    seventh->next = eighth;
    eighth->next = ninth;
    ninth->next = fifth;

    cout << "Starting Point of Loop is \n"
         << startingPointOfLoop(first)->data << "\n";
         removeLoop(first);

    cout << "Printing LL \n";
    print(first);
    // cout << "Printing Reversed LL By K \n";
    // first = reverseKNode(first, 3);
    // print(first);

    // cout << "Middle Node Of LL is: \n";
    // Node *head = first;
    // Node *tail = fifth;
    // Node *middle = getMiddle(head);
    // cout << middle->data << " \n";
    // int middleIndex = findMiddle(head, tail);
    // printParticularIndex(head, middleIndex);

    // Node *prev = NULL;
    // Node *curr = first;
    // first = reverse(prev, curr);

    // cout << "Reversed LL \n";
    // print(first);
    return 0;
}