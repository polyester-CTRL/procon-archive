#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <iomanip>
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
  int n, x, y, z;
  cin >> n >> x >> y >> z;
  vector<pair<int, int>> a(n), b(n), c(n);
  vector<int> ans(n, 0);
  for(int i = 0; i < n; i++) {
    cin >> a[i].first;
    a[i].first *= -1;
    a[i].second = i;
  }
  for(int i = 0; i < n; i++) {
    cin >> b[i].first;
    b[i].first *= -1;
    b[i].second = i;
  }
  for(int i = 0; i < n; i++) {
    c[i].first = a[i].first + b[i].first;
    c[i].second = i;
  }
  sort(a.begin(), a.end());
  for(int i = 0; i < x; i++) {
    ans[a[i].second] = 1;
  }
  sort(b.begin(), b.end());
  for(int i = 0; i < min(y, n); i++) {
    if(ans[b[i].second] == 1) {
      y++;
      continue;
    }
    ans[b[i].second] = 1;
  }
  sort(c.begin(), c.end());
  for(int i = 0; i < min(z, n); i++) {
    if(ans[c[i].second] == 1) {
      z++;
      continue;
    }
    ans[c[i].second] = 1;
  }
  for(int i = 0; i < n; i++) {
    if(ans[i] == 1) {
      cout << i + 1 << endl;
    }
  }

  return 0;
}