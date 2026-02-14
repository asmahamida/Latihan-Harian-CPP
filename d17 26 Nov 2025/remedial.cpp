#include <iostream>
#include <fstream>
using namespace std;

//Sistem Konversi Nilai

struct Mahasiswa{
    string nama;
    int nilai;
};

char nilaiHuruf(int n){
    if(n >= 90) return 'A';
    else if(n >= 80) return 'B';
    else if(n >= 70) return 'C';
    else if(n >= 60) return 'D';
    return 'E';
}

void sorting(Mahasiswa data[], int &n){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(data[j].nilai < data[j+1].nilai){
                swap(data[j].nilai, data[j+1].nilai);
                swap(data[j].nama, data[j+1].nama);
            }
        }
    }
}

void tampilkan(Mahasiswa data[], int n, int index){
    if(index >= n) return;

    cout << "Nama Mhs " << index+1 << ": " << data[index].nama << endl;
    cout << "Nilai Mhs " << index+1 << ": " << nilaiHuruf(data[index].nilai) << endl;

    tampilkan(data, n, index+1);
}

int main(){
    int n; cin >> n;

    Mahasiswa data[n];
    for(int i = 0; i < n; i++){
        cout << "Masukkan Nama Mhs " << i+1 << ": "; cin >> data[i].nama;
        cout << " Masukkan Nilai Mhs " << i+1 << ": "; cin >> data[i].nilai;
    }

    sorting(data, n);
    tampilkan(data, n, 0);
}

