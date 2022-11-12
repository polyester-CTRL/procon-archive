#include <algorithm>
#include <atcoder/dsu>
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
using namespace atcoder;
int main() {
  int n;
  cin >> n;
  vector<int> a(2 * n);
  vector<vector<int>> g(n);
  map<int, vector<int>> mp;
  int ans = 0;
  mp[0].push_back(2 * n + 1);
  for(int i = 0; i < n; i++) {
    cin >> a[2 * i] >> a[2 * i + 1];
    a[2 * i]--, a[2 * i + 1]--;
    mp[a[2 * i]].push_back(2 * i + 1);
    mp[a[2 * i]].push_back(2 * i);
    mp[a[2 * i + 1]].push_back(2 * i);
    mp[a[2 * i + 1]].push_back(2 * i + 1);
  }

  dsu uf(2 * n + 10);
  for(auto p1 : mp) {
    int top = p1.second.front();
    for(auto p2 : p1.second) {
      uf.merge(top, p2);
      // cout << "merge: " << top << " " << p2 << endl;
    }
  }
  for(int i = 0; i < 2 * n; i++) {
    if(uf.same(2 * n + 1, i)) {
      ans = max(ans, a[i]);
    }
  }
  cout << ans + 1 << endl;
  return 0;
}