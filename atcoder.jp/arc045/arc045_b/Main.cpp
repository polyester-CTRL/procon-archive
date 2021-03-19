#include <algorithm>
#include <atcoder/segtree>
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
using namespace atcoder;
int e() { return (int)1e9; }
int op(int a, int b) { return min(a, b); }
using ll = long long;
int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n + 1, 0), s(m), t(m);
  for(int i = 0; i < m; i++) {
    cin >> s[i] >> t[i];
    s[i]--;
    a[s[i]]++;
    a[t[i]]--;
  }
  for(int i = 0; i < n; i++) {
    a[i + 1] += a[i];
  }
  segtree<int, op, e> seg(n + 1);
  for(int i = 0; i < n; i++) {
    seg.set(i, a[i]);
  }
  vector<int> ans;
  for(int i = 0; i < m; i++) {
    if(seg.prod(s[i], t[i]) > 1) {
      ans.push_back(i);
    }
  }
  cout << ans.size() << endl;
  for(const auto &p : ans) {
    cout << p + 1 << '\n';
  }

  return 0;
}