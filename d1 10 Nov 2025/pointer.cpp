#include <iostream>
using namespace std;

int main(){
    int x;
    int *y = &x;

    cin >> x;

    cout << "Nilai x; " << x << endl;
    cout << "Alamat x: " << y << endl;
    cout << "Nilai pointer: " << *y << endl;
}