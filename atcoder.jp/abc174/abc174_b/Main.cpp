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
  ll n, d;
  cin >> n >> d;
  ll ans = 0;
  for(int i = 0; i < n; i++) {
    ll x, y;
    cin >> x >> y;
    if(x * x + y * y <= d * d) {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}