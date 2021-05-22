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
  vector<ll> a(n), b(n), c(n);
  ll ans = 0;
  for(int i = 0; i < n; i++) {
    int tmp;
    cin >> tmp;
    tmp--;
    a[tmp]++;
  }
  for(int i = 0; i < n; i++) {
    cin >> b[i];
    b[i]--;
  }
  for(int i = 0; i < n; i++) {
    int tmp;
    cin >> tmp;
    tmp--;
    c[tmp]++;
  }
  for(int i = 0; i < n; i++) {
    ans += a[b[i]] * c[i];
  }
  cout << ans << endl;
  return 0;
}