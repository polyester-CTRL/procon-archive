#include <algorithm>
#include <atcoder/dsu>
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
  int n;
  string s1, s2;
  cin >> n >> s1 >> s2;
  dsu uf(n + 1);
  vector<int> a(n, -1);
  for(int i = 0; i < n; i++) {
    for(int j = i + 1; j < n; j++) {
      if(s1[i] == s1[j]) {
        uf.merge(i, j);
      }
      if(s2[i] == s2[j]) {
        uf.merge(i, j);
      }
      if(s1[i] == s2[j] || s2[i] == s1[j]) {
        uf.merge(i, j);
      }
    }
  }
  for(int i = 0; i < n; i++) {
    if(s1[i] >= '0' && s1[i] <= '9') {
      a[uf.leader(i)] = 0;
    }
    if(s2[i] >= '0' && s2[i] <= '9') {
      a[uf.leader(i)] = 0;
    }
  }
  ll ans = 1;
  for(int i = 0; i < n; i++) {
    if(a[uf.leader(i)] != -1) {
      continue;
    }
    if(i == 0) {
      ans *= 9;
    } else {
      ans *= 10;
    }
    a[uf.leader(i)] = 0;
  }
  cout << ans << endl;
  return 0;
}