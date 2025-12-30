#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int key){
    for(int i = 0; i < n; i++){
        if(arr[i] == key){
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int n, int key){
    int left = 0; 
    int right = n-1;

    while(left <= right){
        int mid = right + (left-right)/2;

        if(arr[mid] == key){
            return mid;
        } else if(arr[mid] < key){
            left = mid + 1;
        } else{
            right = mid-1;
        }
    }
    return -1;
}

int main(){
    int arr[5] = {5, 3, 7, 4, 1};
    int key = 3;
    cout << linearSearch(arr, 5, key) << endl;
    cout << binarySearch(arr, 5, key) << endl;
}