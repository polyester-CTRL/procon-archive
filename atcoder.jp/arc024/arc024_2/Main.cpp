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
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for(int i = 0; i < n; i++) {
    a.push_back({a[i]});
  }
  int now = -1;
  int cnt = 1;
  int maxi = 1;
  for(const auto &p : a) {
    if(now == -1) {
      now = p;
      continue;
    }
    if((now ^ p) == 1) {
      cnt = 1;
      now = p;
    } else {
      cnt++;
      maxi = max(maxi, cnt);
    }
  }
  if(maxi != a.size()) {
    cout << (maxi + 1) / 2 << endl;
  } else {
    cout << -1 << endl;
  }
  return 0;
}