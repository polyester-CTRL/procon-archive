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
constexpr ll MOD = 998244353;
int main() {
  int n, k;
  cin >> n >> k;
  vector<int> l(k), r(k);
  vector<ll> ans(n + 10, 0), sum(n + 10, 0);
  for(int i = 0; i < k; i++) {
    cin >> l[i] >> r[i];
  }
  ans[0] = 1;
  sum[0] = 1;
  for(int i = 1; i < n; i++) {
    for(int j = 0; j < k; j++) {
      if(i - r[j] - 1 >= 0) {
        ans[i] -= sum[i - r[j] - 1];
      }
      if(i - l[j] >= 0) {
        ans[i] += sum[i - l[j]];
      }
    }
    ans[i] %= MOD;
    sum[i] += sum[i - 1] + ans[i];
    // for(int j = 0; j < n; j++) {
    //   cout << ans[j] << " ";
    // }
    // cout << '\n';
  }
  if(ans[n - 1] < 0) {
    ans[n - 1] += MOD;
  }
  cout << ans[n - 1] % MOD << endl;
  return 0;
}