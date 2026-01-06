#include <bits/stdc++.h>
using namespace std;
using ld = long double;

void solve(){
	ld x1,y1,r1,x2,y2,r2;
	cin >>x1>>y1>>r1>>x2>>y2>>r2;
	ld R_;
	R_ = hypot(x1-x2,y1-y2);
	if (abs(r1 - r2) <= R_ && R_ <= r1 + r2) cout << "YES"; 
	else cout << "NO";
}

int main(){
	solve();
}