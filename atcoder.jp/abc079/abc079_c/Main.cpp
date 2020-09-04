#include<iostream>
using namespace std;
int main() {
	int a, b, c, d, s;
	cin >> s;
	a = s / 1000;
	b = (s - a * 1000) / 100;
	c = (s - a * 1000 - b * 100) / 10;
	d = (s - a * 1000 - b * 100 - c * 10);
	if (a + b + c + d == 7) {
		cout << a << '+' << b << '+' << c << '+' << d << "=7" << endl;
	}
	else if (a + b + c - d == 7) {
		cout << a << '+' << b << '+' << c << '-' << d << "=7" << endl;
	}
	else if (a + b - c + d == 7) {
		cout << a << '+' << b << '-' << c << '+' << d << "=7" << endl;
	}
	else if (a + b - c - d == 7) {
		cout << a << '+' << b << '-' << c << '-' << d << "=7" << endl;
	}
	else if (a - b + c + d == 7) {
		cout << a << '-' << b << '+' << c << '+' << d << "=7" << endl;
	}
	else if (a - b + c - d == 7) {
		cout << a << '-' << b << '+' << c << '-' << d << "=7" << endl;
	}
	else if (a - b - c + d == 7) {
		cout << a << '-' << b << '-' << c << '+' << d << "=7" << endl;
	}
	else if (a - b - c - d == 7) {
		cout << a << '-' << b << '-' << c << '-' << d << "=7" << endl;
	}
}