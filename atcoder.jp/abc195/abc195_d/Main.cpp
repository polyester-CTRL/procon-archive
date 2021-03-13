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
  int n, m, q;
  cin >> n >> m >> q;
  vector<pair<ll, ll>> w(n);
  for(int i = 0; i < n; i++) {
    cin >> w[i].first >> w[i].second;
  }
  sort(w.rbegin(), w.rend());
  vector<ll> x(m);
  for(int i = 0; i < m; i++) {
    cin >> x[i];
  }
  for(int i = 0; i < q; i++) {
    int l, r;
    cin >> l >> r;
    l--, r--;
    vector<ll> tmp;
    ll ans = 0;
    for(int j = 0; j < l; j++) {
      tmp.push_back(x[j]);
    }
    for(int j = r + 1; j < m; j++) {
      tmp.push_back(x[j]);
    }
    sort(tmp.begin(), tmp.end());
    int cnt = 0;
    vector<ll> check(n, 0);
    for(int j = 0; j < tmp.size(); j++) {
      ll maxi = 0;
      for(int k = 0; k < n; k++) {
        if(tmp[j] >= w[k].first && check[k] == 0) {
          maxi = max(maxi, w[k].second);
        }
      }
      for(int k = 0; k < n; k++) {
        if(maxi == w[k].second && check[k] == 0) {
          check[k] = 1;
          break;
        }
      }
    }
    for(int k = 0; k < n; k++) {
      if(check[k] == 1) {
        ans += w[k].second;
      }
    }
    cout << ans << endl;
    tmp.clear();
  }
  return 0;
}