#include <iostream>
using namespace std;

void baris1_3_5(int n);
void baris2(int n);
void baris3(int n);
void baris4(int n);
void baris5(int n);

int main(){
    int n;
    cin >> n;

    baris1_3_5(n);
    baris2(n);
    baris1_3_5(n);
    baris4(n);
    baris1_3_5(n);
}

void baris1_3_5(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n*4; j++){
            cout << "5";
        }
        for(int j = 1; j <= n; j++){
            cout << " ";
        }
        for(int j = 1; j <= n*4; j++){
            cout << "3";
        }
    cout << endl;
    }
}

void baris2(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            cout << "5";
        }
        for(int j = 1; j <= n*7; j++){
            cout << " ";
        }
        for(int j = 1; j <= n; j++){
            cout << "3";
        }
    cout << endl;
    }
}

void baris4(int n){
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n*3; j++){
            cout << " ";
        }
        for(int j = 1; j <= n; j++){
            cout << "5";
        }
        for(int j = 1; i <= n*4; j++){
            cout << " ";
        }
        for(int j = 1; j <= n; j++){
            cout << "3";
        }
    cout << endl;
    }
}

