#include <algorithm>
#include <atcoder/all>
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
int main() {
  int h, w;
  cin >> h >> w;
  vector<string> s(h);
  for(int i = 0; i < h; i++) {
    cin >> s[i];
  }
  dsu uf(h * w);
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      if(i < h - 1 && s[i][j] != s[i + 1][j]) {
        uf.merge(i * w + j, (i + 1) * w + j);
      }
      if(j < w - 1 && s[i][j] != s[i][j + 1]) {
        uf.merge(i * w + j, i * w + j + 1);
      }
    }
  }
  vector<pair<ll, ll>> a(h * w, {0, 0});
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      if(s[i][j] == '.') {
        a[uf.leader(i * w + j)].first++;
      } else {
        a[uf.leader(i * w + j)].second++;
      }
    }
  }
  ll ans = 0;
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      if(s[i][j] == '.') {
        ans += a[uf.leader(i * w + j)].second;
      } else {
        ans += a[uf.leader(i * w + j)].first;
      }
    }
  }
  cout << ans / 2 << endl;
  return 0;
}