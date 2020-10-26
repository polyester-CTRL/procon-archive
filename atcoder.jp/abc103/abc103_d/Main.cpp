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
  int n, m;
  cin >> n >> m;
  vector<pair<int, int>> a(m);
  for(int i = 0; i < m; i++) {
    cin >> a[i].second >> a[i].first;
  }
  sort(a.begin(), a.end());
  int ans = 1;
  int now = a[0].first;
  for(int i = 1; i < m; i++) {
    if(now <= a[i].second) {
      ans++;
      now = a[i].first;
    }
  }
  cout << ans << endl;
  return 0;
}