#include<iostream>
#include<vector>
using namespace std;

void MoveNegativeToLeft(vector<int>arr){
    int i = 0;
    int start = 0;
    int end = arr.size() - 1;
    while(start<=end){
        if(arr[start] < 0){
            swap(arr[i], arr[start]);
            i++, start++;
        }
        if(arr[end] > 0){
            end--;
        }else{
            swap(arr[start], arr[end]);
        }
    }
    for(int i=0;i<arr.size();i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

void missingElement(vector<int>arr){
    for(int i=0;i<arr.size();){
        int index = arr[i] - 1;
        if(arr[i] != arr[index]){
            swap(arr[i], arr[index]);
        }else{
            i++;
        }
    }
    for(int i=0;i<arr.size();i++){
        if(arr[i] != i+1){
            cout<<i+1<<" ";
        }
    }
    cout<<endl;
}

int BinarySearch(vector<int>arr, int start, int end, int target){
    while(start<=end){
        int mid = start + (end - start) / 2;
        if(arr[mid] == target){
            return mid;
        }else if(target > arr[mid]){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
    }
    return -1;
}

int ExpoSearch(vector<int>arr, int target){
    if(arr[0] == target) return 0;
    int i=1;
    while(i<arr.size() && arr[i]<=target){
        i *= 2;
    }
    int n = arr.size() - 1;
    cout<<"Calling Binary Search()"<<endl;
    return BinarySearch(arr, i/2, min(i, n), target);
}

int main() {
    vector<int>arr{3,4,5,6,11,13,14,15,56,70};
    int target = 13;
    int ans = ExpoSearch(arr, target);
    cout<<ans<<" ";
    // vector<int>arr{1,2,5,3,2};
    // missingElement(arr);

    // vector<int>arr{1,2,-3,4,-5,6};
    // MoveNegativeToLeft(arr);
    return 0;
}