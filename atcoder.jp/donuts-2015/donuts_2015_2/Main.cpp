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
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  vector<vector<int>> b(m);
  for(int i = 0; i < m; i++) {
    int tmp;
    cin >> tmp;
    b[i].push_back(tmp);
    int c;
    cin >> c;
    b[i].push_back(c);
    for(int j = 0; j < c; j++) {
      cin >> tmp;
      b[i].push_back(tmp - 1);
    }
  }
  int ans = 0;
  for(int bit = 0; bit < (1 << n); bit++) {
    int sum = 0, cnt = 0;
    for(int i = 0; i < n; i++) {
      if(bit & (1 << i)) {
        sum += a[i];
        cnt++;
      }
    }
    if(cnt != 9) {
      continue;
    }
    for(int i = 0; i < m; i++) {
      int ok = 0;
      for(int j = 2; j < b[i][1] + 2; j++) {
        if(bit & (1 << b[i][j])) {
          ok++;
        } else {
        }
      }
      if(ok >= 3) {
        sum += b[i][0];
      }
    }
    ans = max(ans, sum);
  }
  cout << ans << endl;
  return 0;
}