#include <iostream>
using namespace std;

int main(){
    int a = 5; 
    cout << a << &a << endl;

    int &b = a;
    cout << b << &b << endl;

    a = 20; b = 10;
    cout << a << b << endl;
}