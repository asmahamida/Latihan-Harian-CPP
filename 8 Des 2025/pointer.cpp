#include <iostream>
using namespace std;

int main(){
    int arr[] = {10, 20, 30, 40};
    int *p = arr;
    p++;
    cout << *p << endl;
    p += 2;
    cout << *p << endl;
}