#include<iostream>
using namespace std;
int main() {
	double w, h, x, y;
	double ans;
	cin >> w >> h >> x >> y;
	ans = (double)w * h / 2.0;
	if (x == w / 2 && y == h / 2) {
		cout << ans << " " << 1 << endl;
	}
	else {
		cout << ans << " " << 0 << endl;
	}
	return 0;
}