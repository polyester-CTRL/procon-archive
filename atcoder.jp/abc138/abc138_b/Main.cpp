#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main() {
	int n = 1;
	cin >> n;
	//vector<double>a(n);
	double a[105];
	double s1 = 0, s2 = 1;
	for (int i = 0; i < n; i++) {
		cin >> a[n];
		s1 += 1 / a[n];
		
	}
	cout << 1 / s1 << endl;
	return 0;
}