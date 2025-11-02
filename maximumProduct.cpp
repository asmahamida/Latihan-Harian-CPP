#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int nums[n];
    cout << "input angka: " << endl;
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    int i, j;
    cout << "i = "; cin >> i;
    cout << "j = "; cin >> j;

    int max = (nums[i]-1)*(nums[j]-1);
    cout << max;
}