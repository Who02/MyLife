#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll a, b;
    cin >> a >> b;
    ll nok = (a / (gcd(a, b))) * b;
    cout << nok;
}

int main() {
    solve();
}