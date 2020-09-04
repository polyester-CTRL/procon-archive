#include<iostream>
using namespace std;

int main() {
	int P, Q, R,s;
	cin >> P >> Q >> R;
	if (P > Q ) {
		s = Q;
		if (P > R) {
			s = s + R;
		}
		else {
			s = s + P;
		}
		
	}
	else {
		s = P;
		if (Q > R) {
			s = s + R;
		}
		else
		{
			s = s + Q;
		}
	}
	cout << s << endl;
	return 0;
}
