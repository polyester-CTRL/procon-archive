#include <algorithm>
#include <atcoder/fenwicktree>
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
using namespace atcoder;
using namespace std;
using ll = long long;
int main() {
  int n, q;
  cin >> n >> q;
  vector<int> a(n), last(n, -1);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    a[i]--;
  }
  fenwick_tree<ll> fen(n + 1);
  vector<pair<int, pair<int, int>>> b(q);
  for(int i = 0; i < q; i++) {
    cin >> b[i].second.first >> b[i].first;
    b[i].second.first--;
    b[i].first--;
    b[i].second.second = i;
  }
  sort(b.begin(), b.end());
  int ri = 0;
  vector<int> ans(q);
  for(int i = 0; i < q; i++) {
    if(ri <= b[i].first) {
      for(int j = ri; j <= b[i].first; j++) {
        if(last[a[j]] != -1) {
          fen.add(last[a[j]], -1);
        }
        last[a[j]] = j;
        fen.add(last[a[j]], 1);
      }
      ri = b[i].first;
    }
    ans[b[i].second.second] = fen.sum(b[i].second.first, b[i].first);
  }
  for(int i = 0; i < q; i++) {
    cout << ans[i] + 1 << '\n';
  }

  return 0;
}