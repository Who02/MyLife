#include <bits/stdc++.h>

using namespace std;

void solve(){
	long long a; cin>>a;
	bitset<64> bs (a);
	long long answ = bs.count();
	cout<<answ;
}

int main(){
	solve();
}