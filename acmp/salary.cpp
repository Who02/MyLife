#include <bits/stdc++.h>

using namespace std;

void solve(){
	int a,b,c;
	cin >> a >> b >> c;
	int max_ = max({a,b,c});
	int min_ = min({a,b,c});
	int answ = max_-min_;
	cout << answ;
}

int main(){
	solve();
}