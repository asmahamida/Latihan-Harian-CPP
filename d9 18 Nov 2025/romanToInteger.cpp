#include <iostream>
#include <string>
using namespace std;

int nilaiRoman(char r){
    switch(r){
        case 'I' : return 1;
        case 'V' : return 5;
        case 'X' : return 10;
        case 'L' : return 50;
        default: return 0;
    }
}

int romanToInteger(string s){
    int hasil = 0;

    for(int i = 0; i < s.length(); i++){
        int nilaiSekarang = nilaiRoman(s[i]);
        int nilaiSelanjutnya = nilaiRoman(s[i+1]);

        if(nilaiSekarang < nilaiSelanjutnya){
            hasil -= nilaiSelanjutnya;
        } else{
            hasil += nilaiSekarang;
        }
    }

    return hasil;
}

int main(){
    string roman;
    cin >> roman;

    cout << romanToInteger(roman) << endl;
}