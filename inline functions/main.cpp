#include <iostream>
using namespace std;

// this inline keyword, will go to every line in the main functin
// where the function the called and replace it with cout<<num<<endl;
// and this is how, in our stack, the entry will not be created mulitple times
inline void showNum(int num)
{
    cout<<num<<endl;
}

int main()
{
    showNum(10);
    showNum(10);

    showNum(10);
    showNum(10);
    showNum(10);
    showNum(10);

    showNum(10);
    showNum(10);

    showNum(10);
    return 0;
}