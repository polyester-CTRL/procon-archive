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
  string s;
  cin >> s;
  int n = s.length();
  string t[4] = {"dream", "dreamer", "erase", "eraser"};
  reverse(s.begin(), s.end());
  for(int i = 0; i < 4; i++) {
    reverse(t[i].begin(), t[i].end());
  }
  for(int i = 0; i < n - 5; i++) {
    if(s.substr(i, 5) == t[0]) {
      i += 4;
    } else if(s.substr(i, 7) == t[1]) {
      i += 6;
    } else if(s.substr(i, 5) == t[2]) {
      i += 4;
    } else if(s.substr(i, 6) == t[3]) {
      i += 5;
    } else {
      cout << "NO\n";
      return 0;
    }
  }
  cout << "YES\n";
  return 0;
}