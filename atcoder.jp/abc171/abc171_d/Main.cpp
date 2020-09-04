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
  map<ll, ll> mp;
  ll sum = 0;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    mp[a[i]]++;
    sum += a[i];
  }
  int q;
  cin >> q;
  for(int i = 0; i < q; i++) {
    ll tmp, t2;
    cin >> tmp >> t2;
    ll num = mp[tmp];
    sum -= num * tmp;
    mp[tmp] = 0;
    mp[t2] += num;
    sum += num * t2;
    cout << sum << '\n';
  }
  return 0;
}