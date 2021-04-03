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
  int ans = 1001001;
  for(int bit = 0; bit < (1 << n); bit++) {
    int t1 = 0, t2 = 0;
    for(int i = 0; i < n; i++) {
      if(bit & (1 << i)) {
        t1 += a[i];
      } else {
        t2 += a[i];
      }
    }
    ans = min(ans, max(t1, t2));
  }
  cout << ans << endl;
  return 0;
}