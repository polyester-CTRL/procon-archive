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
  if(n == 1) {
    cout << 0 << endl;
    return 0;
  }
  int cnt = 0;
  for(int i = 0; i < n / 2; i++) {
    if(s[i] != s[n - i - 1]) {
      cnt++;
    }
  }
  int ans = 0;
  for(int i = 0; i < n / 2; i++) {
    if(s[i] == s[n - i - 1]) {
      ans += 50;
    } else if(cnt > 1) {
      ans += 50;
    } else {
      ans += 48;
    }
  }
  if(n % 2 != 0) {
    bool ok = false;
    for(int i = 0; i < n / 2; i++) {
      if(s[i] != s[n - i - 1]) {
        ok = true;
      }
    }
    if(ok) {
      ans += 25;
    }
  }
  cout << ans << endl;
  return 0;
}