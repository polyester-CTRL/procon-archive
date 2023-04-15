#include <iostream>
#include <string>
using namespace std;
int main() {
  int n;
  string s;
  cin >> n >> s;
  int sum = 0;
  for(int i = 0; i < n; i++) {
    if(s[i] == 'x') {
      cout << "No\n";
      return 0;
    }
    if(s[i] == 'o') {
      sum++;
    }
  }
  if(sum) {
    cout << "Yes\n";
  } else {
    cout << "No\n";
  }
}