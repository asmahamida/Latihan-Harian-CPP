#include <iostream>
using namespace std;

int main(){
    char c = 'A';
    char *cPtr = &c;

    cout << c << endl;
    cout << &c << endl;
    cout << cPtr << endl;
    cout << &cPtr << endl;

    int n = 5;
    int *p = &n;
}