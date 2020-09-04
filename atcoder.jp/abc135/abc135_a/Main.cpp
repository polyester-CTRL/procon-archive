#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int a, b, k;
	cin >> a >> b;
	k = abs(a - b);
	if (k % 2 == 0) {
		
		cout << (a + b) / 2 << endl;
	}
	else {
		cout << "IMPOSSIBLE" << endl;
	}
	return 0;
}