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

bool isLoopPresent(Node *&head)
{
    if (head == NULL)
    {
        cout << "LL is Empty \n";
        return false;
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
            return true;
        }
    }
    return false;
}

Node *reverseLL(Node *&head)
{
    if (head == NULL)
    {
        cout << "LL cannot be reversed \n";
        return NULL;
    }
    Node *prev = NULL;
    Node *curr = head;
    Node *forward = curr->next;
    while (curr != NULL)
    {
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
    return prev;
}

bool checkPalindrome(Node *&head)
{
    if (head == NULL)
    {
        cout << "LL is empty \n";
        return false;
    }
    if (head->next == NULL)
    {
        return true;
    }
    // Step A: find middle
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
    }
    Node *reverse = reverseLL(slow->next);
    slow->next = reverse;

    // StepC: start comparing
    Node *temp1 = head;
    Node *temp2 = reverse;
    while (temp2 != NULL)
    {
        if (temp1->data != temp2->data)
        {
            return false;
        }
        else
        {
            temp1 = temp1->next;
            temp2 = temp2->next;
        }
    }
    return true;
}

// Node* removeDuplicates()

int main()
{
    Node *first = new Node(1);
    Node *second = new Node(2);
    Node *third = new Node(2);
    Node *fourth = new Node(3);
    Node *fifth = new Node(4);
    Node *sixth = new Node(4);

    first->next = second;
    second->next = third;
    third->next = fourth;
    fourth->next = fifth;
    fifth->next = sixth;

    cout << "Printing LL \n";
    print(first);

    // bool isPalindrome = checkPalindrome(first);
    // if (isPalindrome)
    // {
    //     cout << "LL is a valid palindrome \n";
    // }
    // else
    // {
    //     cout << "LL is not a valid palindrome \n";
    // }

    // cout << "Is Loop Present \n"
    //      << isLoopPresent(first) << " \n";

    // if (isLoopPresent(first) == true)
    // {
    //     cout << "Starting Point of Loop is \n"
    //          << startingPointOfLoop(first)->data << "\n";
    //     removeLoop(first);
    // }

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