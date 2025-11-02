#include <iostream>
using namespace std;

//array

/* int main(){
    int myNumbers[5] = {10, 20, 30, 40, 50};
    for(int i : myNumbers){
        cout << i << "\n";
    }
} */

/* int main(){
    int data[10];
    int n;
    cout << "Banyak data: ";
    cin >> n;
    for(int i = 1; i <= n; i++){
        cout << "Data: ";
        cin >> data[i];
    } 
    for(int i = 1; i <= n; i++){
        cout << "Data " << i << ": " << data[i] << "\n";
    }
} */

void banyakData(int &n){
    cout << "Banyak data: "; cin >> n;
}

typedef int Array[10];
void isiArray(Array &a, int n){
    for(int i=1; i <= n; i++){
        cout << "Masukkan data ke-" << i << ": "; cin >> a[i];
    }
}

void printArray(Array a, int n){
    cout << "Data yang sudah dimasukkan: " << endl;
    for(int i = 1; i <= n; i++){
        cout << "Data ke-" << i << ": " << a[i] << endl;
    }
}


float cariRataRata(Array a, int n){
    float total = 0.0;
    for(int i = 1; i <= n; i++){
        total = total+a[i];
    }
    float rataRata = total/n;
    return rataRata;
}

int main(){
    Array x;
    int n;
    banyakData(n);
    isiArray(x, n);
    printArray(x, n);
    cout << "Rata-rata data: " << cariRataRata(x, n);
}