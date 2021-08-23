#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <set>
#include <stack>
#include <string>
#include <vector>
using namespace std;
using ll = long long;
int main() {
  int t;
  cin >> t;
  while(t--) {
    string s;
    cin >> s;
    reverse(s.begin(), s.end());
    for(int i = 0; i < s.length(); i++) {
      if(s[i] == 'A') {
        cout << "T";
      } else if(s[i] == 'T') {
        cout << "A";
      } else if(s[i] == 'C') {
        cout << "G";
      } else {
        cout << "C";
      }
    }
    cout << endl;
  }
  return 0;
}