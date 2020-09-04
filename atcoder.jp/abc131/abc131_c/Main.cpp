#include<iostream>
using namespace std;
int main() {
	long long int a, b, c, d, Cmax, Cmin, Dmax, Dmin;
	long long int ans;
	long long int Emax, Emin;
	cin >> a >> b >> c >> d;
	Cmax = b / c;
	Cmin = a / c;
	if (a % c == 0) {
		Cmin--;
	}
	Dmax = b / d;
	Dmin = a / d;
	if (a % d == 0) {
		Dmin--;
	}
	//公約数 E
	long long int L=0,g=c,m,n;
	if (c > d) {
		m = c;
		n = d;
	}
	else {
		m = d;
		n = c;
	}

	while (m % n != 0) {
		g = m % n;
		m = n;
		n = g;
	}

	L = c * d / g;
	Emax = b / L;
	Emin = a / L;
	if (a % L == 0) {
		Emin--;
	}
	ans = (b - a + 1) - (Cmax - Cmin) - (Dmax - Dmin) + (Emax - Emin);

	cout << ans << endl;
	return 0;
	
}