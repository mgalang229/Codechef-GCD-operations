#include <bits/stdc++.h>

using namespace std;

void Solve() {
	// input
	int n;
	cin >> n;
	vector<int> b(n);
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}

	// fill vector 'a' with values from 1, ..., n
	vector<int> a(n);
	iota(a.begin(), a.end(), 1);

	// brute-force approach
	for (int i = 0; i < n; i++) {
		if (a[i] == b[i]) {
			continue;
		}
		// check if 'a[i]' can be equal to 'b[i]' by finding
		// the GCD of 'a[i]' and a number in the sequence
		bool checker = false;
		for (int j = 1; j <= n; j++) {
			if (__gcd(a[i], j) == b[i]) {
				checker = true;
				break;
			}
		}
		if (checker) {
			// if yes, then set the value of 'a[i]' to 'b[i]'
			a[i] = b[i];
		}
	}

	// output the answer
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
