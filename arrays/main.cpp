#include<iostream>
#include<limits.h>
#include <vector>
using namespace std;

void printArray(int arr[], int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void inc(int arr[], int size){
    arr[0] = arr[0]+10;
    printArray(arr, size);
}

bool linearSearch(int arr[], int n, int x){
    for(int i=0;i<n;i++){
        if(arr[i] == x){
            return true;
    }
    }
    return false;
}

int find0s(int arr[], int size){
    int count = 0;
    for(int i=0;i<size;i++){
        if(arr[i] == 0){
            count++;
        }
    }
    return count;
}

int find1s(int arr[], int size){
    int count = 0;
    for(int i=0;i<size;i++){
        if(arr[i] == 1){
            count++;
        }
    }
    return count;
}

int getMax(int arr[], int size){
    int maxNum = INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>maxNum){
            maxNum = arr[i];
        }
    }
    return maxNum;
}

int getMin(int arr[], int size){
    int minNum = INT_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<minNum){
            minNum = arr[i];
        }
    }
    return minNum;
}

void extremePrint(int arr[],int start, int size){
    int end = size-1;
    while(start<=end){
        if(start == end){
            cout<<arr[start]<<" ";
        }else{
            cout<<arr[start]<<" ";
            cout<<arr[end]<<" ";
        }
        start++;
        end--;
    }
    cout<<endl;
}

void reverseArray(int arr[],int start, int size){
    int end = size-1;
    while(start<end){
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
    printArray(arr, size);
}

void printVector(vector<int>arr){
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int findUnique(vector<int>arr){
    int ans = 0;
    for(int i=0;i<arr.size();i++){
      ans = ans^arr[i];
    }
    return ans;
}

void unionOf2Array(vector<int>arr, vector<int>brr){
    vector<int>ans;
    for(int i=0;i<arr.size();i++){
        int element = arr[i];
        for(int j=0;j<brr.size();j++){
            if(element != brr[j]){
                brr[j] = -1;
                ans.push_back(element);
            }
        }
    }
    printVector(ans);
}

void intersectionOf2Arrays(vector<int>arr, vector<int>brr){
    vector<int>ans;
    for(int i=0;i<arr.size();i++){
        int element = arr[i];
        for(int j=0;j<brr.size();j++){
            if(element == brr[j]){
                ans.push_back(element);
            }
        }
    }
    printVector(ans);
}

void unionOf2ArrayWithoutDuplicate(vector<int>arr, vector<int>brr){
    vector<int>ans;
    for(int i=0;i<arr.size();i++){
        for(int j=0;j<brr.size();j++){
            if(arr[i] == brr[j]){
                brr[j] = -1;
                ans.push_back(arr[i]);
            }
        }
    }
    printVector(ans);
}

void pairSum(vector<int>arr, int sum){
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            if(arr[i] + arr[j] == sum){
                cout<<"("<<arr[i]<<" "<<arr[j]<<")";
            }
        }
    }
    cout<<endl;
}

void tripletSum(vector<int>arr, int sum){
    for(int i=0;i<arr.size();i++){
        for(int j=i+1;j<arr.size();j++){
            for(int k=j+1;k<arr.size();k++){
                if(arr[i]+arr[j]+arr[k] == sum){
                    cout<<"Pairs are: "<<arr[i]<<","<<arr[j]<<","<<arr[k];
                }
            }
        }
    }
    cout<<endl;
}

void sort0sAnd1s(vector<int>arr){
    int start = 0;
    int end = arr.size() - 1;
    int i = 0;
    while(start<end){
        if(arr[i] == 0){
            swap(arr[i], arr[start]);
            start++;
            i++;
        }
        if(arr[i] == 1){
            swap(arr[i], arr[end]);
            end--;
        }
    }
    printVector(arr);
}

