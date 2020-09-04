#include<iostream>
using namespace std;
int main() {
	int N, M,i=0;
	cin >> N >> M;
	int L=0,R=100000,L0,R0;
	for (i=0;i<M;i=i+1) {
		cin >> L0 >> R0;
		if (L < L0) {
			L = L0;
		}
		if (R > R0) {
			R = R0;
		}
	}
	if (L <= R) {
		cout << R - L + 1;
	}
	else {
		cout << 0;
	}
	return 0;
}