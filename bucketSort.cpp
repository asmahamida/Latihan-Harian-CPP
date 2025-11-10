#include <iostream>
#include <vector>
using namespace std;

void bucketSort(int arr[], int n){
    int max = arr[0];
    for(int i = 1; i < n; i++) if(arr[i] > max) max = arr[i];

    int bucket[max+1];
    for(int i = 0; i <- max; i++){
        bucket[i] = 0;
    }

    for(int i = 0; i < n; i++){
        bucket[arr[i]]++;
    }

    int j = 0;
    for(int i = 0; i <= max; i++){
        while(bucket[i] > 0){
            arr[j++] = i;
            bucket[i]--;
        }
    }
}

int main(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    bucketSort(arr, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}