#include <bits/stdc++.h>

using namespace std;

void solve(){
	int n; cin>>n;
	int answ{};
	int numbers [n][n];
	for(int i{};i<n;i++){
		for(int j{};j<n;j++){
			int temp; cin>>temp;
			numbers[i][j] = temp;
		}
	}
	
	for(int i{};i<n;i++){
		for(int j{};j<n;j++){
			if(numbers[i][j] == 1){
				answ++;
			}
		}
	}
	answ/=2;
	cout << answ;
}

int main(){
	solve();
}