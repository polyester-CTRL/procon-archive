#include<iostream>
using namespace std;
int main() {
	int n, a[100];
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
	}
	for (int s = 0; s < n - 1; s++) {
		for (int t = s + 1; t < n; t++) {
			if (a[t] > a[s]) {
				int tmp = a[t];
				a[t] = a[s];
				a[s] = tmp;
			}
		}
	}
	int ans=n;
	for (int s = 0; s < n - 1; s++) {
		if (a[s] == a[s + 1]) {
			ans--;
		}
	}

	
	cout << ans << endl;
	return 0;


}