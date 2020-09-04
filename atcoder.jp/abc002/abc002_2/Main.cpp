#include<iostream>
#include<string>
using namespace std;
int main(){
  cin.tie(0); ios::sync_with_stdio(false);

	string w;
	cin >> w;

	int i = 0;
	while (i < w.size()) {
		if (w[i] == 'a' ||
			w[i] == 'i' ||
			w[i] == 'u' ||
			w[i] == 'e' ||
			w[i] == 'o') {
			w.erase(w.begin() + i);
			continue;
		}

		++i;
	}

	for (int i = 0; i < w.size();++i) {
		cout << w[i];
	}
	cout << endl;
}