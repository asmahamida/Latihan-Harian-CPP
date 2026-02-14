#include <iostream>
#include <fstream>
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

    //descending
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n-1; j++){
            if(data[j].ipk < data[j+1].ipk){
                swap(data[j], data[j+1]);
            }
        }
    }

    ofstream file("dataIPK.txt");

    for(int i = 0; i < n; i++){
        file << data[i].nama << endl;
        file << data[i].ipk << endl;
    }
    file.close();
}