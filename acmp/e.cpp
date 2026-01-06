#include <bits/stdc++.h>
using namespace std;
void solve(){
	string exponenta = "7182818284590452353602875";
	int n{};
	cin >> n;
	if (n == 0)
		cout << "3";
	else {
		cout << "2.";
		for (int i = 0; i < n - 1; ++i)
			cout << exponenta[i];
		if (exponenta[n] >= '5')
			cout << static_cast<char>(exponenta[n - 1] + 1);
		else
			cout << exponenta[n - 1];
	}
}
int main() {
	solve();
}