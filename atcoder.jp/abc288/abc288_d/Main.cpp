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
  int n, k;
  cin >> n >> k;
  vector<ll> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  vector<vector<int>> sum(n + 1, vector<int>(k, 0));
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < k; j++) {
      sum[i + 1][j] = sum[i][j];
    }
    sum[i + 1][i % k] += a[i];
  }
  // for(int i = 0; i < n + 1; i++) {
  //   for(int j = 0; j < k; j++) {
  //     cout << sum[i][j] << " ";
  //   }
  //   cout << endl;
  // }
  int q;
  cin >> q;
  while(q--) {
    int l, r;
    cin >> l >> r;
    l--;
    int num = sum[r][0] - sum[l][0];
    bool ok = true;
    for(int i = 0; i < k; i++) {
      if(num != sum[r][i] - sum[l][i]) {
        ok = false;
      }
    }
    if(ok) {
      cout << "Yes\n";
    } else {
      cout << "No\n";
    }
  }
  return 0;
}