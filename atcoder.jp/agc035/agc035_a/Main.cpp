#include<iostream>
using namespace std;
int main() {
	int n;

	cin >> n;
	int flag = 0;
	long long int a[100000 + 5];
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		flag ^= a[i];
	}
	cout << (flag ? "No" : "Yes") << endl;
	return 0;
}