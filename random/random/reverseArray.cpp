#include <iostream>
using namespace std;

/* int main(){
    string kata;
    cin >> kata;

    int jumlahHuruf = kata.length();

    for(int i = jumlahHuruf - 1; i >= 0; i--){
        cout << kata[i];
    }
} */

int main(){
    string kata;
    cin >> kata;

    int jumlahKata;
    jumlahKata = kata.length();

    for(int i = jumlahKata-1; i >= 0; i--){
        cout << kata[i];
    }
}