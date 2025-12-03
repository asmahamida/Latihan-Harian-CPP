#include <iostream>
using namespace std;

/* int main(){
    int n;
    cin >> n;

    int nums[n];
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }
    
    for(int i = n-1; i >= 0; i--){
        if(nums[i] < 9){
            nums[i]++;
            for(int j = 0; j < n; j++){
                cout << nums[j] << " ";
            }
        return 0;
        }
        nums[i] = 0;
    }

    cout << 1 << " ";
    for(int i = 0; i < n; i++){
        cout << 0 << " ";
    }
} */

/* int main(){
    int n;
    cin >> n;

    int nums[n];
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    for(int i = n-1; i >= 0; i--){
        if(nums[i] < 9){
            nums[i]++;
            for(int j = 0; j < n; j++){
                cout << nums[j] << " ";
            }
            return 0;
        }
        nums[i] = 0;
    }

    cout << 1 << " ";
    for(int i = 0; i < n; i++){
        cout << nums[i] << " ";
    }
} */

int main(){
    int n;
    cin >> n;

    int nums[n];
    for(int i = 0; i < n ; i++){
        cin >> nums[i];
    }

    for(int i = n-1; i >= 0; i--){
        if(nums[i] < 9){
            nums[i]++;
            for(int j = 0; j < n; j++){
                cout << nums[j] << " ";
            }
            return 0;
        }
        nums[i] = 0;
    }

    cout << 1 << " ";
    for(int i = 0; i < n; i++){
        cout << nums[i] << " ";
    }
}