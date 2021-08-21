#include <bits/stdc++.h>

using namespace std;

void Solve() {
	int n;
	cin >> n;
	vector<int> b(n);
	for (int i = 0; i < n; i++) {
		cin >> b[i];
	}
	// to make vector 'a' equal to 'b', the factors of 
	// every 'a[i]' must be present in vector 'b'
	bool checker = true;
	for (int i = n; i >= 1; i--) {
		if (i % b[i - 1] != 0) {
			checker = false;
			break;
		}
	}
	cout << (checker ? "YES" : "NO") << '\n';
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
