#include <iostream>
#include <vector>

using namespace std;

bool can(long long time, vector<long long>& a, long long K) {
    long long cnt = 0;
    for (int i = 0; i < a.size(); i++) {
        cnt += time / a[i];
        if (cnt >= K) return true;
    }
    return false;
}

int main() {
    long long N, K;
    cin >> N >> K;

    vector<long long> a(N);
    long long mx = 0;
    for (int i = 0; i < N; i++) {
        cin >> a[i];
        if (mx < a[i]) mx = a[i];
    }

    long long left = 0, right = mx * K;
    long long ans = right;

    while (left <= right) {
        long long mid = (left + right) / 2;

        if (can(mid, a, K)) {
            ans = mid;
            right = mid - 1;
        } else {
            left = mid + 1;
        }
    }

    cout << ans << endl;
}
