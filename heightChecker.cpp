#include <iostream>
using namespace std;

/* int main(){
    int n;
    cin >> n;

    int heights[n];
    for(int i = 0; i < n; i++){
        cin >> heights[i];
    }

    int expected[n];
    for(int i = 0; i < n; i++){
        expected[i] = heights[i];
    }

    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(expected[j] > expected[j+1]){
                int temp = expected[j];
                expected[j] = expected[j+1];
                expected[j+1] = temp;
            }
        }
    }
    
    int total = 0;
    for(int i = 0; i < n; i++){
        if(heights[i] != expected[i]){
            total++;
        }
    }

    cout << total;
} */

void tukar(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){
    int n;
    cin >> n;

    int heights[n];
    for(int i = 0; i < n; i++){
        cin >> heights[i];
    }

    int expected[n];
    for(int i = 0; i < n; i++){
        expected[i] = heights[i];
    }

    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(expected[j] > expected[j+1]){
                tukar(expected[j], expected[j+1]);
            }
        }
    }

    int total = 0;
    for(int i = 0; i < n; i++){
        if(heights[i] != expected[i]){
            total++;
        }
    }

    cout << total;
}