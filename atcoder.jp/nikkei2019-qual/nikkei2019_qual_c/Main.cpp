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
  ll ans = 0;
  vector<ll> sum(n);
  for(int i = 0; i < n; i++) {
    ll a = 0, b = 0;
    cin >> a >> b;
    sum[i] = a + b;
    ans -= b;
  }
  sort(sum.rbegin(), sum.rend());
  for(int i = 0; i < n; i++) {
    if(i % 2 == 0) {
      ans += sum[i];
    }
  }
  cout << ans << endl;
  return 0;
}