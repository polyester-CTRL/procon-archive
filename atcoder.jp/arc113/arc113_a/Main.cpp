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
vector<pair<long long, long long>> prime_factorize(long long N) {
  vector<pair<long long, long long>> res;
  for(long long a = 2; a * a <= N; ++a) {
    if(N % a != 0)
      continue;
    long long ex = 0; // 指数

    // 割れる限り割り続ける
    while(N % a == 0) {
      ++ex;
      N /= a;
    }

    // その結果を push
    res.push_back({a, ex});
  }

  // 最後に残った数について
  if(N != 1)
    res.push_back({N, 1});
  return res;
}
int main() {
  ll k;
  cin >> k;
  ll ans = 0;
  for(ll i = 1; i <= k; i++) {
    ll tmp = 1;
    auto res = prime_factorize(i);
    for(const auto p : res) {
      tmp *= (p.second + 2) * (p.second + 1) / 2;
    }
    ans += tmp;
  }

  cout << ans << endl;
  return 0;
}