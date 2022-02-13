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
const ll MOD = 998244353;

ll modpow(ll x, ll n) {
  ll ans = 1;
  while(n > 0) {
    if(n % 2 == 1) {
      ans *= x;
      ans %= MOD;
    }
    x *= x;
    x %= MOD;
    n >>= 1;
  }
  return ans;
}
int main() {
  ll x;
  cin >> x;
  if(x <= 4) {
    cout << x << endl;
    return 0;
  }
  queue<pair<ll, pair<ll, ll>>> que;
  vector<pair<ll, ll>> mul;
  que.push({x, {0, 0}});
  while(!que.empty()) {
    auto now = que.front();
    que.pop();
    if(now.first >= 5) {
      if(now.first % 2 == 0) {
        now.second.first *= 2;
        if(now.second.first == 0) {
          now.second.first = 2;
        }
        now.second.first += now.second.second;
      } else {
        now.second.second *= 2;
        now.second.second += now.second.first;
        if(now.second.second == 0) {
          now.second.second = 1;
        }
      }
      if(now.second.first == 0) {
        now.second.first = 1;
      }
      now.first /= 2;
      que.push({now.first, {now.second.first, now.second.second}});
      // cout << now.first << " " << now.second.first << " " << now.second.second
      //      << endl;
    } else {
      mul.push_back({now.first, now.second.first});
      if(now.first == 4) {
        mul.push_back({2, now.second.second});
        mul.push_back({3, now.second.second});
      } else {
        mul.push_back({now.first + 1, now.second.second});
      }
    }
  }
  ll ans = 1;
  for(int i = 0; i < mul.size(); i++) {
    ans *= modpow(mul[i].first, mul[i].second);
    ans %= MOD;
  }
  cout << ans << endl;
  return 0;
}