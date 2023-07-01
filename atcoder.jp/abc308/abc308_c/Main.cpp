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
  int n;
  cin >> n;
  vector<int> a(n), b(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i] >> b[i];
  }
  vector<pair<pair<ll, ll>, int>> c(n);
  for(int i = 0; i < n; i++) {
    c[i].first.first = a[i];
    c[i].first.second = a[i] + b[i];
    c[i].second = i;
  }
  sort(c.begin(), c.end(), [](auto const &l, auto const &r) {
    if(l.first.first * r.first.second != r.first.first * l.first.second) {
      return l.first.first * r.first.second > r.first.first * l.first.second;
    } else {
      return l.second < r.second;
    }
  });
  for(auto p : c) {
    cout << p.second + 1 << endl;
  }
  return 0;
}