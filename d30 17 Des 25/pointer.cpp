#include <iostream>
using namespace std;

void fungsi(int *b){
    cout << b << " " << &b << " " << *b << endl; //dereferencing
}

void kuadrat(int *valPtr){
    *valPtr *= *valPtr;
}

int main(){
    int a = 5;
    cout << a << &a << endl;

    fungsi(&a); //yg dipanggil addressnya, inputnya pointer

    //kuadrat
    kuadrat(&a);
    cout << a << endl;
}