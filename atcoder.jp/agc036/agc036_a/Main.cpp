#include<iostream>
using namespace std;
int main() {
	long long int s;
	cin >> s;
	long long int x1, x2, x3, y1, y2, y3;
	x1 = y1 = x2 = y2 = x3 = y3 = 0;
	//|x1-x2|*|y1-y3|/2=s/2
	if (s < 1e9) {
	x2 = 1;
	y3 = s;
	}
	else if(s < 1e18){
		x1 = 1;
		y3 = 1e9;
		x2 = s / y3 + 1;
		y2 = s - (x2 - 1) * y3;
	}
	else {
		x1 = 0;
		y3 = 1e9;
		x2 = s / y3;
		y2 = s - x2 * y3;
	}
	
	cout << x1 <<" "<< y1 << " " << x2 << " " << y2 << " " << x3 << " " << y3 << endl;
	return 0;
}