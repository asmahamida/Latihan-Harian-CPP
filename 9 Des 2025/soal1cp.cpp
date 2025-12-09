#include <iostream>
#include <vector>
using namespace std;

int main(){
    int N, T;
    cin >> N >> T;

    vector<int> time(N), profit(N);
    for(int i = 0; i < N; i++){
        cin >> time[i] >> profit[i];
    }

    vector<int> dp(T+1, 0);

    for(int i = 0; i < N; i++){
        for(int j = T; j >= time[i]; j--){
            dp[j] = max(dp[j], dp[j-time[i]] + profit[i]);
        }
    }

    cout << dp[T] << endl;
}