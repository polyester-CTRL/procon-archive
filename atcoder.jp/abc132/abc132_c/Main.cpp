#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main() {
	int n;
	cin >> n;
	long long int a[100000];
	for (int i = 0; i < n; ++i) {
		a[i] = 0;
		cin >> a[i];
	}
	/*
	for (int s = 0; s < n - 1; s++) {
		for (int t = s + 1; t < n; t++) {
			if (a[t] > a[s]) {
				int tmp = a[t];
				a[t] = a[s];
				a[s] = tmp;
			}
		}
	}
	*/
	sort(a, a + n);
	
	cout << a[n / 2] - a[n / 2 - 1] << endl;
	return 0;
}