void printRowSum(int arr[][4], int rows, int cols){
    for(int i=0;i<rows;i++){
        int totalSum = 0;
        for(int j=0;j<cols;j++){
            totalSum+=arr[i][j];
        }
        cout<<"Sum of "<<i+1<<" row is "<<totalSum<<endl;
    }
}

void printColSum(int arr[][3], int rows, int cols){
    for(int i=0;i<rows;i++){
        int totalSum = 0;
        for(int j=0;j<cols;j++){
            totalSum+=arr[j][i];
        }
        cout<<totalSum<<endl;
    }
}

bool linearSearch2DArray(int arr[][3], int rows, int cols, int key){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(arr[i][j] == key){
                return true;
            }
        }
    }
    return false;
}

int findMax(int arr[][3], int rows, int cols){
    int maxNum = INT_MIN;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(maxNum < arr[i][j]){
                maxNum = arr[i][j];
            }
        }
    }
    return maxNum;
}

int findMin(int arr[][3], int rows, int cols){
    int minNum = INT_MAX;
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(minNum > arr[i][j]){
                minNum = arr[i][j];
            }
        }
    }
    return minNum;
}

void print2DArray(int arr[][3], int rows, int cols){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

void transposeArray(int arr[][3], int rows, int cols, int transposedArr[][3]){
    for(int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            transposedArr[j][i]  =  arr[i][j];
        }
    }
}

