#include <bits/stdc++.h>
using namespace std;
using ll = long long;
ll fact(ll x) {
	ll result = 1;
	for (ll i = 1; i <= x; i++) {
		result *= i;
	}
	return result;
}
void solve(ll n, ll k) {
	ll answ;
	answ = fact(n) / (fact(k) * fact(n - k));
	cout << answ;
}
int main() {
	ll k, n;
	cin >> k >> n;
	solve(n, k);
	return 0;
} 
