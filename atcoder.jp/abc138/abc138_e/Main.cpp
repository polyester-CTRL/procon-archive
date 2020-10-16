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
  vector<vector<int>> vs(200);
  for(int i = 0; i < s.size(); i++) {
    vs[s[i]].push_back(i);
  }
  ll n = t.length(), now = 0, ans = 0;
  for(int i = 0; i < n; i++) {
    if(vs[t[i]].size() == 0) {
      cout << -1 << endl;
      return 0;
    }
    auto next = lower_bound(vs[t[i]].begin(), vs[t[i]].end(), now);
    if(next == vs[t[i]].end()) {
      ans += s.size() - now;
      now = -1;
      next = lower_bound(vs[t[i]].begin(), vs[t[i]].end(), now);
      now = 0;
    }
    ans += (*next - now + 1);
    now = *next + 1;
  }
  cout << ans << endl;
  return 0;
}