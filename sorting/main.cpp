#include <iostream>
#include <vector>
using namespace std;

void selectionSort(vector<int> arr){
    for (int i = 0; i < arr.size() - 1; i++){
        int minIndex = i;
        for (int j = i + 1; j < arr.size(); j++){
            if (arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
    for (int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(vector<int>arr){
    for(int i=1;i<arr.size();i++){
    bool isSwapped = false;
        for(int j=0;j<arr.size()-i;j++){
            if(arr[j] > arr[j+1]){
                isSwapped = true;
                swap(arr[j], arr[j+1]);
            }
        }
        if(isSwapped == false){
            break;
        }
    }
    for (int i = 0; i < arr.size(); i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}



int main(){
    vector<int>arr{10,1,7,6,14,9};
    bubbleSort(arr);

    // vector<int> arr{5, 4, 3, 2, 1};
    // selectionSort(arr);
    return 0;
}