int main() {
    // vector<vector<int> >arr(5, vector<int>(5, -8));
    // for(int i=0;i<arr.size();i++){
    //     for(int j=0;j<arr[i].size();j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }

    // int arr[3][3] = {
    //     {2,4,6},
    //     {1,3,5},
    //     {9,11,13},
    // };
    // int rows = 3, cols = 3;
    // int transposedArr[3][3];
    // transposeArray(arr, rows, cols, transposedArr);
    // print2DArray(transposedArr, rows, cols);

    // int arr[3][3] = {
    //     {5,6,9},
    //     {14,1,-1},
    //     {4,3,12}
    // };
    // int rows = 3, cols = 3;
    // int maxNum = findMax(arr, rows, cols);
    // cout<<maxNum<<endl;
    // int minNum = findMin(arr, rows, cols);
    // cout<<minNum<<endl;

    // int arr[3][3] = {
    //     {5,6,8},
    //     {7,2,4},
    //     {1,6,9}
    // };
    // int rows = 3, cols = 3, key = 12;
    // if(linearSearch2DArray(arr, rows,cols, key)){
    //     cout<<"Item found"<<endl;
    // }else{
    //     cout<<"Item not foud"<<endl;
    // }

    // int arr[3][3] = {
    //     {1,2,3},
    //     {5,6,0},
    //     {7,8,7}
    // };
    // int rows = 3;
    // int cols = 3;
    // printColSum(arr, rows, cols);

    // int arr[5][4] = {
    //     {1,2,3,4},
    //     {2,3,4,1},
    //     {5,6,1,3},
    //     {2,4,6,8},
    //     {1,9,9,6}
    // };
    // int rows = 5;
    // int cols = 4;
    // printRowSum(arr, rows, cols);

    // int arr[3][3];
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<"Enter value for "<<i<<" "<<j<<" ";
    //         cin>>arr[i][j];
    //     }
    // }
    // for(int i=0;i<3;i++){
    //     for(int j=0;j<3;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }


    // int arr[2][2] = {{1,2}, {3,4}};
    // cout<<"Row wise printing"<<endl;
    // // row-wise Print
    // for(int i=0;i<2;i++){
    //     for(int j=0;j<2;j++){
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    // cout<<"Column wise printing"<<endl;
    // // col-wise Print
    // for(int i=0;i<2;i++){
    //     for(int j=0;j<2;j++){
    //         cout<<arr[j][i]<<" ";
    //     }
    //     cout<<endl;
    // }

    // vector<int>arr{0,1,1,0,1,0,1,0,0};
    // sort0sAnd1s(arr);

    // vector<int>arr{10,20,30,40};
    // int sum = 80;
    // tripletSum(arr, sum);

    // vector<int>arr{1,2,3,5,7,2,4,6};
    // int sum = 9;
    // pairSum(arr, sum);

    // int n, m;
    // cin>>n;
    // vector<int>arr(n);
    // for(int i=0;i<arr.size();i++){
    //     cin>>arr[i];
    // }
    // cin>>m;
    // vector<int>brr(m);
    // for(int i=0;i<brr.size();i++){
    //     cin>>brr[i];
    // }
    // unionOf2ArrayWithoutDuplicate(arr, brr);

    // int n;
    // cout<<"Enter the size of 1st array: ";
    // cin>>n;
    // vector<int>arr(n);
    // for(int i=0;i<arr.size();i++){
    //     cin>>arr[i];
    // }
    // int m;
    // cout<<"Enter the size of 2nd array: ";
    // cin>>m;
    // vector<int>brr(m);
    // for(int i=0;i<brr.size();i++){
    //     cin>>brr[i];
    // }
    // cout<<"Calling Funtion"<<endl;
    // intersectionOf2Arrays(arr, brr);

    // int n,m;
    // cout<<"Enter the size of 1st array: ";
    // cin>>n;
    // vector<int>arr(n);
    // for(int i=0;i<arr.size();i++){
    //     cin>>arr[i];
    // }
    // cout<<"Enter the size of 2nd array: ";
    // cin>>m;
    // vector<int>brr(m);
    // for(int i=0;i<brr.size();i++){
    //     cin>>brr[i];
    // }
    // unionOf2Array(arr, brr);

    // vector<int>arr{1,2,4,2,1,3,6,5,5,6,4};
    // int res = findUnique(arr);
    // cout<<"Unique element is "<<res<<endl;

    // int arr[] = {10,20,30,40,50};
    // int start=0;
    // int size = 5;
    // reverseArray(arr,start, size);

    // int arr[] = {1,2,3,4,5,6,7};
    // int start = 0;
    // int size = 7;
    // extremePrint(arr, start, size);

    // int arr[100];
    // int n;
    // cout<<"Enter the size of array ";
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // int maxNum = getMax(arr, n);
    // cout<<"Max element "<<maxNum<<endl;
    // int minNUm = getMin(arr, n);
    // cout<<"Min element "<<minNUm<<endl;

    // int arr[] ={0,0,1,0,1,1,1,0,0};
    // int size = 9;
    // int totalZeros = find0s(arr, size);
    // int totalOnes = find1s(arr, size);
    // cout<<"Total 0's "<<totalZeros<<endl;
    // cout<<"Total 1's "<<totalOnes<<endl;

    // int arr[100];
    // int n;
    // cout<<"Enter the size of array ";
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // cout<<"Enter the key to find "<<endl;
    // int x;
    // cin>>x;
    // if(linearSearch(arr, n, x)){
    //     cout<<"Item found"<<endl;
    // }else{
    //     cout<<"Item not found"<<endl;
    // }

    // int arr[] = {5,6};
    // int size = 2;
    // inc(arr, size);
    // printArray(arr, size);

    // int arr[5] = {1,3,5,7,9};
    // for(int i=0;i<5;i++){
    //     arr[i] = 1;
    //     cout<<arr[i]<<" ";
    // }
    // cout<<endl;

    // int arr[500];
    // int n;
    // cin>>n;
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    // for(int i=0;i<n;i++){
    //     cout<<2*arr[i]<<" ";
    // }
    // cout<<endl;

    // ! BAD PRACTISE
    /*
    int n;
    cin>>n;
    int arr[n];
    */
    // !!!!!!!!!!!

    // int arr[3];
    // // taking input in array
    // for(int i=0;i<3;i++){
    //     cin>>arr[i];
    // }
    // // printing array
    // for(int j=0;j<3;j++){
    //     cout<<arr[j]<<" ";
    // }

    return 0;
}