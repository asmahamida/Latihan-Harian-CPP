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

    bool duplicate;
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(nums[j] > nums[j+1]){
                tukar(nums[j], nums[j+1]);
                duplicate = 0;
            } else if(nums[j] == nums[j+1]){
                duplicate = 1;
                break;
            }
        }
    }

    if(duplicate){
        cout << "true";
    } else{
        cout << "false";
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

    bool duplicate = 0;
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(nums[j] > nums[j+1]){
                tukar(nums[j], nums[j+1]);      
            } else if(nums[j] == nums[j+1]){
                duplicate = 1;
                break;
            }
        }
    }

    if(duplicate){
        cout << "true";
    } else{
        cout << "false";
    }
} */

int main(){
    int n;
    cin >> n;

    int nums[n];
    for(int i = 0; i < n; i++){
        cin >> nums[i];
    }

    bool duplicate = 0;
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            tukar(nums[j], nums[j+1]);
            if(nums[j] == nums[j+1]){
                duplicate = 1;
                break;
            }
        }
    }

    if(duplicate){
        cout << "true";
    } else{
        cout << "false";
    }
}