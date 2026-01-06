#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define vll vector<ll>
void multiply(vll& digits, ll multiplier){
	ll carry = 0;
    for (size_t i = 0; i < digits.size(); i++) {
        ll product = digits[i] * multiplier + carry;
        digits[i] = product % 10;
        carry = product / 10;
    }
    while (carry) {
        digits.push_back(carry % 10);
        carry /= 10;
    }
}

vll fact(ll n){
	vll result;
	result.push_back(1);
	for (int i = 2; i <= n; i++) {
        multiply(result, i);
    }
	return result;
}

void solve(){
	ll a; cin>>a;
	vll digits = fact(a);
	for (auto it = digits.rbegin(); it != digits.rend(); ++it) {
        cout << *it;
    }
} 

int main(){
	solve();
}