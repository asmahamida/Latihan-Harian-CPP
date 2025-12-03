/*
Nama Program : tugas_1
Nama         : Muhammad Raihan Rizky Zain
NPM          : 140810230049
Tanggal Buat : 22 Oktober 2023
Deskripsi    :
*/

#include <iostream>
using namespace std;

void input(int n[]){
    for (int i = 0; i < 20; i++)
    {
        cin >> n[i];
    }
    
}

void swap(int& n, int& m){
    int temp;
    temp = n;
    n = m;
    m = temp;
}

void sort(int n[], int total){
    for (int i = 0; i < total - 1; i++)
    {
        for (int j = 0; j < total - 1 - i; j++)
        {
            if (n[j] < n[j+1])
            {
                swap(n[j], n[j+1]);
            }
        }  
    }
}

int main(){
    int n[20], range;
    input(n);
    sort(n, 20);
    cin >> range;
    cout << n[range - 1];
}