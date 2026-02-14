#include <iostream>
using namespace std;

struct Mahasiswa{
    string nama;
    int nim;
    double tugas;
    double uas;
};

int main(){
    int n; cin >> n;
    Mahasiswa data[n];
    double nilaiAkhir[n];

    for(int i = 0; i < n; i++){
        cout << "Data Mhs " << i+1  << endl;
        cin >> data[i].nama;
        cin >> data[i].nim;
        cin >> data[i].tugas;
        cin >> data[i].uas;
    }

    int maks = 0;
    for(int i = 0; i < n; i++){
        data[i].tugas *= 0.4;
        data[i].uas *= 0.6;
        nilaiAkhir[i] = data[i].tugas + data[i].uas;
        if(nilaiAkhir[i] > nilaiAkhir[maks]) maks = i;
    }

    cout << data[maks].nama << endl;
    cout << data[maks].nim << endl;
    cout << data[maks].tugas << endl;
    cout << data[maks].uas << endl;
    cout << "Nilai Total: " << nilaiAkhir[maks] << endl;
}