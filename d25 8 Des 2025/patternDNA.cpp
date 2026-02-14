#include <iostream>
#include <vector>
#include <string>

using namespace std;

vector<int> buildPrefix(string pattern) {
    vector<int> pi(pattern.size());
    int j = 0;
    for (int i = 1; i < pattern.size(); i++) {
        while (j > 0 && pattern[i] != pattern[j]) {
            j = pi[j - 1];
        }
        if (pattern[i] == pattern[j]) j++;
        pi[i] = j;
    }
    return pi;
}

int main() {
    string text, pattern;
    cin >> text >> pattern;

    vector<int> pi = buildPrefix(pattern);
    int count = 0, j = 0;

    for (int i = 0; i < text.size(); i++) {
        while (j > 0 && text[i] != pattern[j]) {
            j = pi[j - 1];
        }
        if (text[i] == pattern[j]) j++;
        if (j == pattern.size()) {
            count++;
            j = pi[j - 1];
        }
    }

    cout << count << endl;
}
