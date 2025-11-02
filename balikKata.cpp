#include <iostream>
using namespace std;

int balikKata(string &kata){
    int akhir = kata.length()-1;
    int awal = 0;
    while(awal < akhir){
        char temp = kata[awal];
        kata[awal] = kata[akhir];
        kata[akhir] = temp;
        awal++;
        akhir--;
    }
}

int main(){
    string kata;
    cin >> kata;
    balikKata(kata);
    cout << kata;
}