#include <bits/stdc++.h>
using namespace std;
#define vi vector<int>
void solve() {
	int caws{}, bull{};
	vi first;
	vi second;
	string temp1, temp2;
	cin >> temp1 >> temp2;

	for (char c : temp1) {
		first.push_back(c - '0');
	}

	for (char c : temp2) {
		second.push_back(c - '0');
	}

	for (int i{}; i < 4; i++) {
		if (first[i] == second[i]) {
			bull++;
		}
	}

	for (int i{}; i < 4; i++) {
		if ((first[i] == second[0] || first[i] == second[1] || first[i] == second[2] || first[i] == second[3]) 
		&& first[i] != second[i]) {
			caws++;
		}
	}

	cout << bull << " " << caws;
}
int main() {
	solve();
}