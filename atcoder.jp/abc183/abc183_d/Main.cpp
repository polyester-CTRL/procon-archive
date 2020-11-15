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
  ll w;
  cin >> n >> w;
  vector<ll> sum(200010, 0);
  for(int i = 0; i < n; i++) {
    ll s, t, p;
    cin >> s >> t >> p;
    sum[s] += p;
    sum[t] -= p;
  }
  for(int i = 0; i < 200010; i++) {
    sum[i + 1] += sum[i];
  }
  bool ok = true;
  for(int i = 0; i < 200010; i++) {
    if(sum[i] > w) {
      ok = false;
    }
  }
  if(ok) {
    cout << "Yes\n";
  } else {
    cout << "No\n";
  }
  return 0;
}