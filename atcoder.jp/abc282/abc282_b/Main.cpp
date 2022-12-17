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
  vector<string> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int ans = 0;
  for(int i = 0; i < n; i++) {
    for(int j = i + 1; j < n; j++) {
      bool ok = true;
      for(int k = 0; k < m; k++) {
        if(a[i][k] == 'o' || a[j][k] == 'o') {
          continue;
        } else {
          ok = false;
        }
      }
      if(ok) {
        ans++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}