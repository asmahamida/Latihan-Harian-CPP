#include <iostream>
using namespace std;

int main(){
    int x = 4;
    int *p = &x;
    int y = *p;
    int **q = &p;
    int &z = x;
    z = 10;
    
    cout << "y" << y << endl;
    cout << "&p" << &p << endl;
    cout << "&x" << &x << endl;
    cout << "p" << p << endl;
    cout << "q" << q << endl;
    cout << "**q" << **q << endl;
    cout << "z" << z << endl;
    cout << "&z" << &z << endl;
    cout << "x" << x << endl;
}