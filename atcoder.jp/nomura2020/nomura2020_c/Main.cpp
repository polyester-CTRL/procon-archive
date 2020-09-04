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
  ll n;
  cin >> n;
  vector<ll> a(n + 1);
  ll sum = 0;
  for(int i = 0; i < n + 1; i++) {
    cin >> a[i];
    sum += a[i];
  }
  vector<ll> tree(n + 5, 0);
  tree[0] = 1;
  for(int i = 0; i < n + 1; i++) {
    tree[i] -= a[i];
    sum -= a[i];
    if((tree[i] <= 0 && i < n - 2) || tree[i] < 0) {
      cout << -1 << endl;
      return 0;
    }
    tree[i + 1] = 2 * tree[i];
    tree[i + 1] = min(tree[i + 1], sum);
  }
  ll ans = 0;
  for(int i = 0; i < n + 1; i++) {
    ans += tree[i] + a[i];
  }
  cout << ans << endl;
  return 0;
}