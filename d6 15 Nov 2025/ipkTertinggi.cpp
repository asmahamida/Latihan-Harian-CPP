#include <iostream>
using namespace std;

struct Mahasiswa{
    string nama;
    double ipk;
};

int main(){
    int n; cin >> n;
    Mahasiswa data[n];
    for(int i = 0; i < n; i++){
        cin >> data[i].nama;
        cin >> data[i].ipk;
    }

    int maxIndex = 0;
    for(int i = 0; i < n-1; i++){
        if(data[i].ipk < data[i+1].ipk){
            maxIndex = i+1;
        }
    }

    cout << "Nama IPK tertinggi : " << data[maxIndex].nama << endl;
    cout << "Nilai IPK : " << data[maxIndex].ipk << endl;
}