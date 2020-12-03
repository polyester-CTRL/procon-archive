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
const ll MOD = 1000000007;
int main() {
  int n;
  cin >> n;
  string s;
  cin >> s;
  vector<string> t(n);
  for(int i = 0; i < n; i++) {
    cin >> t[i];
  }
  vector<ll> ans(s.length() + 10, 0);
  ans[0] = 1;
  for(int i = 0; i < s.length(); i++) {
    for(int j = 0; j < n; j++) {
      if(n - i - t[j].length() < 0) {
        continue;
      }
      bool ok = true;
      for(int k = 0; k < t[j].length(); k++) {
        if(t[j][k] != s[i + k]) {
          ok = false;
          break;
        }
      }
      if(ok) {
        ans[i + t[j].length()] += ans[i];
        ans[i + t[j].length()] %= MOD;
      }
    }
  }
  cout << ans[s.length()] << endl;
  return 0;
}