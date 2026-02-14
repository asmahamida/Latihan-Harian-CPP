#include <iostream>
#include <vector>
using namespace std;

struct Mahasiswa{
    string nama;
    int umur;
    double ipk;
};

void tambah(){
    Mahasiswa m;
    cout << "Nama : "; 
    cin.ignore();
    getline(cin, m.nama);
    cout << "Umur : "; cin >> m.umur;
    cout << "IPK : "; cin >> m.ipk;
}