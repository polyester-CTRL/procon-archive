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
  vector<pair<ll, ll>> x(n), y(n, {1001001001, -1001001001});
  for(int i = 0; i < n; i++) {
    cin >> x[i].first >> x[i].second;
    x[i].second--;
    y[x[i].second].first = min(y[x[i].second].first, x[i].first);
    y[x[i].second].second = max(y[x[i].second].second, x[i].first);
  }
  ll pre1 = 1001001001, pre2 = 0, preX1 = 0, preX2 = 0;
  for(int i = 0; i < n; i++) {
    if(y[i].first != 1001001001) {
      if(pre1 == 1001001001) {
        pre1 = abs(y[i].second) + abs(y[i].second - y[i].first);
        pre2 = abs(y[i].first) + abs(y[i].second - y[i].first);
        preX1 = y[i].first;
        preX2 = y[i].second;
      } else {
        ll next1, next2;
        next1 = min(pre1 + abs(preX1 - y[i].second),
                    pre2 + abs(preX2 - y[i].second)) +
                abs(y[i].second - y[i].first);
        next2 = min(pre1 + abs(preX1 - y[i].first),
                    pre2 + abs(preX2 - y[i].first)) +
                abs(y[i].second - y[i].first);
        pre1 = next1;
        pre2 = next2;
        preX1 = y[i].first;
        preX2 = y[i].second;
      }
    }
  }
  cout << min(pre1 + abs(preX1), pre2 + abs(preX2)) << endl;
  return 0;
}