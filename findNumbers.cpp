#include <iostream>
using namespace std;

/* int main(){
    int n;
    cin >> n;

    int nums[n];
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    int jumlahDigit[n];
    for(int i = 0; i < n; i++){
        jumlahDigit[i] = 0;
        while(nums[i] > 0){
            nums[i] /= 10;
            jumlahDigit[i]++;
        }
    }

    int genap = 0;
    for(int i = 0; i < n; i++){
        if(jumlahDigit[i] % 2 == 0){
            genap++;
        }
    }

    cout << genap;
} */

int main(){
    int n;
    cin >> n;

    int nums[n];
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    int jumlahDigit[n];
    for(int i = 0; i < n; i++){
        jumlahDigit[i] = 0;
        while(nums[i] > 0){
            nums[i] = nums[i] /= 10;
            jumlahDigit[i]++;
        }
    }
    
    int genap = 0;
    for(int i = 0; i < n; i++){
        if(jumlahDigit[i] % 2 == 0){
            genap++;
        }
    }

    cout << genap;
}