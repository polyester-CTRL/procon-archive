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
  int n;
  cin >> n;
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    a[i]--;
  }
  vector<int> ans(2 * n + 10, 0);
  for(int i = 0; i < n; i++) {
    ans[2 * (i + 1) - 1] = ans[a[i]] + 1;
    ans[2 * (i + 1)] = ans[a[i]] + 1;
  }
  for(int i = 0; i < 2 * n + 1; i++) {
    cout << ans[i] << '\n';
  }
  return 0;
}