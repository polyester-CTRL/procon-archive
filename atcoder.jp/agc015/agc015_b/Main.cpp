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
  ll ans = 0;
  for(int i = 0; i < n; i++) {
    if(s[i] == 'U') {
      ans += (n - i - 1) + i * 2;
    } else {
      ans += (n - i - 1) * 2 + i;
    }
  }
  cout << ans << endl;
  return 0;
}