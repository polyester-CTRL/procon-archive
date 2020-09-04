#include<iostream>
using namespace std;
signed main() {
	double n;
	double ans;
	cin >> n;
	ans = 0;
	for (int i = 1; i <= n; i++) {
		//cout << 1/n ;
		ans = ans + (double)(1 / n) * 1e4 * i;
		//cout << ans << "\n";
	}
	cout << ans << "\n";
	return 0;
}