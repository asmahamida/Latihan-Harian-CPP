#include <iostream>
using namespace std;

/* int main(){
    //jml customer
    int m;
    cin >> m;

    //akun
    int n;
    cin >> n;

    int accounts[m][n];
    int wealth[m];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> accounts[i][j];
        }
    }
    
    int total = 0;
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            total += accounts[i][j];
        }
        wealth[i] = total;
        total = 0;
    }

    for(int i = 0; i < m-1; i++){
        for(int j = 0; j < m-i-1; j++){
            if(wealth[j+1] > wealth[j]){
                int temp = wealth[j];
                wealth[j] = wealth[j+1];
                wealth[j+1] = temp;
            }
        }
    }
    cout << wealth[0];
} */

void tukar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

/* int main(){
    //m = customer
    //n = accounts
    int m, n;
    cin >> m >> n;

    int accounts[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> accounts[i][j];
        }
    }
    
    int wealth[m];
    for(int i = 0; i < m; i++){
        int total = 0;
        for(int j = 0; j < n; j++){
            total += accounts[i][j];
        }
        wealth[i] = total;
    }

    for(int i = 0; i < m-1; i++){
        for(int j = 0; j < m-i-1; j++){
            if(wealth[j] < wealth[j+1]){
                tukar(wealth[j], wealth[j+1]);
            }
        }
    }

    cout << wealth[0];
}  */

int main(){
    int m, n;
    cin >> m >> n;

    int matriks[m][n];
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            cin >> matriks[i][j];
        }
    }

    int wealth[m];
    for(int i = 0; i < m; i++){
        int total = 0;
        for(int j = 0; j < n; j++){
            total += matriks[i][j];
        }
        wealth[i] = total;
    }

    for(int i = 0; i < m-1; i++){
        for(int j = 0; i < m-i-1; i++){
            if(wealth[j] < wealth[j+1]){
                tukar(wealth[j], wealth[j+1]);
            }
        }
    }

    cout << wealth[0];
}