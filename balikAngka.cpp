#include <iostream>
using namespace std;

void tukarK(int nums[], int n, int k){
    for(int i=0; i<k; i++){
        int j = 1;
        int temp = nums[i];
        nums[n-1-i] = nums[i];
        nums[i] = nums[i+1];
        j++;
    }
}

int main(){
    int n, k;
    cout << "k: ";
    cin >> k;
    cout << "n: ";
    cin >> n;
    int nums[n];
    for(int i=0; i<n; i++){
        cin >> nums[i];
    }

    tukarK(nums, n, k);
    
    for(int i=0; i<n; i++){
        cout << nums[i] << " ";
    }
}