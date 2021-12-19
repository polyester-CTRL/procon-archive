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
  vector<int> a(m), b(m), c(m), d(m);
  for(int i = 0; i < m; i++) {
    cin >> a[i] >> b[i];
    a[i]--, b[i]--;
  }
  for(int i = 0; i < m; i++) {
    cin >> c[i] >> d[i];
    c[i]--, d[i]--;
  }
  vector<int> g(n);
  for(int i = 0; i < n; i++) {
    g[i] = i;
  }
  bool ok = false;
  do {
    int cnt = 0;
    for(int i = 0; i < m; i++) {
      bool check = false;
      for(int j = 0; j < m; j++) {
        if(g[a[i]] == c[j] && g[b[i]] == d[j]) {
          check = true;
        } else if(g[a[i]] == d[j] && g[b[i]] == c[j]) {
          check = true;
        }
      }
      if(check) {
        cnt++;
      } else {
        // break;
      }
    }
    // for(int i = 0; i < n; i++) {
    //   cout << g[i] << " ";
    // }
    // cout << cnt << endl;
    if(cnt == m) {
      ok = true;
    }
  } while(next_permutation(g.begin(), g.end()));
  if(ok) {
    cout << "Yes\n";
  } else {
    cout << "No\n";
  }
  return 0;
}