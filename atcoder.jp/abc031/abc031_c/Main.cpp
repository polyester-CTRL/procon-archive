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
  int ans = -2500;
  for(int i = 0; i < n; i++) {
    int a_max = -2500;
    int a_max_idx = 0;
    for(int j = 0; j < n; j++) {
      if(i == j) {
        continue;
      }
      int tmp = 0;
      for(int k = min(i, j); k <= max(i, j); k++) {
        if((k - min(i, j)) % 2 == 1) {
          tmp += a[k];
        }
      }
      if(tmp > a_max) {
        // cout << j << "_" << a_max << " ";
        a_max = tmp;
        a_max_idx = j;
      }
    }
    int t_sum = 0;
    // cout << i << " " << a_max_idx << '\n';
    for(int j = min(i, a_max_idx); j <= max(i, a_max_idx); j++) {
      if((j - min(i, a_max_idx)) % 2 == 0) {
        t_sum += a[j];
      }
    }
    ans = max(ans, t_sum);
  }
  cout << ans << endl;
  return 0;
}