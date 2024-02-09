#include<iostream>
#include <cmath>
using namespace std;

int decimalToBinary1(int n){
    int binaryno = 0;
    int i=0;
    while(n>0){
        int bit=n%2;
        binaryno = bit*pow(10, i++)+binaryno;
        n = n/2;
    }
    return binaryno;
}

int decimalToBinary2(int n){
    int binaryno = 0;
    int i=0;
    while(n>0){
        int bit=(n&1);
        binaryno = bit*pow(10, i++)+binaryno;
        n = n>>1;
    }
    return binaryno;
}

int binaryToDecimal(int n){
    int decimal = 0;
    int i=0;
    while(n){
        int bit = n%10;
        decimal = bit*pow(2, i++)+decimal;
        n/=10;
    }
    return decimal;
}

int main() {
    int n;
    cin>>n;
    int answer = binaryToDecimal(n);
    cout<<answer<<endl;

    // int n;
    // cin>>n;
    // int binary1 = decimalToBinary1(n);
    // int binary2 = decimalToBinary2(n);
    // cout<<binary1<<endl;
    // cout<<binary2<<endl;
    return 0;
}