#include <iostream>
// #include <algorithm>
// #include <vector>
using namespace std;

void countingSort(int arr[], int n) {
    // int maxVal = *max_element(arr, arr + n);
    int maxVal = arr[0];
    for(int i = 1; i < n; i++){
        if(arr[i] > arr[i-1]){
            maxVal = arr[i];
        }
    }
    // vector<int> count(maxVal + 1, 0), output(n);
    int count[maxVal + 1], output[n];
    for(int i = 0; i < maxVal+1; i++){
        count[i] = 0;
    }

    for (int i = 0; i < n; i++) count[arr[i]]++;
    for (int i = 1; i <= maxVal; i++) count[i] += count[i - 1];
    for (int i = n - 1; i >= 0; i--) output[--count[arr[i]]] = arr[i];
    for (int i = 0; i < n; i++) arr[i] = output[i];
}

int main(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    countingSort(arr, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}