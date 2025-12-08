#include <iostream>
using namespace std;

int main(){
    int n; cin >> n;
    int arr[n]; 
    int jumlah[n] = {0};

    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    for(int i = 0; i < n; i++){
        jumlah[arr[i]]++;
    }

    for(int i = 0; i < n; i++){
        if(jumlah[i] > 0){
            cout << "Angka " << i << ": " << jumlah[i] <<" kali munucl" << endl;
        }
    }
}

//bismillah sukses uassss jangan remed lagi ya asmaaa, PASTI BISAAA! U DOING GREATTTTTTTTT JOB1!!!!! SEMANGAATTTTTTTTT