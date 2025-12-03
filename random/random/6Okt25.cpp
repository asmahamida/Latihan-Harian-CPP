#include <iostream>
using namespace std;

int main(){
    int N;
    cin >> N;
    double data[N];
    for(int i=0; i<N; i++){
        cin >> data[i];
    }
    for(int i=0; i<N-1; i++){
        for(int j=0; j<N-i-1; j++){
            if(data[i] > data[j]){
                double temp = data[i];
                data[i] = data[j];
                data[j] = temp;
            }
        }
    }
    for(int i=0; i<N; i++){
        cout << data[i] << " ";
    }
}