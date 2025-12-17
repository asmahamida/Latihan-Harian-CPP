#include <iostream>
using namespace std;

// void ubah(int *x){
//     int y = 20;
//     *x = y;
// }

// int main(){
//     int a = 5;
//     ubah(&a);
//     cout << a << endl;
// }


// struct Mahasiswa{
//     int umur = 10;
// };

// int main(){
//     Mahasiswa m;
//     Mahasiswa *p = &m;
//     p->umur = 20;
//     cout << p->umur;
// }


// struct Buku{
//     int halaman;
// };

// int main(){
//     Buku *b = new Buku;
//     b->halaman = 40;
//     delete b;
// }


// int main(){
//     int arr[5] = {1, 2, 3, 4, 5};

//     int *p = arr;
//     *(p+5) = 10;
//     cout << arr[4] << endl;
//     cout << *(p+5) << endl;
// }


// int main(){
//     int a[5];
//     *(a+1) = 40;
//     cout << a[1];
// }


// int main(){
//     int a[4] = {1,2,3,4};
//     int *p = a;

//     cout << &a[0] << endl;
//     cout << &a[1] << endl;
//     cout << &a[2] << endl;
// }


// struct Data{
//     int x, y;
// };

// int main(){
//     Data d = {1,2};
//     Data *pd = &d;

//     *pd = {5,4};

//     cout << pd->x << endl;
//     cout << pd->y << endl;
// }


int main(){
    int arr[4] = {1,2,4,4};
    int *p = arr;

    for(int i = 0; i < 4; i++){
        *p = *p +1;
        p++;
    }

    for(int i = 0; i < 4; i++){
        cout << arr[i] << endl;
    }   
}
