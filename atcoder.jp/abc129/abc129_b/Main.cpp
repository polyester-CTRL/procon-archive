#include<iostream>
using namespace std;

int main() {
	int N,S1=0,S2=0,S3=0,S4,a=10000;
	cin >> N;
	int W[100];

	for (int i = 1; i < N+1; ++i) {
		cin >> W[i];
		S2 = S2 + W[i];
	}

	for (int T = 1; T < N+1; ++T) {
		for (int j = 1; j < T+1; ++j) {
			S1 = S1 + W[j];
			
			
			}
		S4 = S2 - S1;
		//cout << S1 << S2 << endl;
		if (S1 > S4) {
			S3 = S1 - S4;
			}
		else {
			S3 = S4 - S1;
			}
		if (a > S3) {
			a = S3;
			}
		S1 = 0;
		S3 = 0;
		S4 = 0;
	}
	cout << a << endl;
	return 0;
}
