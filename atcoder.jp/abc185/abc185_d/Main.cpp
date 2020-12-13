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
  vector<ll> a(m);
  for(int i = 0; i < m; i++) {
    cin >> a[i];
  }
  a.push_back(n + 1);
  a.push_back(0);
  sort(a.begin(), a.end());
  vector<ll> b;
  for(int i = 0; i < a.size() - 1; i++) {
    if(a[i + 1] - a[i] > 1) {
      b.push_back(a[i + 1] - a[i] - 1);
    }
  }
  ll k = 0;
  if(b.size() > 0) {
    k = *min_element(b.begin(), b.end());
  }
  ll ans = 0;
  for(const auto &p : b) {
    ans += (p + k - 1) / k;
  }
  cout << ans << endl;
  return 0;
}