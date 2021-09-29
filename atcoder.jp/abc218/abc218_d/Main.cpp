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
  vector<pair<int, int>> a(n);
  map<pair<int, int>, int> mp;
  for(int i = 0; i < n; i++) {
    cin >> a[i].first >> a[i].second;
    mp[{a[i].first, a[i].second}]++;
  }
  ll ans = 0;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      if(a[i].first == a[j].first || a[i].second == a[j].second) {
        continue;
      }
      if(mp[{a[i].first, a[j].second}] > 0 &&
         mp[{a[j].first, a[i].second}] > 0) {
        ans++;
      }
    }
  }
  cout << ans / 4 << endl;

  return 0;
}