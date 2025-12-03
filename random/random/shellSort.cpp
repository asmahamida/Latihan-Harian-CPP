void countingSort(int arr[], int n) {
    int maxVal = *max_element(arr, arr + n);
    vector<int> count(maxVal + 1, 0), output(n);

    for (int i = 0; i < n; i++) count[arr[i]]++;
    for (int i = 1; i <= maxVal; i++) count[i] += count[i - 1];
    for (int i = n - 1; i >= 0; i--) output[--count[arr[i]]] = arr[i];
    for (int i = 0; i < n; i++) arr[i] = output[i];
}


void shellSort(int arr[], int n){
    for(int gap = n/2; gap > 0; gap/=2){
        for(int i = gap; i < n; i++){
            int temp = arr[i], j;
            for(j = i; j >= gap && arr[j-gap] < arr[j]; j-=gap){
                arr[j] = arr[j-gap];
            }
            arr[j] = temp;
        }
    }
}

int main(){
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    shellSort(arr, n);

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
}