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
  string s, t;
  cin >> s >> t;
  int n = s.length();
  for(int i = 0; i < n; i++) {
    if(s[i] == t[i]) {
      continue;
    }
    bool ok = false;
    if(s[i] == '@') {
      if(t[i] == 'a' || t[i] == 't' || t[i] == 'c' || t[i] == 'o' ||
         t[i] == 'd' || t[i] == 'e' || t[i] == 'r' || t[i] == '@') {
        ok = true;
      }
    }
    if(t[i] == '@') {
      if(s[i] == 'a' || s[i] == 't' || s[i] == 'c' || s[i] == 'o' ||
         s[i] == 'd' || s[i] == 'e' || s[i] == 'r' || s[i] == '@') {
        ok = true;
      }
    }
    if(ok) {
      continue;
    } else {
      cout << "You will lose\n";
      return 0;
    }
  }
  cout << "You can win\n";
  return 0;
}