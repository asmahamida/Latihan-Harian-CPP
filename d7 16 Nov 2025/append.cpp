#include <iostream>
#include <fstream>
using namespace std;

int main(){
    string kata;
    getline(cin, kata);

    ofstream file("info.txt", ios::app);

    file << kata << endl;
    file.close();
}