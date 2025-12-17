#include <iostream>
using namespace std;

int main(){
    int a = 5; 
    int *aP = nullptr;
    aP = &a; //reference

    cout << "nilai dari a: " << a << endl;
    cout << "adress dari a: " << aP << endl;

    //dereferencing: ngambil data dari sebuah pointer
    a = 10;
    cout << "ambil  nilai dari pointer aP: " << *aP << endl;
    
}