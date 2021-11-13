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
  int n, k;
  cin >> n >> k;
  vector<ll> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  ll ok = -1, ng = 1e18 / k;
  while(abs(ok - ng) > 1) {
    ll mid = (ok + ng) / 2;
    ll sum = 0;
    for(int i = 0; i < n; i++) {
      sum += min(mid, a[i]);
    }
    if(sum >= mid * k) {
      ok = mid;
    } else {
      ng = mid;
    }
  }
  cout << ok << endl;
  return 0;
}