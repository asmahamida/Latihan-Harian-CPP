#include <iostream>
using namespace std;

struct Data{
    string nama;
    int uang;
    int jumlah;
};

int main(){
    int n; cin >> n;;
    string nama[n];
    int saldo[n];
    for(int i = 0; i < n; i++){
        cin >> nama[i];
        saldo[i] = 0;
    }

    int uang[n];
    int jumlah[n];
    string nama2[n];
    for(int i = 0; i < n; i++){
        cin >> nama2[i];
        cin >> uang[i];
        cin >> jumlah[i];

        
    }


}