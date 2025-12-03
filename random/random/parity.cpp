#include <iostream>
using namespace std;

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

    for(int i = 0; i < n - 1; i++){
        int evenIndex = i;
        for(int j = i + 1; j < n; j++){
            if(nums[j] % 2 == 0){
                evenIndex = j;
            }
        }
        if(evenIndex != i){
            tukar(nums[i], nums[evenIndex]);
        }
    }

    for(int i = 0; i < n; i++){
        cout << nums[i] << " ";
    }

} */

/* int main(){
    int n; 
    cin >> n;

    int nums[n];
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    for(int i = 0; i < n; i++){
        int evenIndex = i;
        for(int j = i+1; j < n; j++){
            if(nums[j] % 2 == 0){
                evenIndex = j;
            }
        }
        if(evenIndex != i){
            tukar(nums[i], nums[evenIndex]);
        }
    }

    for(int i = 0; i < n; i++){
        cout << nums[i] << " ";
    }

} */

int main(){
    int n;
    cin >> n;
    
    int nums[n];
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(nums[j+1] % 2 == 0){
                tukar(nums[j], nums[j+1]);
            }
        }
    }

    for(int i = 0; i < n ; i++){
        cout << nums[i] << " ";
    }
}