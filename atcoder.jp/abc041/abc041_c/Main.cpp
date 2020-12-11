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
  vector<pair<ll, ll>> v(n);
  for(int i = 0; i < n; i++) {
    ll a;
    cin >> a;
    v[i] = {a, i};
  }
  sort(v.rbegin(), v.rend());
  for(int i = 0; i < n; i++) {
    cout << v[i].second + 1 << '\n';
  }
  return 0;
}