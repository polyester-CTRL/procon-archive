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
  for(int i = n - 1; i >= 0; i--) {
    if(s[i] == '0') {
      s.pop_back();
    } else {
      break;
    }
  }
  n = s.length();
  for(int i = 0; i < n; i++) {
    if(s[i] == s[n - 1 - i]) {
      continue;
    } else {
      cout << "No\n";
      return 0;
    }
  }
  cout << "Yes\n";
  return 0;
}