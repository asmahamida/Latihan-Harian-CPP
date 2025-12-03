#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int tinggi[n];
    for(int i = 0; i < n; i++){
        cin >> tinggi[i];
    }

    int maksKanan[n], maksKiri[n];

    maksKiri[0] = tinggi[0];
    for(int i = 1; i < n; i++){
        if(tinggi[i] > maksKiri[i-1]){
            maksKiri[i] = tinggi[i];
        } else{
            maksKiri[i] = maksKiri[i-1];
        }
    }

    maksKanan[n - 1] = tinggi[n - 1];
    for(int i = n - 2; i >= 0; i--){
        if(tinggi[i] > maksKanan[i + 1]){
            maksKanan[i] = tinggi[i];
        } else{
            maksKanan[i] = maksKanan[i+1];
        }
    }

    int totalAir = 0;
    int batasAir[n];
    for(int i = 0; i < n; i++){
        if(maksKiri[i] <= maksKanan[i]){
            batasAir[i] = maksKiri[i];
        } else{
            batasAir[i] = maksKanan[i];
        }
        totalAir += (batasAir[i] - tinggi[i]);
    }

    for(int i = 0; i < n; i++){
        cout << maksKiri[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < n; i++){
        cout << maksKanan[i] << " ";
    }
    cout << endl;
    for(int i = 0; i < n; i++){
        cout << batasAir[i] << " ";
    }
    cout << endl;
    
    cout << totalAir;
}
