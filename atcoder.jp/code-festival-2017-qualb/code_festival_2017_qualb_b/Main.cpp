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
  vector<ll> d(n);
  for(int i = 0; i < n; i++) {
    cin >> d[i];
  }
  sort(d.begin(), d.end());
  int m;
  cin >> m;
  vector<ll> t(m);
  for(int i = 0; i < m; i++) {
    cin >> t[i];
  }
  sort(t.begin(), t.end());
  int now = 0;
  for(int i = 0; i < m; i++) {
    bool ok = false;
    for(int j = now; j < n; j++) {
      if(t[i] == d[j]) {
        ok = true;
        now = j + 1;
        break;
      }
    }
    if(!ok) {
      cout << "NO\n";
      return 0;
    }
  }
  cout << "YES\n";
  return 0;
}