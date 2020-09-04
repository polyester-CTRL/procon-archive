#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int a[60],b[60];
	int n;
	int flag = 0;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		b[i] = a[i];
	}
	sort(a, a + n);
	for (int i = 0; i < n; i++) {
		if (a[i] == b[i]) {
			continue;
		}
		else {
			flag++;
		}
	}
	if (flag <= 2) {
		cout << "YES" << endl;
	}
	else {
		cout << "NO" << endl;
	}
	return 0;
}