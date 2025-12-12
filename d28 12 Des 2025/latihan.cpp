#include <iostream>
using namespace std;

struct Data{
    int x;
    int y;
};

int main(){
    Data d = {10, 20};
    Data *p = &d;
    Data **pp = &p;

    (**pp).x += p->y; //**pp.x = 30
    (*p).y -= (**pp).x; // *p.y = -10
    p = *pp;

    cout << p->x << " " << p->y << endl;
    cout << (**pp).y << " " << (**pp).y << endl;
}