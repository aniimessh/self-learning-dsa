#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
    string str1 = "C++ Programming";
    str1.erase(3,5);
    cout<<str1<<endl;

    // string word = "abcd";
    // int i = 0;
    // for(int i=0;i<word.length();i++){
    //     for(int j=i;j<word.length();j++){
    //         for (int k = i; k <= j; k++) {
    //             cout << word[k]<<" ";
    //         }
    //         cout<<endl;
    //     }
    // }
    return 0;
}