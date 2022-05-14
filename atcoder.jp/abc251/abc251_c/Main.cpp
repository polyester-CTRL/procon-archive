#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <iomanip>
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
  vector<pair<ll, string>> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i].second >> a[i].first;
  }
  map<string, int> mp;
  vector<pair<ll, ll>> b;
  for(int i = 0; i < n; i++) {
    if(mp[a[i].second] == 0) {
      mp[a[i].second]++;
      b.push_back({a[i].first, i + 1});
    }
  }
  ll maxi = 0;
  int ans = n + 1;
  for(int i = 0; i < b.size(); i++) {
    if(maxi < b[i].first) {
      ans = b[i].second;
      maxi = b[i].first;
    }
  }

  cout << ans << endl;
  return 0;
}