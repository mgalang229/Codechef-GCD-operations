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
		// check if the corresponding 'i' + 1 index is divisible by the every 'b[i]'
		bool checker = true;
		for (int i = n; i >= 1; i--) {
			if (i % b[i - 1] != 0) {
				checker = false;
				break;
			}
		}
		cout << (checker ? "YES" : "NO") << '\n';
	}
	return 0;
}
