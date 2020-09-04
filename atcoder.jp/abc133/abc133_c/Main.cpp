#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	long long int L, r,i,j;
	cin >> L >> r;
	int x=0;
	int min=2020;
	for (i = L; i <= r; i++) {
		if (i % 2019 == 0) {
			min = 0;
			break;
		}
		for (j = i + 1; j <= r; j++) {
			if (j % 2019 == 0 ) {
				min = 0;
				break;
			}
			x = (i % 2019 * j % 2019) % 2019;
			if (min > x) {
				min = x;
			}
			
			x = 0;
		}
	}
	cout << min << endl;
	return 0;
}