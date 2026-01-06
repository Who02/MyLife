#include <bits/stdc++.h>
using namespace std;
int main() {
	cout << fixed << setprecision(4);
	vector<unsigned long long> number;
	unsigned long long num;

	while (cin >> num) {
		number.push_back(num);
	}

	for (auto it = number.rbegin(); it != number.rend(); ++it) {
		long double temp = sqrt(static_cast<long double>(*it));
		cout << temp << endl;
	}
}