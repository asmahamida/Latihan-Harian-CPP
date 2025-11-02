#include <iostream>
using namespace std;

void tukar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

/* int main(){
    int m;
    cout << "m = ";
    cin >> m;
    
    int n;
    cout << "n = ";
    cin >> n;

    int nums1[m+n];
    cout << "nums1 = " << endl;
    for(int i = 0; i < m+n; i++){
        if(i >= m){
            nums1[i] = 0;
        } else{
            cin >> nums1[i];
        }
    }

    int nums2[n];
    cout << "nums2 = " << endl;
    for(int i = 0; i < n; i++){
        cin >> nums2[i];
    }

    for(int i = m; i < m+n; i++){
        nums1[i] = nums2[i-m];
    }

    for(int i = 0; i < m+n-1; i++){
        for(int j = 0; j < m+n-i-1; j++){
            if(nums1[j] > nums1[j+1]){
                tukar(nums1[j], nums1[j+1]);
            }
        }
    }

    for(int i = 0; i < m+n; i++){
        cout << nums1[i] << " ";
    }
} */

int main(){
    int m, n;
    cin >> m >> n;

    int nums1[m+n];
    for(int i = 0; i < m+n; i++){
        if(i >= m){
            nums1[i] = 0;
        } else{
            cin >> nums1[i];
        }
    }

    int nums2[n];
    for(int i = 0; i < n; i++){
        cin >> nums2[i];
    }

    for(int i = m; i < m+n; i++){
        nums1[i] = nums2[i-m];
    }

    for(int i = 0; i < m+n-1; i++){
        for(int j = 0; j < m+n-i-1; j++){
            if(nums1[j] > nums1[j+1]){
                tukar(nums1[j], nums1[j+1]);
            }
        }
    }

    for(int i = 0; i < m+n; i++){
        cout << nums1[i] << " ";
    }

}