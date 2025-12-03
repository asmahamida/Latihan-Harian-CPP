#include <iostream>
using namespace std;

void radixSort(int arr[], int n){
    //cari maks
    int maxVal = arr[0];
    for(int i = 1; i < n; i++){
        if(maxVal < arr[i]){
            maxVal = arr[i];
        }
    }

    int output[n];
    for(int exp = 1; maxVal/exp > 0; exp *= 10){
        int count[10] = {0};
        for(int i = 0; i < n; i++) count[(arr[i]/exp) % 10]++;
        for(int i = 1; i < 10; i++) count[i] += count[i-1];
        for(int i = n-1; i >= 0; i--){
            int idx = (arr[i]/exp) % 10;
            output[--count[idx]] = arr[i];
        }
        for(int i = 0; i < n; i++) arr[i] = output[i];
    }
}

// int getmax(int arr[], int n){
//     int max = arr[0];
//     for(int i = 1; i < n; i++){
//         if(max < arr[i]){
//             max = arr[i];
//         }
//     }
//     return max;
// }

// int countingSortDigit(int arr[], int n, int exp){
//     int output[n];
//     int count[10] = {0};

//     for(int i = 0; i < n; i++) count[(arr[i]/exp) % 10]++;
//     for(int i= 1; i < 10; i++) count[i] += count[i-1];
//     for(int i = n-1; i >= 0; i--){
//         int idx = (arr[i]/exp) % 10;
//         output[--count[idx]] = arr[i];
//     }
//     for(int i = 0; i < n; i++){
//         arr[i] = output[i];
//     }
// }

// void radixSort(int arr[], int n){
//     for(int exp = 1; getmax(arr, n) / exp > 0; exp *= 10){
//         countingSortDigit(arr, n, exp);
//     }
// }

int main(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    radixSort(arr, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}