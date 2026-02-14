#include <iostream>
using namespace std;

int main(){
    // int a = 5, b = 10;
    // int *p = &a;
    // int *q = &b;
    // int **r = &p;

    // *p = *q;
    // *q = **r + 5;
    // p = q;
    // **r = 20;

    // cout << a << " " << b;

    // int a = 5, b = 10;
    // int *p = &a;
    // int *q = &b;
    // int **r = &p;

    // cout << *p;

    int arr[] = {4, 8, 12, 16, 20};
    int *p = arr + 1;

    cout << p + 3 << endl;

    *(p + 2) = *(p - 1) + *(p + 1);
    p += 3;

    cout << *(p - 2) << endl;

    
}
