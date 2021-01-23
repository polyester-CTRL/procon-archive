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
using ll = long long;
ll op(ll a, ll b) { return min(a, b); }

ll e() { return (int)(1e9); }

int main() {
  int n;
  cin >> n;
  vector<ll> a(n);
  segtree<ll, op, e> seg(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    seg.set(i, a[i]);
  }
  ll maxi = 0;
  for(int i = 0; i < n; i++) {
    ll mini = a[i];
    for(int j = i; j < n; j++) {
      mini = min(mini, a[j]);
      maxi = max(maxi, mini * (j + 1 - i));
    }
  }
  cout << maxi << endl;
  return 0;
}