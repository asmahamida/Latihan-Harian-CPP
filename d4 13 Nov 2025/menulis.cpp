#include <iostream>
#include <fstream>
using namespace std;

int main(){
    ofstream file("data.txt");
    string kataKata;
    getline(cin, kataKata);
    file << kataKata;
    file.close();
}