#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
	int n, a[20];
	cin >> n;
	for (int i = 0; i < n; ++i) {
		cin >> a[i];
	}
	int ans=0;
	for (int i = 1; i < n-1 ; ++i) {
		if ((min(a[i - 1], a[i]) == a[i-1]) && (min(a[i], a[i + 1]) == a[i])
			|| (min(a[i - 1], a[i]) == a[i]) && (min(a[i], a[i + 1]) == a[i+1])) {
			ans++;
		}
	}
	cout << ans << endl;
	return 0;
}