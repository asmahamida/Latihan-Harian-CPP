#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int arr[n];
    int *ptr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
        *ptr[i] = arr[i];
    }

    for(int i = 0; i < n; i++){
        cout << "Nilai arr; " << arr[i] << endl;
        cout << "Alamat arr: " << ptr[i] << endl;
        cout << "Nilai pointer: " << *ptr[i] << endl << endl;
    }
}