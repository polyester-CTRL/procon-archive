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
  int t;
  cin >> n >> t;
  vector<pair<int, int>> a(n);
  int ans = 1001001001;
  for(int i = 0; i < n; i++) {
    cin >> a[i].first >> a[i].second;
    if(a[i].second <= t) {
      ans = min(ans, a[i].first);
    }
  }
  if(ans == 1001001001) {
    cout << "TLE\n";
  } else {
    cout << ans << endl;
  }
  return 0;
}