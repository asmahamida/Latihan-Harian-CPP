#include <iostream>
using namespace std;

void sorting(int list[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = 0; j < n-i-1; j++){
            if(list[j] > list[j+1]){
                swap(list[j], list[j+1]);
            }
        }
    }
}

int main(){
    int n1, n2; cin >> n1 >> n2;
    int list1[n1], list2[n2];
    for(int i = 0; i < n1; i++){
        cin >> list1[i];
    }
    for(int i = 0; i < n2; i++){
        cin >> list2[i];
    }

    int list[n1+n2];
    for(int i = 0; i < n2; i++){
        list[n1+i] = list2[i];
    }

    sorting(list, n1+n2);

    for(int i = 0; i < n2+n1; i++){
        cout << list[i] << " ";
    }
}