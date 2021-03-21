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
  ll n, m;
  cin >> n >> m;
  vector<ll> a(n);
  ll ans = 0;
  for(int i = 0; i < n; i++) {
    string tmp;
    cin >> tmp;
    ll num = 0;
    for(int j = 0; j < m; j++) {
      // a[i].push_back((int)(tmp[j] - '0'));
      num += (ll)(tmp[j] - '0');
    }
    if(num % 2 == 0) {
      ans++;
    }
  }

  cout << ans * (n - ans) << endl;
  return 0;
}