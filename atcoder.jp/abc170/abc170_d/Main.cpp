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
  sort(a.begin(), a.end());

  if(a[0] == 1) {
    if(n > 1 && a[1] == 1) {
      cout << 0 << endl;
    } else {
      cout << 1 << endl;
    }
    return 0;
  }
  vector<int> x(1000000 + 10, 0);
  for(int i = 0; i < n; i++) {
    if(i > 0 && a[i] == a[i - 1]) {
      continue;
    }
    for(int j = a[i] * 2; j <= 1000000; j += a[i]) {
      x[j] = 1;
    }
  }
  int ans = n;
  for(int i = 0; i < n; i++) {
    if(x[a[i]] == 1) {
      ans--;
    } else if(x[a[i]] == 2) {
      ans -= 2;
      x[a[i]] = 1;
    } else {
      x[a[i]] = 2;
    }
  }
  cout << ans << endl;
  return 0;
}