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
  ll k;
  cin >> n >> k;
  vector<ll> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  queue<ll> que;
  ll ans = 0;
  vector<ll> sum(n + 1, 0);
  map<ll, ll> mp;
  mp[0]++;
  for(int i = 0; i < n; i++) {
    sum[i + 1] = sum[i] + a[i];
    // cout << sum[i + 1] << " ";
    ans += mp[sum[i + 1] - k];
    mp[sum[i + 1]]++;
  }
  cout << ans << endl;
  return 0;
}