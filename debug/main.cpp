#include<iostream>
#include <vector>
using namespace std;

int fun(int x, int y=0){
   return x+y;
}

int main(){
    vector<double> a= {1,2,3,4};
    cout<<a[0];

    // char ch;
    // cin>>ch;
    // if(ch<=122 && ch >= 97){
    //     cout<<"0";
    // }else if(ch<=90 && ch>=65){
    //     cout<<"1";
    // }else{
    //     cout<<"-1";
    // }

    // int a=10,b=5,c=3;
    // b!=!a;
    // c=!!a;
    // cout<<b<<" "<<c<<endl;

    // int a=10, b=5,c=5;
    // int d;
    // d=b+c==a;
    // cout<<d<<endl;

    // int y=1;
    // if(y&(y=2)){
    //     cout<<"true"<<y<<endl;
    // }else{
    //     cout<<"false"<<y<<endl;
    // }

    // if(!0 == 1){
    //     cout<<"Yes";
    // }else{
    //     cout<<"No";
    // }
    // cout<<!0<<endl;

    // int a=5,b=-7,c=0,d;
    // d=++a&&++b || ++c;
    // cout<<a<<" "<<b<<" "<<c<<" "<<d<<" "<<endl;

    // cout<<fun(5);

    // int x=10;
    // fun(x,x);
    // cout<<x<<endl;

    // int x,y;
    // x=5;
    // y=(x+=1)*(x+=1);
    // cout<<x<<" "<<y<<" ";
    // y=x++*++x;
    // cout<<x<<" "<<y<<endl;

    //  int i, j;
    //  j=10;
    //  i=(j++,j+100,999+j);
    //  cout<<i<<endl;
    return 0;
}


// int main(){
// 	int n;
// 	cin >> n;
// 	bool isPrime = true;
//     for(int i=2;i<n;i++){
//         if(n%i == 0){
//             isPrime = false; break;
//         }
//     }
// 	if(isPrime){
// 		cout<<"Prime"<<endl;	
// 	}
// 	else{
// 		cout<<"Not Prime"<<endl;	
// 	}
//   return 0;
// }

// int main() {
// 	int n;
//     cin>>n;
//     for (int i=0; i<n; ++i) {
//         for (int j=0; j<n; ++j) {
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }

// int main() {
// 	float l, b;
//     cin>>l;
//     cin>>b;
// 	int p = 2*(l+b);
// 	cout<<"Perimeter= "<<p<<endl;
// }

// int main() {
// 	short i=2300, j=4322;
// 	cout<<"i+j="<<(i+j);
// }