//sorting semua algoritma

#include <iostream>
using namespace std;

void output(int arr[], int n){
    cout << endl;
    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}

//bubble sort
void bubbleSort(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
    output(arr, n);
}

//selectioin sort
void selectionSort(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        int minAr = i;
        for(int j = i+1; j < n; j++){
            if(arr[minAr] > arr[j]){
                minAr = j;
            }
        }
        if(minAr != i){
            swap(arr[i], arr[minAr]);
        }
    }
    output(arr, 5);
}

//insertion sort
void insertionSort(int arr[], int n){
    for(int i = 1; i < n; i++){
        int index = arr[i];
        int j = i-1;
        while(j >= 0 && arr[j] > index){
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = index;
    }
    output(arr, 5);
}

//mergesort
void mergeSort(int arr[], int l, int r){
    if(l >= r) return;
    int m = (l+r) / 2;

    mergeSort(arr, l, m);
    mergeSort(arr, m+1, r);
    mergeSort(arr, l, m);
    output(arr, 5);
}

//quick sort
int partition(int arr[], int low, int high){
    int pivot = arr[high];
    int i = low - 1; 

    for(int j = low; j < high; j++){
        if(arr[j] < pivot){
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i+1], arr[high]);
    return i+1;
}

void quickSort(int arr[], int low, int high){
    if(low < high){
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi-1);
        quickSort(arr, pi+1, high);
    }
    output(arr, 5);
}

//heap sort
void heapify(int arr[], int n, int i){
    int largest = i;
    int left = 2*i+1;
    int right = 2*i+2;

    if(left < n && arr[left] > arr[largest]){
        largest = left;
    } else if(right < n && arr[right] > arr[largest]){
        largest = right;
    } 
    if(largest != i){
        swap(arr[i], arr[largest]);
        heapify(arr, n, largest);
    }
}

void heapSort(int arr[], int n){
    for(int i = n/2; i >= 0; i--){
        heapify(arr, n, i);
    }
    for(int i = n-1; i > 0; i--){
        swap(arr[0], arr[i]);
        heapify(arr, i, 0);
    }
}

//radix sort
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

//counting sort
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


//shell sort
void sherllSort(int arr[], int n){
    for(int gap = n/2; gap > 0; gap/=2){
        for(int i = gap; i < n; i++){
            int temp = arr[i];
            int j;
            for(j = i; j >= gap && arr[j-gap] > temp; j-= gap){
                arr[j] = arr[j-gap];
            }
            arr[j] = temp;
        }
    }
}

//bucket sort
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
    int arr[5] = {5, 7, 3, 9, 1};

    bubbleSort(arr, 5);
    selectionSort(arr, 5);
    insertionSort(arr, 5);
    mergeSort(arr, 0, 5);
    quickSort(arr, 0, 4);
    heapSort(arr, 5);
    radixSort(arr, 5);
    countingSort(arr, 5);
    sherllSort(arr, 5);
    bucketSort(arr, 5);
}