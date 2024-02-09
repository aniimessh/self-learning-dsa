#include <iostream>
using namespace std;
class abc
{
    int x;
    int *y;
    const int z;

public:
    // Ye tarika thoda kezual hai
    // abc(int _x, int _y, int _z = 0)
    // {
    //     x = _x;
    //     y = new int(_y);
    //     z = _z;
    // }
    // initialisation list
    abc(int _x, int _y, int _z = 0) : x(_x), y(new int(_y)), z(_z)
    {
        cout << "Inside initilisation list" << endl;
        *y = *y * 10;
    };
    int getX() const
    {
        return this->x;
    }
    void setX(int _val)
    {
        this->x = _val;
    }
    int getY() const
    {
        return *this->y;
    }
    void setY(int _val)
    {
        *this->y = _val;
    }
    int getZ() const
    {
        return this->z;
    }
};

void printAbc(const abc &a)
{
    cout << a.getX() << " " << a.getY() << " " << a.getZ() << endl;
}

int main()
{
    abc a(1, 2, 3);
    printAbc(a);
    return 0;
}

int main2()
{
    // IMP: CONST POINTER, CONST DATA;
    // const int *const a = new int(2);
    // cout << *a << endl;
    // *a = 20; // can't change the Ponter data

    // IMP: CONST POINTER, NON-CONST DATA
    // int *const a = new int(2);
    // cout<<*a<<endl;
    // *a = 20;
    // cout<<*a<<endl;
    // delete a;

    // IMP: CONST DATA, NON-CONST POINTER
    // const int *a  = new int(2);
    // // *a = 20; //  a cannot be modified,
    // int b = 20;
    // a = &b; // * but we can modify variable a
    // cout<<*a<<endl;

    // int *a  = new int;
    // *a = 2;
    // cout<<*a<<endl;
    // delete a;
    // int b = 5;
    // a = &b;
    // cout<<*a<<endl;

    // const int x = 5; // x is constant
    // cout<<x<<endl;
    return 0;
}