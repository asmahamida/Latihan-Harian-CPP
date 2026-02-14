#include <iostream>
using namespace std;

struct Mahasiswa{
    string nama;
    int nilai;
};

void sorting(Mahasiswa data[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(data[j].nilai > data[j+1].nilai){
                swap(data[j], data[j+1]);
            }
        }
    }
}

void tampilkaRekursif(Mahasiswa data[], int n, int index){
    if(index >= n) return;

    cout << "Nama Mhs " << index+1 << " : " << data[index].nama << endl;
    cout << "Nilai Mhs " << index+1 << " : " << data[index].nilai << endl;

    tampilkaRekursif(data, n, index+1);
}

int main(){
    int n; cin >> n;
    Mahasiswa data[n];

    for(int i = 0; i < n; i++){
        cout << "Nama Mhs " << i+1 << ": "; cin >> data[i].nama;
        cout << "Nilai Mhs " << i+1 << ": "; cin >> data[i].nilai;
    }

    sorting(data, n);
    tampilkaRekursif(data, n, 0);
}