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
  vector<ll> a(n), b(200);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    b[a[i] % 200]++;
  }
  ll ans = 0;
  for(int i = 0; i < 200; i++) {
    ans += b[i] * (b[i] - 1) / 2;
  }
  cout << ans << endl;

  return 0;
}