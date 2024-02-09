#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data = 0, int *next = NULL) : data(data), next(NULL){};
    ~Node(){
        cout<<"Value of selected position if deleted"<<endl;
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
    cout << "\n";
}

void insertAtHead(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        tail = newNode;
        head = newNode;
        return;
    }
    Node *newNode = new Node(data);
    newNode->next = head;
    head = newNode;
}

void insertAtend(Node *&head, Node *&tail, int data)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        tail = newNode;
        head = newNode;
        return;
    }
    Node *newNode = new Node(data);
    if (tail == NULL)
    {
        tail = newNode;
        head = newNode;
    }
    else
    {
        tail->next = newNode;
    }
    tail = newNode;
}

int findLength(Node *&head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        temp = temp->next;
        len++;
    }
    return len;
}

void insertAtPosition(int data, int position, Node *&head, Node *&tail)
{
    // if LL is empty
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    if (position == 0)
    {
        insertAtHead(head, tail, data);
        return;
    }
    int length = findLength(head);
    if (position >= length)
    {
        insertAtend(head, tail, data);
        return;
    }
    // step 1 find the position
    int i = 1;
    Node *prev = head;
    while (i < position)
    {
        prev = prev->next;
        i++;
    }
    Node *curr = prev->next;

    // step 2: create a node;
    Node *newNode = new Node(data);

    // step 3
    newNode->next = curr;

    // step 4:
    prev->next = newNode;
}

void deleteNode(int position, Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        cout << "Cannot delete, LL is empty" << endl;
    }

    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete (temp);
        return;
    }

    int length = findLength(head);
    if (position == length)
    {
        // find prev
        Node *prev = head;
        int i = 1;
        while (i < position - 1)
        {
            prev = prev->next;
            i++;
        }
        // step 2:
        prev->next = NULL;
        // step 3:
        Node *temp = tail;
        // /step4:
        tail = prev;
        // step5:
        delete (temp);
        return;
    }

    int i = 1;
    Node* prev = head;
    while(i<position - 1){
        prev = prev->next;
        i++;
    }
    Node * curr = prev->next;
    prev->next = curr->next;
    curr->next = NULL;
    delete(curr);
}

int main()
{
    Node *first = NULL;
    Node *tail = NULL;
    insertAtHead(first, tail, 20);
    insertAtHead(first, tail, 30);
    insertAtHead(first, tail, 40);
    insertAtHead(first, tail, 50);
    insertAtend(first, tail, 60);
    cout << "Printing LL\n";
    print(first);
    cout << "============\n";
    deleteNode(2, first, tail);
    cout << "Printing LL\n";
    print(first);
    // cout << "Head: " << first->data << endl;
    // cout << "tail: " << tail->data << endl;

    // insertAtPosition(101, 6, first, tail);
    // print(first);
    // cout << "Head: " << first->data << endl;
    // cout << "tail: " << tail->data << endl;

    // Node*first = new Node(10);
    // Node*second = new Node(20);
    // Node*third = new Node(30);
    // Node*fourth = new Node(40);
    // Node*fifth = new Node(50);
    // first->next = second;
    // second->next = third;
    // third->next = fourth;
    // fourth->next = fifth;
    // cout<<"Prinintg LL \n";
    // print(first);
    return 0;
}