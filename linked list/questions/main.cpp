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

void removeDuplicates(Node *&head)
{
    if (head == NULL)
    {
        cout << "Ll is empty \n";
        return;
    }
    Node *curr = head;
    while (curr != NULL)
    {
        if ((curr->next != NULL) && (curr->data == curr->next->data))
        {
            Node *temp = curr->next;
            curr->next = curr->next->next;
            temp->next = NULL;
            delete temp;
        }
        else
        {
            curr = curr->next;
        }
    }
}

void sortZeroOneTwo(Node *&head)
{
    int zeroCount = 0;
    int oneCount = 0;
    int twoCount = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data == 0)
        {
            zeroCount++;
        }
        if (temp->data == 1)
        {
            oneCount++;
        }
        if (temp->data == 2)
        {
            twoCount++;
        }
        temp = temp->next;
    }
    temp = head;
    while (temp != NULL)
    {
        // fill zeros
        while (zeroCount--)
        {
            temp->data = 0;
            temp = temp->next;
        }
        while (oneCount--)
        {
            temp->data = 1;
            temp = temp->next;
        }
        while (twoCount--)
        {
            temp->data = 2;
            temp = temp->next;
        }
    }
}

Node *sort2(Node *&head)
{
    Node *zeroHead = new Node(-1);
    Node *zeroTail = zeroHead;
    Node *oneHead = new Node(-1);
    Node *oneTail = oneHead;
    Node *twoHead = new Node(-1);
    Node *twoTail = twoHead;

    Node *curr = head;
    while (curr != NULL)
    {
        if (curr->data == 0)
        {
            Node *temp = curr;
            curr = curr->next;
            temp->next = NULL;

            zeroTail->next = temp;
            zeroTail = temp;
        }
        else if (curr->data == 1)
        {
            Node *temp = curr;
            curr = curr->next;
            temp->next = NULL;

            oneTail->next = temp;
            oneTail = temp;
        }
        else if (curr->data == 2)
        {
            Node *temp = curr;
            curr = curr->next;
            temp->next = NULL;

            twoTail->next = temp;
            twoTail = temp;
        }
    }

    Node *temp = oneHead;
    oneHead = oneHead->next;
    temp->next = NULL;
    delete temp;

    temp = twoHead;
    twoHead = twoHead->next;
    temp->next = NULL;
    delete temp;

    if (oneHead != NULL)
    {
        zeroTail->next = oneHead;
        if (twoHead != NULL)
        {
            oneTail->next = twoHead;
        }
    }
    else if (twoHead != NULL)
    {
        zeroTail->next = twoHead;
    }

    temp = zeroHead;
    zeroHead = zeroHead->next;
    temp->next = NULL;
    delete temp;

    return zeroHead;
}

Node *solve(Node *&head1, Node *&head2)
{
    // reverse boath LL;
    head1 = reverseLL(head1);
    head2 = reverseLL(head2);

    // add
    Node *ansHead = NULL;
    Node *ansTail = NULL;
    int carry = 0;

    while (head1 != NULL && head2 != NULL)
    {
        int sum = carry + head1->data + head2->data;
        int digit = sum % 10;
        carry = sum / 10;

        Node *newNode = new Node(digit);
        if (ansHead == NULL)
        {
            ansHead = newNode;
            ansTail = newNode;
        }
        else
        {
            ansTail->next = newNode;
            ansTail = newNode;
        }

        head1 = head1->next;
        head2 = head2->next;
    }

    while (head1 != NULL)
    {
        int sum = carry + head1->data;
        int digit = sum % 10;
        carry = sum / 10;

        Node *newNode = new Node(digit);
        ansTail->next = newNode;
        ansTail = newNode;
        head1 = head1->next;
    }

    while (head2 != NULL)
    {
        int sum = carry + head2->data;
        int digit = sum % 10;
        carry = sum / 10;

        Node *newNode = new Node(digit);
        ansTail->next = newNode;
        ansTail = newNode;
        head2 = head2->next;
    }

    while (carry != 0)
    {
        int sum = carry;
        int digit = sum % 10;
        carry = sum / 10;

        Node *newNode = new Node(digit);
        ansTail->next = newNode;
        ansTail = newNode;
    }

    Node *finalAns = reverseLL(ansHead);

    return finalAns;
}

int main()
{
    Node *head1 = new Node(2);
    Node *second1 = new Node(4);
    head1->next = second1;
    second1->next = NULL;
    Node *head2 = new Node(2);
    Node *second2 = new Node(3);
    Node *third2 = new Node(4);
    head2->next = second2;
    second2->next = third2;
    third2->next = NULL;

    cout << "Input LL \n";
    print(head1);
    print(head2);

    Node *ans = solve(head1, head2);
    cout << "Output LL\n";
    print(ans);

    // Node *first = new Node(2);
    // Node *second = new Node(2);
    // Node *third = new Node(2);
    // Node *fourth = new Node(2);
    // Node *fifth = new Node(2);
    // Node *sixth = new Node(2);

    // first->next = second;
    // second->next = third;
    // third->next = fourth;
    // fourth->next = fifth;
    // fifth->next = sixth;

    // cout << "Printing LL \n";
    // print(first);
    // first  = sort2(first);
    // cout << "Print sorted 0s, 1's and 2's \n";
    // print(first);

    // cout << "Removed Duplicated from LL \n";
    // removeDuplicates(first);
    // print(first);

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