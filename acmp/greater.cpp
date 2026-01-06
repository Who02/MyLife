#include <bits/stdc++.h>

using namespace std;
using ll = long long;
void solve(){
	ll a,b; cin>>a>>b;
	if(a>b) cout << ">";
	else if(a<b) cout << "<";
	else cout << "=";
}

int main(){
	solve();
}