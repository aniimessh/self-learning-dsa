#include<iostream>
#include<vector>
using namespace std;

bool binarSearch(vector<int>arr, int target){
    int start = 0;
    int end = arr.size() - 1;
    int mid = (start+end)/2;
    while(start<=end){
        if(target == arr[mid]){
            return true;
        }else if(target > arr[mid]){
            start = mid+1;
        }else if(target < arr[mid]){
            end = mid-1;
        }
        mid = (start+end)/2;
    }
    return false;
}

int firstOccurence(vector<int>arr, int target){
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end-start)/2;
    int index = 0;
    while(start<=end){
        if(arr[mid] == target){
            end = mid - 1;
            index = mid;
        }else if(arr[mid] < target){
            start = mid +1;
        }else if(arr[mid] > target){
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return index;
}

int lastOccurence(vector<int>arr, int target){
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end-start)/2;
    int index = 0;
    while(start<=end){
        if(arr[mid] == target){
            start = mid +1;
            index = mid;
        }else if(arr[mid] < target){
            start = mid +1;
        }else if(arr[mid] > target){
            end = mid - 1;
        }
        mid = start + (end-start)/2;
    }
    return index;
}

int findMissingElement(vector<int>arr){
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    while(start<=end){
        if(arr[mid] == mid + 1){
            start = mid + 1;
        }else{
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return start+1;
}

int peakElement(vector<int>arr){
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) /2;
    while(start<end){
        if(arr[mid] < arr[mid+1]){
            start = mid + 1;
        }else{
            end = mid;
        }
        mid = start + (end - start) /2;
    }
    return arr[start];
}

int getSqrt(int n){
    int s = 0;
    int e = n;
    int mid = s + (e - s) / 2;
    int ans = 0;
    while(s < e){
        if(mid*mid > n){
            e = mid - 1;
        }else if(mid*mid<  n){
            ans = mid;
            s = mid + 1;
        }else if(mid*mid == n){
            return mid;
        }
        mid = s + (e - s) / 2;
    }
    return mid;
}

bool binarySearch2DArray(vector<vector<int> >arr, int target, int rows, int cols){
    int start = 0;
    int end = rows*cols-1;
    int mid = start + (end - start) / 2;
    while(start<=end){
        int rowIndex = mid / cols;
        int colIndex = mid % cols;
        if(arr[rowIndex][colIndex] == target){
            return true;
        }else if(arr[rowIndex][colIndex] > target){
            end = mid - 1;
        }else{
            start = mid + 1;
        }
        mid = start + (end - start) / 2;
    }
    return false;
}

int nearlySearch(vector<int>arr, int target){
    int start = 0;
    int end = arr.size();
    int mid = start + (end - start) / 2;
    while(start<=end){
        if(arr[mid] == target){
            return mid;
        }else if(mid - 1 > 0 && arr[mid-1] == target){
            return mid - 1;
        }else if(mid+1 < arr.size() && arr[mid+1] == target){
            return mid + 1;
        }else if(arr[mid] > target){
            start = mid + 2;
        }else{
            end = mid - 2;
        }
        mid = start + (end - start) / 2;
    }
    return -1;
}


int divideUsingBinary(int dividend, int divisor){
    int start = 0;
    int end = abs(dividend);
    int ans = 0;
    int mid = start + (end - start) / 2;
    while(start<=end){
        if(abs(mid*divisor) == abs(dividend)){
            ans = mid;
            break;
        }else if(abs(mid*divisor) <= abs(dividend)){
            ans = mid;
            start = mid + 1;
        }else{
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    if((dividend < 0 && divisor < 0) || (dividend>0 && divisor>0)){
        return ans;
    }else{
        return -ans;
    }
}

int OddAppearence(vector<int>arr){
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    while(start<end){
        if(mid % 2 == 0){
            if(arr[mid] == arr[mid+1]){
                start=mid+2;
            }else{
                end = mid;
            }
        }else{
            if(arr[mid] == arr[mid-1]){
                start = mid+1;
            }else{
                end = mid - 1;
            }
        }
        mid = start + (end - start) / 2;
    }
    return start;
}

int pivotElement(vector<int>arr){
    int start = 0;
    int end = arr.size() - 1;
    int mid = start + (end - start) / 2;
    while(start<=end){
        if(start == end) return start;
        if(mid+1 <= end && arr[mid] > arr[mid + 1]) return mid;
        if(mid-1 >= start && arr[mid-1] > arr[mid]) return mid - 1;
        if(arr[start] > arr[mid]) end=mid - 1;
        else start = mid + 1;
        mid = start + (end - start) / 2;
    }
    return -1;
}

int main() {
    // vector<int>arr{2,4,6,8,9,10};
    // int ans = pivotElement(arr);
    // cout<<ans<<endl;
    // cout<<arr[ans]<<endl;

    // vector<int>arr{1,1,2,2,3,3,4,4,3,600,600,4,4};
    // int res = OddAppearence(arr);
    // cout<<"Index is "<<res<<endl;
    // cout<<"Value is "<<arr[res]<<endl;

    // int dividend;
    // cin>>dividend;
    // int divisor;
    // cin>>divisor;
    // int res = divideUsingBinary(dividend, divisor);
    // cout<<res<<endl;

    // vector<int>arr{10,3,40,20,50,80,70};
    // int target = 40;
    // int res = nearlySearch(arr, target);
    // cout<<res<<endl;

    // vector<vector<int> >arr{
    //     {1,2,3,4},
    //     {5,6,7,8},
    //     {9,10,11,12},
    //     {13,14,15,16},
    //     {17,18,19,20},
    // };
    // int target = 25;
    // int rows = 4;
    // int col = 5;
    // if(binarySearch2DArray(arr, target, rows, col)){
    //     cout<<"Found"<<endl;
    // }else{
    //     cout<<"Not found"<<endl;
    // }

    int n;
    cin>>n;
    int res = getSqrt(n);
    cout<<"Sqrt of "<<n<<" is "<<res<<endl;


    // vector<int>arr{0,10,5,2};
    // int ans = peakElement(arr);
    // cout<<ans<<endl;

    // vector<int>arr{1,3,4,5,6,7,8};
    // int ans = findMissingElement(arr);
    // cout<<ans<<endl;

    // vector<int>arr{2,4,4,4,4,4,4,6,6,6,6,6,8,10};
    // int target = 6;
    // int firstOcc = firstOccurence(arr, target);
    // int lastOcc = lastOccurence(arr, target);
    // int totalOcc = (lastOcc - firstOcc) + 1;
    // cout<<totalOcc<<endl;

    // vector<int>arr{1,2,4,4,4,4,4,6,7,9};
    // int target = 4;
    // int index = firstOccurence(arr, target);
    // cout<<index<<endl;

    // vector<int>arr{1,3,7,9,11,13,15,19};
    // int target = 20;
    // if(binarSearch(arr, target)){
    //     cout<<"Found"<<endl;
    // }else{
    //     cout<<"Not fonud"<<endl;
    // }
    return 0;
}