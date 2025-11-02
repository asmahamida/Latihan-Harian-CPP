#include <iostream>
using namespace std;

/* void tukar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int n;
    cin >> n;

    int nums[n];
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    int k;
    cin >> k;

    for(int i = 0; i < k; i++){
        for(int j = n-1; j > 0; j--){
            tukar(nums[j], nums[j-1]);
        }
    }

    for(int i = 0; i < n; i++){
        cout << nums[i] << " ";
    }
} */

void tukar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

/* int main(){
    int n;
    cin >> n;

    int nums[n];
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    int k;
    cin >> k;

    for(int i = 0; i < k; i++){
        for(int j = n-1; j > 0; j--){
            tukar(nums[j], nums[j-1]);
        }
    }

    for(int i = 0; i < n; i++){
        cout << nums[i];
    }
} */

int main(){
    int n;
    cin >> n;

    int nums[n];
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    int k;
    cin >> k;

    for(int i = 0; i < k; i++){
        for(int j = n-1; j > 0; j--){
            tukar(nums[j], nums[j-1]);
        }
    }

    for(int i = 0; i < n; i++){
        cout << nums[i] << " ";
    }
}