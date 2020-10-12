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
  ll t;
  cin >> n >> t;
  vector<ll> a(n), b(n), c(n);
  ll mini = 0;
  ll sum = 0;
  for(int i = 0; i < n; i++) {
    cin >> a[i] >> b[i];
    mini += b[i];
    c[i] = a[i] - b[i];
    sum += a[i];
  }
  if(mini > t) {
    cout << -1 << endl;
    return 0;
  }
  sort(c.rbegin(), c.rend());
  int cnt = 0;
  while(sum > t) {
    sum -= c[cnt];
    cnt++;
  }
  cout << cnt << endl;
  return 0;
}