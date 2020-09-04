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
  vector<int> a(n), b(m);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for(int i = 0; i < m; i++) {
    cin >> b[i];
  }
  if(n < m) {
    cout << "NO\n";
  } else {
    sort(a.rbegin(), a.rend());
    sort(b.rbegin(), b.rend());
    for(int i = 0; i < m; i++) {
      if(a[i] >= b[i]) {
        continue;
      } else {
        cout << "NO\n";
        return 0;
      }
    }
    cout << "YES\n";
  }
  return 0;
}