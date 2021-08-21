#include <bits/stdc++.h>

using namespace std;

void Solve() {
	int n;
	cin >> n;
	vector<int> b(n);
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	vector<int> a(n);
	// fill all vector 'a' with values from 1 to 'n'
	iota(a.begin(), a.end(), 1);
	for (int i = 0; i < n; i++) {
		if (a[i] == b[i]) {
			continue;
		}
		// check if the GCD of 'a[i]' and a number from
		// 1 to 'n' is equal to 'b[i]'
		bool checker = false;
		for (int j = 1; j <= n; j++) {
			if (__gcd(a[i], j) == b[i]) {
				checker = true;
				break;
			}
		}
		// if there is, then set the value of 'a[i]' to 'b[i]'
		if (checker) {
			a[i] = b[i];
		}
	}
	cout << (a == b ? "YES" : "NO") << '\n';
}

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t = 1;
	cin >> t;
	while (t--) {
		Solve();
	}
	return 0;
}
