#include<iostream>
using namespace std;
signed main() {
	cin.tie(0);
	ios::sync_with_stdio(false);
	int a;
	cin >> a;
	if (a < 1e2) {
		cout << '0'<< '0' << "\n";
		return 0;
	}
	if (1e2 <= a && a < 1 * 1e3) {
		cout <<'0'<< a / 1e2 << "\n";
		return 0;
	}
	if (1e3 <= a && a <= 5 * 1e3) {
		cout << a / 1e2 << "\n";
		return 0;
	}
	if (6 * 1e3 <= a && a <= 3 * 1e4) {
		cout << a / 1e3 + 50 << "\n";
		return 0;
	}
	if (35 * 1e3 <= a && a <= 7 * 1e4) {
		cout << (a / 1e3 - 30) / 5 + 80 << "\n";
		return 0;
	}
	if (7 * 1e4 < a) {
		cout << 89 << "\n";
		return 0;
	}

	return 0;
}