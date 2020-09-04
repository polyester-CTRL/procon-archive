#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
#include<map>
using namespace std;
int facctorialMethod(int k) {
	int sum = 1;
	for (int i = 1; i <= k; ++i)
	{
		sum *= i;
	}
	return sum;
}
int main() {
	int n;
	cin >> n;
	vector<string>a(n);
	vector<long long int>b(n);
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		b[i] = 1;
		for (int j = 0; j < 10; j++) {
			if (a[i][j] == 'a') {
				b[i] *= 2;
			}
			else if (a[i][j] == 'b') {
				b[i] *= 3;
			}
			else if (a[i][j] == 'c') {
				b[i] *= 5;
			}
			else if (a[i][j] == 'd') {
				b[i] *= 7;
			}
			else if (a[i][j] == 'e') {
				b[i] *= 11;
			}
			else if (a[i][j] == 'f') {
				b[i] *= 13;
			}
			else if (a[i][j] == 'g') {
				b[i] *= 17;
			}
			else if (a[i][j] == 'h') {
				b[i] *= 19;
			}
			else if (a[i][j] == 'i') {
				b[i] *= 23;
			}
			else if (a[i][j] == 'j') {
				b[i] *= 29;
			}
			else if (a[i][j] == 'k') {
				b[i] *= 31;
			}
			else if (a[i][j] == 'l') {
				b[i] *= 37;
			}
			else if (a[i][j] == 'm') {
				b[i] *= 41;
			}
			else if (a[i][j] == 'n') {
				b[i] *= 43;
			}
			else if (a[i][j] == 'o') {
				b[i] *= 47;
			}
			else if (a[i][j] == 'p') {
				b[i] *= 53;
			}
			else if (a[i][j] == 'q') {
				b[i] *= 59;
			}
			else if (a[i][j] == 'r') {
				b[i] *= 61;
			}
			else if (a[i][j] == 's') {
				b[i] *= 67;
			}
			else if (a[i][j] == 't') {
				b[i] *= 71;
			}
			else if (a[i][j] == 'u') {
				b[i] *= 73;
			}
			else if (a[i][j] == 'v') {
				b[i] *= 79;
			}
			else if (a[i][j] == 'w') {
				b[i] *= 83;
			}
			else if (a[i][j] == 'x') {
				b[i] *= 89;
			}
			else if (a[i][j] == 'y') {
				b[i] *= 97;
			}
			else if (a[i][j] == 'z') {
				b[i] *= 101;
			}
		}
	}
	long long int ans = 0;
	int count=1;
	//sort(b.begin(), b.end());
	
	map <string, int> mp;
	for (int i = 0; i < n; i++) {
		sort(a[i].begin(), a[i].end());
		ans += mp[a[i]];
		mp[a[i]]++;
	}
	cout << ans << endl;
	return 0;
}