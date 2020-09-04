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
  vector<vector<ll>> a(n, vector<ll>(n, 0));
  for(int i = 0; i < n; i++) {
    for(int j = i + 1; j < n; j++) {
      cin >> a[i][j];
    }
  }
  ll ans = -1001001001001;
  for(int bit = 0; bit < (int)pow(3, n); bit++) {
    vector<int> g(n);
    int num = bit, cnt = 0;
    while(num > 0 && cnt < n) {
      g[cnt] = num % 3;
      cnt++;
      num /= 3;
    }
    ll sum = 0;
    for(int i = 0; i < n; i++) {
      for(int j = i + 1; j < n; j++) {
        if(g[i] == g[j]) {
          sum += a[i][j];
        }
      }
    }
    ans = max(ans, sum);
  }
  cout << ans << endl;
  return 0;
}