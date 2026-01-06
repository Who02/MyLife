#include <bits/stdc++.h>
using namespace std;
int main() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	set<long long> answ;
	for (long long i{-100}; i < 101; i++) {
		if (a * i * i * i + b * i * i + c * i + d == 0) {
			answ.insert(i);
		}
    }

	for (auto i : answ) {
		cout << i << " ";
	}
	return 0;
}