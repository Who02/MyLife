#include <bits/stdc++.h>
using namespace std;

void solve(){
	int w,h,n,x1,y1,x2,y2,answ{};
	cin>>w>>h;
	int numbers[101][101]{0};
	cin>>n;
	if(n==0) cout << w*h;
	else{
	for(int k{}; k<n;k++){
		cin>>x1>>y1>>x2>>y2;
		for(int i{x1};i<x2;i++){	
			for(int j{y1};j<y2;j++){
				numbers[i][j] = 1;
			}
		}
	}
	for(int i{};i<w;i++){
		for(int j{};j<h;j++){
			if(numbers[i][j] == 0) answ++;
		}
	}
	cout << answ;
	}
}

int main(){
	solve();
}
