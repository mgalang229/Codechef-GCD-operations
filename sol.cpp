#include <bits/stdc++.h>

using namespace std;

int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	int tt;
	cin >> tt;
	while (tt--) {
		int n;
		cin >> n;
		vector<int> b(n);
		for (int i = 0; i < n; i++) {
			cin >> b[i];
		}
		vector<int> a(n);
		// fill vector 'a' with values from 1 to 'n'
		iota(a.begin(), a.end(), 1);
		for (int i = 0; i < n; i++) {
			if (a[i] == b[i]) {
				// if 'a[i]' is equal to 'b[i]', then skip
				continue;
			}
			// check if the GCD of 'a[i]' and a number from 1 to 'n' is equal to 'b[i]'
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
		cout << (a == b ? "YES" : "NO") << '\n';
	}
	return 0;
}
