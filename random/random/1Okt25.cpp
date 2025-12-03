//menyusun kata

#include <iostream>
using namespace std;

/* int main(){
    string kata[3] = {"Jawa Barat", "di", "Bandung"};

    string temp = kata[0];
    kata[0] = kata [2];
    kata[2] = temp;
    for(int i=0; i < 3; i++){
        cout << kata[i] << " ";
    }
} */

/* int input(int &n, int bil[]){
    for(int i=0; i < n; i++){
        cin >> bil[n];
    }
} */

//tukar nama dan nilai
void tukar(int &a, int &b, string &namaA, string &namaB){
    int temp = a;
    string tempS = namaA;
    namaA = namaB;
    namaB = tempS;
    a = b;
    b = temp;
}

int main(){
    string nama[4] = {"Orlando", "Bagas", "Ucup", "Aidan"};
    int nilai[4]= {100, 69, 88, 30};
    for(int i=0; i < 4; i++){
        for (int j=0; j < 4-i-1; j++){
            if(nilai[j] < nilai[j+1]){
                tukar(nilai[j], nilai[j+1], nama[j], nama[j+1]);
            }
        }
    }
    for(int i=0; i < 4; i++){
        cout << nama[i] << ": " << nilai[i] << endl;
    }
}

/* int main(){
    int a;
    cin >> a;
    int bil[a];
    for(int i=0; i < a; i++){
        cin >> bil[a];
    }
    for(int i=0; i < a-1; i++){
        for(int j=0; j < a-i-1; j++){
            if(bil[a] > bil[a-1]){
                tukar(bil[a], bil[a-1]);
            }
        }
    }
    for(int i=0; i < a; i++){
        cout << bil[i];
    }
} */

