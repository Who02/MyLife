#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;
    int n = s.length();
    int current = 1;
    int max = 1;
    for (int i = 1; i < n; i++) {
        if (s[i] == s[i - 1]) {
            current++;
        } else {
            current = 1;
        }
        if (current > max) {
            max = current;
        }
    }
    cout << max;
}