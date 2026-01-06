#include <bits/stdc++.h>
using namespace std;

bool checkErr(vector<char>& chars){
	if(chars.size() != 5) return true;
	if(chars[2] != '-') return true;
	if (!(chars[0] >= 'A' && chars[0] <= 'H') || !(chars[3] >= 'A' && chars[3] <= 'H')) return true;
	if (!(chars[1] >= '1' && chars[1] <= '8') || !(chars[4] >= '1' && chars[4] <= '8')) return true;
	return false;
}
bool checkTrue(vector<char>& chars){
	int x1 = chars[0] - 'A' + 1;
    int y1 = chars[1] - '0';
    int x2 = chars[3] - 'A' + 1;
    int y2 = chars[4] - '0';
	
    int dx = abs(x1 - x2);
    int dy = abs(y1 - y2);
    return (dx == 1 && dy == 2) || (dx == 2 && dy == 1);
}

void solve(){
	string input; getline(cin, input);
	vector <char> chars(input.begin(), input.end());
	if(checkErr(chars)) {cout<<"ERROR";}
	else if(checkTrue(chars)){cout<<"YES";}
	else {cout<<"NO";}
}

int main(){
	solve();
}