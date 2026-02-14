#include <iostream>
using namespace std;

struct Kelas{
    string nama;
    int nilai[100];
};

int main() {
    Kelas k = {"Informatika", {80, 85, 90}};
    cout << k.nama << " nilai ke-2: " << k.nilai[1];
}