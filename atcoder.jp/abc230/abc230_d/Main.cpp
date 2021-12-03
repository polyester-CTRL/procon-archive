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
  ll d;
  cin >> n >> d;
  vector<pair<ll, ll>> l(n);
  for(int i = 0; i < n; i++) {
    cin >> l[i].first >> l[i].second;
    swap(l[i].first, l[i].second);
  }
  sort(l.begin(), l.end());
  for(int i = 0; i < n; i++) {
    swap(l[i].first, l[i].second);
  }
  ll now = -d * 10;
  int ans = 0;
  for(int i = 0; i < n; i++) {
    if(now + d <= l[i].first) {
      now = l[i].second;
      ans++;
    }
  }
  cout << ans << endl;

  return 0;
}