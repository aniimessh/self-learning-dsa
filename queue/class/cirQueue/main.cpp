#include <iostream>
using namespace std;

class CirQueue
{
public:
    int size;
    int *arr;
    int front;
    int rear;

    CirQueue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = -1;
        rear = -1;
    };
    void push(int data)
    {
        if ((front == 0 && rear == size - 1) && front == rear + 1)
        {
            cout << "Queue is full\n";
        }
        else if (front == -1 && rear == -1)
        {
            front = 0, rear = 0;
            arr[rear] = data;
            rear++;
        }
        else if (rear == size - 1 && front != 0)
        {
            rear = 0;
            arr[rear] = data;
        }
        else
        {
            rear++;
            arr[rear] = data;
        }
    }
    void pop()
    {
        if (front == -1 && rear == -1)
        {
            cout << "Queue is empty \n";
        }
        else if (front == 0 && rear == 0)
        {
            arr[front] = -1;
            front = -1;
            rear = -1;
        }
        else if (front == size - 1)
        {
            front = 0;
        }
        else
        {
            arr[front] = -1;
            front++;
        }
    }
};

int main()
{

    return 0;
}