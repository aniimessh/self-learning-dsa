#include <iostream>
using namespace std;

class abc
{
public:
    int x;
    int *y;

    abc(int _x, int _y) : x(_x), y(new int(_y)) {}

    // default dump copy constructor;
    // abc(const abc& obj){
    //     x = obj.x;
    //     y = obj.y;
    // };
    // our smart copy constructor DEEP COPY
    abc(const abc &obj)
    {
        x = obj.x;
        y = new int(*obj.y);
    }
    void print() const
    {
        cout << "Value of x is " << this->x << endl;
        cout << "Pointer value of Y is " << y << endl;
        cout << "Value of y is x " << *this->y << endl;
    };

    ~abc()
    {
        delete y;
    }
};

int main()
{
    abc a(1, 2);
    a.print();

    cout << endl;

    abc b = a;
    *b.y = 20;
    b.print();

    cout << endl;
    a.print();
    // delete a;
    return 0;
}