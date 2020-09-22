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
  int n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    a[i] = (s[i] == '1') ? 1 : 0;
  }
  vector<pair<int, int>> vp;
  int status = a[0];
  vp.push_back({status, 1});
  for(int i = 1; i < n; i++) {
    if(status == a[i]) {
      (*vp.rbegin()).second++;
    } else {
      status = a[i];
      vp.push_back({status, 1});
    }
  }
  // for(const auto &p : vp) {
  //   cout << p.first << " ";
  // }
  // cout << '\n';
  // for(const auto &p : vp) {
  //   cout << p.second << " ";
  // }
  // cout << '\n';
  vector<int> sum(n + 1, 0);
  for(int i = 0; i < vp.size(); i++) {
    sum[i + 1] += sum[i] + vp[i].second;
  }
  int ans = 0;
  for(int i = 1; i < vp.size() + 1; i++) {
    if(vp[i].first == 0) {
      ans = max(ans, sum[min(i + k * 2, (int)vp.size())] - sum[i - 1]);
    } else {
      ans = max(ans, sum[min(i + k * 2 - 1, (int)vp.size())] - sum[i - 1]);
    }
  }
  cout << ans << endl;
  return 0;
}