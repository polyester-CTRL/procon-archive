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
#include<atcoder/segtree>
using namespace std;
using ll = long long;
using namespace atcoder;
pair<ll, int> op(pair<ll, int> a, pair<ll, int> b) {
  if(a.second < b.second) {
    return a;
  } else {
    return b;
  }
}
pair<ll, int> e() { return make_pair(10000000001, 100000000); }

int main() {
  int n, k;
  cin >> n >> k;
  vector<ll> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  vector<pair<ll, int>> miniP;
  
  for(int i = k; i < n; i++) {
    miniP.push_back({a[i], i});
  }
  sort(miniP.begin(), miniP.end(),
       [](const pair<ll, int> &a, const pair<ll, int> &b) {
         return a.first < b.first;
       });
  segtree<pair<ll, int>, op, e> seg(miniP);
  int ans = n + 100;
  for(int i = 0; i < k; i++) {
    auto p =
        upper_bound(miniP.begin(), miniP.end(), make_pair(a[i], -1),
                    [](const pair<ll, int> &a, const pair<ll, int> &b) { return a.first < b.first; });
    
    
    // cout << a[i] <<" " << (*p).first << ":" << endl;
    if(p == miniP.end()) {
      continue;
    }
    // cout << (*p).second - k << endl;
    auto p2 = seg.prod(distance(miniP.begin(), p), miniP.size());
    ans = min(ans, p2.second - i);
    // cout << ans << " " << i << " " << (*p).first << " " << p2.second << ":";
    // cout << a[i] << " " << p2.first << endl;
  }
  if(ans == n + 100) {
    cout << -1 << endl;
  } else {
    cout << ans << endl;
  }

  return 0;
}