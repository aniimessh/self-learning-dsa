#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // initialisation list
    Node(int data = 0, Node *prev = NULL, Node *next = NULL) : data(data), prev(NULL), next(NULL){};

    ~Node()
    {
        cout << "Value of selected position is deleted" << endl;
    }
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

int getLength(Node *&head)
{
    Node *temp = head;
    int len = 0;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAtHead(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    Node *newNode = new Node(data);
    newNode->next = head;
    head->prev = newNode;
    head = newNode;
}

void insertAtTail(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    Node *newNode = new Node(data);
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void insertAtPosition(Node *&head, Node *&tail, int data, int position)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    if (position == 1)
    {
        insertAtHead(head, tail, data);
        return;
    }
    int length = getLength(head);
    if (position >= length)
    {
        insertAtTail(head, tail, data);
        return;
    }
    int i = 1;
    Node *prev = head;
    while (i < position - 1)
    {
        prev = prev->next;
        i++;
    }
    Node *curr = prev->next;
    Node *newNode = new Node(data);
    prev->next = newNode;
    newNode->prev = prev;
    curr->prev = newNode;
    newNode->next = curr;
}

void deletionAtHead(Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        cout << "Linked List is Empty \n";
        return;
    }
    Node *temp = head;
    head = head->next;
    head->prev = NULL;
    temp->next = NULL;
    delete (temp);
}

void deleteAtATail(Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        cout << "Linked List is Empty \n";
        return;
    }
    Node *temp = tail;
    tail = tail->prev;
    tail->next = NULL;
    temp->prev = NULL;
    delete (temp);
}

void deletionAtPos(Node *&head, Node *&tail, int position)
{
    if (head == NULL)
    {
        cout << "Linked List is Empty \n";
        return;
    }
    if (position == 1)
    {
        deletionAtHead(head, tail);
        return;
    }
    int length = getLength(head);
    if (position > length)
    {
        cout<<"Please enter a valid position \n";
        return;
    }
    if (position == length)
    {
        deleteAtATail(head, tail);
        return;
    }
    int i = 1;
    Node *left = head;
    while(i<position - 1){
        left = left->next;
        i++;  
    }
    Node *curr = left->next;
    Node *right = curr->next;
    left->next = right;
    right->prev = left;
    curr->prev = NULL;
    curr->next = NULL;
    delete(curr);
}

int main()
{
    Node *first = new Node(10);
    Node *second = new Node(20);
    Node *third = new Node(30);
    first->next = second;
    second->prev = first;
    second->next = third;
    third->prev = second;
    cout << "Printing LL: \n";
    print(first);
    cout << "Head -> " << first->data << endl;
    cout << "Tail -> " << third->data << endl;
    // insertAtTail(first, third, 101);
    // cout << "=========\n";
    // print(first);
    // cout << "Head -> " << first->data << endl;
    // cout << "Tail -> " << third->data << endl;
    // insertAtHead(first, third, 5);
    // cout << "=========\n";
    // print(first);
    // cout << "Head -> " << first->data << endl;
    // cout << "Tail -> " << third->data << endl;
    // insertAtPosition(first, third, 201, 6);
    // cout << "=========\n";
    // print(first);
    // cout << "Head -> " << first->data << endl;
    // cout << "Tail -> " << third->data << endl;
    // deletionAtHead(first, third);
    // cout << "=========\n";
    // print(first);
    // cout << "Head -> " << first->data << endl;
    // cout << "Tail -> " << third->data << endl;
    // deleteAtATail(first, third);
    // print(first);
    // cout << "Head -> " << first->data << endl;
    // cout << "Tail -> " << third->data << endl;
    deletionAtPos(first, third, 3);
    print(first);
    cout << "Head -> " << first->data << endl;
    cout << "Tail -> " << third->data << endl;
    return 0;
}