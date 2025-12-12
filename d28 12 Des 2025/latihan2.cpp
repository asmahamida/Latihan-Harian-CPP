#include <iostream>
using namespace std;

void ubah(int *a, int *b){
    *a += *b;
    b = a;
    *b = *a + 5;
}

int main(){
    int x = 3, y = 4;
    ubah(&x, &y);
    cout << x << " " << y;
}