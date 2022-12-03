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
vector<pair<ll, ll>> func(ll n) {
  vector<pair<ll, ll>> res;
  for(ll i = 2; i * i <= n; i++) {
    if(n % i != 0) {
      continue;
    }
    int e = 0;
    while(n % i == 0) {
      e++;
      n /= i;
    }
    res.push_back({i, e});
  }
  if(n != 1) {
    res.push_back({n, 1});
  }
  return res;
}
int main() {
  ll k;
  cin >> k;
  auto res = func(k);
  reverse(res.begin(), res.end());
  if(res[0].second == 1) {
    k /= res[0].first;
  }
  // cout << k << endl;
  ll maxi = 1;
  for(int i = 0; i < res.size(); i++) {
    ll cnt = res[i].first;
    while(res[i].second > 0) {
      ll tmp = cnt;
      // cout << tmp << endl;
      while(tmp % res[i].first == 0) {
        res[i].second--;
        tmp /= res[i].first;
      }
      cnt += res[i].first;
    }
    maxi = max(maxi, cnt - res[i].first);
  }
  cout << maxi << endl;

  return 0;
}