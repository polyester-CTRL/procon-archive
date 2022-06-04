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
  vector<ll> a(n), b;
  vector<vector<ll>> c(k);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    c[i % k].push_back(a[i]);
  }
  for(int i = 0; i < k; i++) {
    sort(c[i].begin(), c[i].end());
  }
  for(int i = 0; i < n; i++) {
    b.push_back(c[i % k][i / k]);
  }
  for(int i = 1; i < n; i++) {
    if(b[i - 1] > b[i]) {
      cout << "No\n";
      return 0;
    }
  }
  cout << "Yes\n";

  return 0;
}