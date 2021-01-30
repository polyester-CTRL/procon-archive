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
  vector<int> a(m), b(m);
  for(int i = 0; i < m; i++) {
    cin >> a[i] >> b[i];
    a[i]--;
    b[i]--;
  }
  int k;
  cin >> k;
  vector<int> c(k), d(k);
  for(int i = 0; i < k; i++) {
    cin >> c[i] >> d[i];
    c[i]--;
    d[i]--;
  }
  vector<int> dish(n, 0);
  int ans = 0;
  for(int i = 0; i < (1 << k); i++) {
    int sum = 0;
    for(int j = 0; j < n; j++) {
      dish[j] = 0;
    }
    for(int j = 0; j < k; j++) {
      if(i & (1 << j)) {
        dish[c[j]]++;
      } else {
        dish[d[j]]++;
      }
    }
    for(int j = 0; j < m; j++) {
      if(dish[a[j]] > 0 && dish[b[j]] > 0) {
        sum++;
      }
    }
    ans = max(ans, sum);
  }
  cout << ans << endl;
  return 0;
}