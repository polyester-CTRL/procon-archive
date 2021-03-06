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
  vector<ll> a(410, 0);
  for(int i = 0; i < n; i++) {
    int tmp;
    cin >> tmp;
    tmp += 200;
    a[tmp]++;
  }
  ll ans = 0;
  for(ll i = 0; i < 410; i++) {
    for(ll j = i + 1; j < 410; j++) {
      ans += (i - j) * (i - j) * a[i] * a[j];
    }
  }
  cout << ans << endl;
  return 0;
}