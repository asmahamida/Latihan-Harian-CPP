#include <iostream>
using namespace std;

//sistem konversi dan urutan nilai

struct Mahasiswa{
    string nama;
    int nilai;
};

char konversiHuruf(int n){
    if(n >= 90) return 'A';
    else if(n >= 80) return 'B';
    else if(n >= 70) return 'C';
    else if(n >= 60) return 'D';
    else return 'E';
}

void sorting(Mahasiswa data[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(data[j].nilai > data[j+1].nilai){
                swap(data[j], data[j+1]);
            }
        }
    }
}

void tampilkanRekursif(Mahasiswa data[], int n, int index){
    if(index >= n) return;

    cout << "Nama Mhs " << index+1 << " : " << data[index].nama << endl;
    cout << "Nilai Mhs " << index+1 << " : " << data[index].nilai << endl;
    cout << "Konversi nilai Mhs " << index+1 << " : " << konversiHuruf(data[index].nilai) << endl;

    tampilkanRekursif(data, n, index+1);
}

int main(){
    int n; cin >> n;
    Mahasiswa data[n];

    for(int i = 0; i < n; i++){
        cout << "Masukkan Nama : "; cin >> data[i].nama;
        cout << "Masukkan Nilai : "; cin >> data[i].nilai;
    }

    sorting(data, n);

    tampilkanRekursif(data, n, 0);

    return 0;
}