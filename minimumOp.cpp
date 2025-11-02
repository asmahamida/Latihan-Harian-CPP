#include <iostream>
using namespace std;

/* int main(){
    int n;
    cin >> n;

    int nums[n];
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    int hasil = 0; 
    for(int i = 1; i < n; i++){
        if(nums[i] <= nums[i-1]){
            hasil += nums[i-1] - nums[i] + 1;
            nums[i] = nums[i-1]+1;
        }
    }
    cout << hasil;
} */

int main(){
    int n;
    cin >> n;

    int nums[n];
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    int tambah = 0;
    for(int i = 1; i < n; i++){
        if(nums[i] <= nums[i-1]){
            tambah += nums[i-1] - nums[i] + 1;
            nums[i] = nums[i-1] + 1;
        }
    }

    cout << tambah;
}