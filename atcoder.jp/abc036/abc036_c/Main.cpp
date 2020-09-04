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
  int n;
  cin >> n;
  vector<ll> a(n);
  map<ll, pair<ll, ll>> mp;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    mp[a[i]] = {1, 0};
  }
  int cnt = 0;
  for(auto p : mp) {
    mp[p.first].second = cnt;
    cnt++;
  }
  for(int i = 0; i < n; i++) {
    cout << mp[a[i]].second << '\n';
  }

  return 0;
}