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
  ll n, k;
  cin >> n >> k;
  vector<ll> a(1001, 0);
  for(int i = 0; i < k; i++) {
    int tmp;
    cin >> tmp;
    tmp--;
    a[tmp] = 1;
  }
  vector<vector<ll>> x(n, vector<ll>(2)), lights;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < 2; j++) {
      cin >> x[i][j];
    }
    if(a[i] == 1) {
      lights.push_back(x[i]);
    }
  }
  ll ans = 0;
  for(int i = 0; i < n; i++) {
    ll tmp = 1e18;
    for(int j = 0; j < lights.size(); j++) {
      ll num = (x[i][0] - lights[j][0]) * (x[i][0] - lights[j][0]) +
               (x[i][1] - lights[j][1]) * (x[i][1] - lights[j][1]);
      tmp = min(tmp, abs(num));
    }
    ans = max(ans, abs(tmp));
  }
  printf("%.10f\n", sqrt(ans));
  return 0;
}