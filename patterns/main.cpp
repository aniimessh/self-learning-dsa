#include<iostream>
using namespace std;
int main() {
    int n;
    cin>>n;
    for(int row=0;row<n;row=row+1){
        for(int col=0;col<n-row-1;col=col+1){
            cout<<" ";
        }
        int start = 1;
        for(int col=0;col<2*row+1;col=col+1){
            if(row == 0 || row == n-1){
               if(col%2 == 0){
                cout<<start;
                start=start+1;
               }else{
                cout<<" ";
               }
            }else{
                if(col==0){
                    cout<<1;
                }else if(col==2*row+1-1){
                    cout<<row+1;
                }else{
                    cout<<" ";
                }
            }
        }
        cout<<endl;
    }

    // int n;
    // cin>>n;
    // for(int row=0;row<n;row=row+1){
    //     for(int col=0;col<n-row-1;col=col+1){
    //         cout<<" ";
    //     }
    //     for(int i=0;i<row+1;i=i+1){
    //         cout<<row+i+1;
    //     }
    //     int start = 2*row;
    //     for(int col=0;col<row;col=col+1){
    //         cout<<start;
    //         start = start-1;
    //     }
    //     cout<<endl;
    // }

    // int n;
    // cin>>n;
    // for(int row=0;row<n;row=row+1){
    //     int count = row+1;
    //     for(int col=0;col<row+1;col=col+1){
    //         cout<<count;
    //         count=count+1;
    //     }
    //     cout<<endl;
    // }

    // int n;
    // cin>>n;
    // cout<<sizeof(n)<<endl;
    // for(int row=0;row<n;row=row+1){
    //     int col=0;
    //     for(;col<row+1;col=col+1){
    //         int ans = col+1;
    //         char ch = ans+'A'-1;
    //         cout<<ch;
    //     }
    //     col=col-1;
    //     for(;col>=1;col=col-1){
    //         int ans = col;
    //         char ch = ans+'A'-1;
    //         cout<<ch;
    //     }
    //     for(int space=0;space<n-row-1;space=space+1){
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }

    // int n;
    // cin>>n;
    // for(int row=0;row<n;row=row+1){
    //     for(int col=0;col<row+1;col=col+1){
    //         if(col == 0 || col == row+1){
    //             cout<<row+1;
    //         }else{
    //             cout<<"*"<<row+1;
    //         }
    //     }
    //     for(int space=0;space<n-row-1;space=space+1){
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }
    // for(int row=0;row<n;row=row+1){
    //     for(int col=0;col<n-row;col=col+1){
    //         if(col==0 || col==n-row){
    //             cout<<n-row;
    //         }else{
    //             cout<<"*"<<n-row;
    //         }
    //     }
    //     for(int space=0;space<row;space=space+1){
    //         cout<<" ";
    //     }
    //     cout<<endl;
    // }

    // int n;
    // cin>>n;
    // for(int row=0;row<n;row=row+1){
    //     for(int star=0;star<n-row;star=star+1){
    //         cout<<"* ";
    //     }
    //     for(int space=0;space<row;space=space+1){
    //         cout<<" ";
    //     }
    //     for(int space=0;space<row;space=space+1){
    //         cout<<"   ";
    //     }
    //     for(int star=0;star<n-row;star=star+1){
    //         cout<<" *";
    //     }
    //     cout<<endl;
    // }
    // for(int row=0;row<n;row=row+1){
    //     for(int star=0;star<row+1;star=star+1){
    //         cout<<"* ";
    //     }
    //     for(int space=0;space<n-row-1;space=space+1){
    //         cout<<" ";
    //     }
    //     for(int space=0;space<n-row-1;space=space+1){
    //         cout<<"   ";
    //     }
    //     for(int star=0;star<row+1;star=star+1){
    //         cout<<" *";
    //     }
    //     cout<<endl;
    // }

    // int n;
    // cin>>n;
    // for(int row=0;row<n;row=row+1){
    //     for(int space=0;space<n-row-1;space=space+1){
    //         cout<<" ";
    //     }
    //     for(int star=0;star<2*row+1;star=star+1){
    //         if(star==0 || star==2*row){
    //             cout<<"*";
    //         }else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }
    // for(int row=0;row<n;row=row+1){
    //     for(int space=0;space<row;space=space+1){
    //         cout<<" ";
    //     }
    //     for(int star=0;star<2*n-2*row-1;star=star+1){
    //         if(star==0 || star == 2*n-2*row-2){
    //             cout<<"*";
    //         }
    //         else{
    //             cout<<" ";
    //         }
    //     }
    //     cout<<endl;
    // }

    // int n;
    // cin>>n;
    // for(int row=0;row<n;row=row+1){
    //     // spaces
    //     for(int space=0;space<n-row;space=space+1){
    //         cout<<" ";
    //     }
    //     // stars
    //     for(int star=0;star<row+1;star=star+1){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    //  for(int row=0;row<n;row=row+1){
    //     // spaces
    //     for(int space=0;space<row;space=space+1){
    //         cout<<" ";
    //     }
    //     // stars
    //     for(int star=0;star<n-row;star=star+1){
    //         cout<<" *";
    //     }
    //     cout<<endl;
    // }

    // int n;
    // cin>>n;
    // for(int row=0;row<n;row=row+1){
    //     // spaces
    //     for(int space=0;space<row;space=space+1){
    //         cout<<" ";
    //     }
    //     // stars
    //     for(int col=0;col<n-row;col=col+1){
    //         cout<<" *";
    //     }
    //     cout<<endl;
    // }

    // int n;
    // cin>>n;
    // for(int row=0;row<n;row=row+1){
    //     // spaces
    //     for(int space=0;space<n-row;space=space+1){
    //         cout<<" ";
    //     }

    //     // stars
    //     for(int star=0;star<row+1;star=star+1){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // int n;
    // cin>>n;
    // for(int row=0;row<n;row=row+1){
    //     for(int col=0;col<n-row;col=col+1){
    //         cout<<col+1;
    //     }
    //     cout<<endl;
    // }

    // int n;
    // cin>>n;
    // for(int row=0;row<n;row=row+1){
    //     for(int col=0;col<row+1;col=col+1){
    //         cout<<col+1;
    //     }
    //     cout<<endl;
    // }

    // int n;
    // cin>>n;
    // for(int row=0;row<n;row=row+1){
    //     for(int col=0;col<n-row;col=col+1){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // int n;
    // cin>>n;
    // for(int row=0;row<n;row=row+1){
    //     for(int col=0;col<row+1;col=col+1){
    //         cout<<"*";
    //     }
    //     cout<<endl;
    // }

    // int totalRow, totalCol;
    // cin>>totalRow;
    // cin>>totalCol;
    // for(int row=0;row<totalRow;row=row+1){
    //     if(row==0 || row==totalRow-1){
    //         for(int col=0;col<totalCol;col=col+1){
    //             cout<<"* ";
    //         }
    //     }else{
    //         cout<<"* ";
    //         for(int space=0;space<totalCol-2;space=space+1){
    //             cout<<"  ";
    //         }
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // int n;
    // cin>>n;
    // for(int row=0;row<n;row=row+1){
    //     for(int col=0;col<n;col=col+1){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }

    // for(int row=0;row<3;row=row+1){
    //     for(int col=0;col<5;col=col+1){
    //         cout<<"* ";
    //     }
    //     cout<<endl;
    // }
    return 0;
}