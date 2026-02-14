#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ifstream file("data.txt");
    string nama; int umur;
    string cari;
    cin >> cari;
    bool ketemu = false;

    while(file >> nama >> umur){
        if(nama == cari){
            cout << nama << " ditemukan! usia: " << umur;
            ketemu = true;
        }
    }

    if(!ketemu) cout << "Tidak ada!";
}
