#include <iostream>
using namespace std;

void tukar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

/* int main(){
    int n;
    cout << "jumlah elemen = ";
    cin >> n;

    int target;
    cout << "target = ";
    cin >> target;

    int nums[n];
    cout << "nums = " << endl;
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            if(nums[i] + nums[j] == target){
                cout << i << ", " << j;
            }
        }
    }
} */

/* int main(){
    int n;
    cin >> n;

    int nums[n];
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    int target;
    cout << "target: ";
    cin >> target;

    for(int i = 0; i < n; i++){
        for(int j = 1; j < n; j++){
            if(nums[i] + nums[j] == target){
                cout << i << " " << j << endl;
                break;
            }
        }
    }
} */

int main(){
    int n;
    cin >> n;

    int nums[n];
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    int target;
    cin >> target;

    for(int i = 0; i < n; i++){
        for(int j = 1; j < n; j++){
            if(nums[i] + nums[j] == target){
                cout << i << " " << j << endl;
            }
        }
    }
}