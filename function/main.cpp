#include<iostream>
using namespace std;

void printName(int n){
    for(int i=0;i<n;i++){
        cout<<i+1<<" Hello "<<endl;
    }
}

int getSum(int a, int b){
    return a+b;
}

int maxNum(int a, int b, int c){
    if(a>>b && a>c){
        return a;
    }else if(b>a && b>c){
        return b;
    }else{
        return c;
    }
}

void printCounting(int n){
    for(int i=1;i<=n;i++){
        cout<<i<<" ";
    }
}

char getGrade(int marks){
    if(marks>=90){
        return 'A';
    }else if(marks>=80){
        return 'B';
    }else if(marks>=70){
        return 'C';
    }else if(marks>=60){
        return 'D';
    }else{
        return 'F';
    }
}

int sumofEven(int n){
    int result=0;
    for(int i=1;i<=n;i++){
        if(i%2==0){
            result+=i;
        }
    }
    return result;
}

float areaOfCircle(int radius){
    return 3.14*radius;
}

void checkEvenOrOdd(int n){
    if(n%2==0){
        cout<<"Even";
    }else{
        cout<<"Odd";
    }
    cout<<endl;
}

int getFactorial(int n){
    int result=1;
    for(int i=n;i>=1;i--){
        result*=i;
    }
    return result;
}

bool isPrime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
            break;
        }
    }
    return true;
}

void primeNumber(int n){
    for(int i=2;i<=n;i++){
        if(isPrime(i)){
            cout<<i<<" ";
        }
    }
    cout<<endl;
}

int main() {
    int n;
    cin>>n;
    primeNumber(n);

    // int n;
    // cin>>n;
    // isPrime(n);

    // int n;
    // cin>>n;
    // int res = getFactorial(n);
    // cout<<res<<endl;

    // int n;
    // cin>>n;
    // checkEvenOrOdd(n);

    // int radius;
    // cin>>radius;
    // float res=areaOfCircle(radius);
    // cout<<res<<endl;

    // int n;
    // cin>>n;
    // int result=sumofEven(n);
    // cout<<"Sum of even numbers b/w 1 to "<<n<<" is "<<result<<endl;

    // int marks;
    // cin>>marks;
    // char grade = getGrade(marks);
    // cout<<"Your grade is "<<grade<<endl;

    // int n;
    // cin>>n;
    // printCounting(n);
    // cout<<endl;

    // int num1;
    // int num2;
    // int num3;
    // cin>>num1;
    // cin>>num2;
    // cin>>num3;
    // int res=maxNum(num1, num2, num3);
    // cout<<"Max Num is "<<res<<endl;

    // int a;
    // cin>>a;
    // int b;
    // cin>>b;
    // int sum=getSum(a, b);
    // cout<<"Totoal Sum is "<<sum<<endl;

    // int n;
    // cin>>n;
    // printName(n);

    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     cout<<i+1<<" Hello"<<endl;
    // }
    return 0;
}