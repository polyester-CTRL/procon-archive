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
  ll n;
  cin >> n;
  vector<ll> ans;
  for(ll i = 1; i * i <= n; ++i) {
    if(n % i == 0) {
      ans.push_back(n / i);
      if(n / i != i) {
        ans.push_back(i);
      }
    }
  }
  sort(ans.begin(), ans.end());
  for(const auto &p : ans) {
    cout << p << '\n';
  }
  return 0;
}