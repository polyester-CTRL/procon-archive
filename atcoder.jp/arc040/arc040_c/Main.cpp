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
  vector<string> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int ans = 0;
  for(int i = 0; i < n; i++) {
    bool ok = true;
    int now = n - 1;
    for(int j = n - 1; j >= 0; j--) {
      if(a[i][j] == '.') {
        ans++;
        ok = false;
        now = j;
        break;
      }
    }
    if(ok) {
      continue;
    }
    if(i == n - 1) {
      continue;
    }
    for(int j = now; j < n; j++) {
      a[i + 1][j] = 'o';
    }
  }
  cout << ans << endl;
  return 0;
}