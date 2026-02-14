#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Pegawai{
    int id;
    string nama;
    string jabatan;
};

int main(){
    int jumlah;
    Pegawai data[100];

    cout << "Jumlah data yang ditambahkan: ";
    cin >> jumlah;
    for(int i = 0; i < jumlah; i++){
        cout << "Nama Pegawai " << i+1 << ": "; 
        cin >> data[i].nama;
        getline(cin, data[i].nama);
        cout << "ID Pegawai " << i+1 << ": "; 
        cin >> data[i].id;
        cout << "Jabatan Pegawai " << i+1 << ": "; 
        getline(cin, data[i].jabatan);

        cin.ignore();
    }

    //simpan data
    ofstream file("dataPegawai.txt");
    for(int i = 0; i < jumlah; i++){
        file << data[i].nama << endl;
        file << data[i].id << endl;
        file << data[i].jabatan << endl;
    }
    cout << "Data berhasil disimpan! lihat di dataPegawai.txt!" << endl;
}
