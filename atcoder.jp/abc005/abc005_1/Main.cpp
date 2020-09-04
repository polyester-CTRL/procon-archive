#include<iostream>
using namespace std;
signed main() {
	int x, y;
	cin >> x >> y;
	if (y >= x) {
		cout << y / x << "\n";
	}
	else {
		cout << 0 << "\n";
	}
	return 0;
}