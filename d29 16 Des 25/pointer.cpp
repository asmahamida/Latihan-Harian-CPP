#include <iostream>
using namespace std;

int main(){
    int x = 4;
    int *p = &x;
    int y = *p;
    int **q = &p;
    int &z = x;
    z = 10;
    
    cout << "y " << y << endl; // nilai x
    cout << "&p " << &p << endl; //alamat p
    cout << "&x " << &x << endl; //alamat x
    cout << "p " << p << endl; //alamat x
    cout << "q " << q << endl; //alamat p
    cout << "**q " << **q << endl; //nilai p yakni sama dgn x
    cout << "z " << z << endl; //references ke x, z = x, nilai 10 karna diubah diatas
    cout << "&z " << &z << endl; // alamat x
    cout << "x " << x << endl; //berubah jd 10 krn references z
}