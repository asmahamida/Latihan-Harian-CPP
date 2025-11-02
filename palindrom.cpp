#include <iostream>
using namespace std;

int main(){
    string kata;
    cin >> kata;
    int huruf = kata.length();
    bool palindrom = 1;
    for(int i=0; i< huruf/2; i++){
        if(kata[i] != kata[huruf-i-1]){
            palindrom = 0;
            break;
        } else{
            palindrom = 1;
        }
    }
    if(palindrom){
        cout << kata << " adalah palindrom" << endl;
    } else{
        cout << kata << " bukan palindrom" << endl;
    }
}