#include<iostream>
using namespace std;
int main() {
	int n;
	int a[100];
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	//並び替え
	for (int s = 0; s < n - 1; s++) {
		for (int t = s + 1; t < n; t++) {
			if (a[t] > a[s]) {
				int tmp = a[t];
				a[t] = a[s];
				a[s] = tmp;
			}
		}
	}
	int ans = 0;
	for (int j = 0; j < n ; j++) {
		if (j % 2 == 0) {
			ans = ans + a[j];
		}
		else {
			ans = ans - a[j];
		}
	}
	cout << ans << endl;
	return 0;
}	