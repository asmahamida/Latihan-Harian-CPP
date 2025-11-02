#include <iostream>
using namespace std;

//Latihan Praktikum UTS

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i < n; i++){
        cin >> arr[i];
    }
    int hasil = 0;
    for(int i=0; i<n; i++){
        hasil += arr[i];
    }
    cout << "Total Data :" << hasil;
}