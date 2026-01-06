#include <bits/stdc++.h>
using namespace std;
long long sumfunk(long long n) {
	if (n > 0) return n * (n + 1) / 2;
	if (n == 0) return 1;
	if (n < 0) return (2 - n) * (n + 1) / 2;
}
int main() {
	long long n; cin >> n;
	cout << sumfunk(n) << endl;
	return 0;
}