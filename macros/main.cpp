#include <iostream>
using namespace std;

// define MACROS
#define PI 3.14
#define MAXX(x, y) (x > y ? x : y)

float areaOfCircle(float r)
{
    return PI * r * r;
}

float parameterOfCircle(float r)
{
    return 2 * PI * r;
}

void fun(){
    int a = 10;
    int b = 6;
    int c = MAXX(a, b);
    cout<<c<<endl;
}

int main()
{
    cout << areaOfCircle(2) << endl;
    fun();
    return 0;
}