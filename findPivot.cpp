#include <iostream>
using namespace std;

/* int main(){
    int n;
    cin >> n;
    int nums[n];
    
    for (int i = 0; i < n; i++){
        cin >> nums[i];
    }
    
    for (int i = 0; i < n; i++){
        int left = 0, right = 0;
        
        if (i == 0){
            left = 0;
        } else{
            for (int j = i-1; j >= 0; j--){
                left += nums[j];
            }
        }
        
        if (i == n-1){
            right = 0;
        } else{
            for (int j = i+1; j < n; j++){
                right += nums[j];
            }
        }
        
        if (left == right){
            cout << i;
            return 0;
        }
    }
    
    cout << "-1";
    
    return 0;
} */

int main(){
    int n;
    cin >> n;

    int nums[n];
    for(int i = 0; i < n)
}