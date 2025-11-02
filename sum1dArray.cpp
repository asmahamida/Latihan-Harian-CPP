#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int nums[n];
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    int runningSum[n];
    for(int i = 0; i < n; i++){
        int total = 0;
        for(int j = 0; j <= i; j++){
            total += nums[j];
        }
        runningSum[i] = total;
    }

    for(int i = 0; i < n; i++){
        cout << runningSum[i] << " ";
    }
}

/* int main(){
    int n;
    cin >> n;

    int nums[n];
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    int runningSum[n];
    for(int i = 0; i < n; i++){
        int total = 0;
        for(int j = 0; j <= j; j++){
            total = nums[j];
        }
        runningSum[i] = total;
    }

    for(int i = 0; i < n; i++){
        cout << runningSum[i] << " ";
    }
} */