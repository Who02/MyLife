#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n; cin>>n;
	int answ{};
	
	for(int i{1};i<=n;i++){
		if(n%i == 0){
			answ+=i;
		}
	}
	cout << answ;
}

int main(){
	solve();
}