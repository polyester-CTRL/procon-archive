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
  int n, m;
  cin >> n >> m;
  vector<pair<int, int>> a(n), b(m);
  vector<pair<int, int>> c;
  for(int i = 0; i < n; i++) {
    cin >> a[i].first;
    a[i].second = i;
    c.push_back(a[i]);
  }
  for(int i = 0; i < m; i++) {
    cin >> b[i].first;
    b[i].second = i + n;
    c.push_back(b[i]);
  }
  sort(c.begin(), c.end());
  vector<int> ans(n + m);
  for(int i = 0; i < n + m; i++) {
    ans[c[i].second] = i + 1;
  }
  for(int i = 0; i < n; i++) {
    cout << ans[i] << " ";
  }
  cout << endl;
  for(int i = n; i < n + m; i++) {
    cout << ans[i] << " ";
  }
  cout << endl;

  return 0;
}