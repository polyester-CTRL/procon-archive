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
  vector<double> a(n), b(n);
  for(int i = 0; i < n; i++) {
    int t;
    cin >> t >> a[i] >> b[i];
    if(t == 2) {
      b[i] -= 0.1;
    } else if(t == 3) {
      a[i] += 0.1;
    } else if(t == 4) {
      a[i] += 0.1;
      b[i] -= 0.1;
    }
    if(a[i] > b[i]) {
      a[i] = -1;
      b[i] = -1;
    }
  }
  int ans = 0;
  for(int i = 0; i < n; i++) {
    if(a[i] == -1) {
      continue;
    }
    for(int j = i + 1; j < n; j++) {
      if(a[j] == -1) {
        continue;
      }
      if(a[j] <= b[i] && a[i] <= b[j]) {
        ans++;
      } else if(a[i] <= b[j] && a[j] <= b[i]) {
        ans++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}