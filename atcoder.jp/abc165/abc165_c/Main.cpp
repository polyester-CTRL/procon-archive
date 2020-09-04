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
  int n, m, q;
  cin >> n >> m >> q;
  vector<int> a(100), b(100), c(100), d(100);
  for(int i = 0; i < q; i++) {
    cin >> a[i] >> b[i] >> c[i] >> d[i];
    a[i]--;
    b[i]--;
  }
  queue<ll> que;
  for(int i = 0; i < m; i++) {
    que.push(i);
  }
  ll limit = 0;
  for(int i = 0; i < n; i++) {
    limit += (m - 1) * pow(10, i);
  }
  
  for(int i = 0; i <= 99999; i++) {
    bool ok = false;
    ll tmp = que.front();
    ll in = tmp;
    for(int j = in % 10; j < m; j++) {
      que.push(in * 10 + j);
      if(in * 10 + j >= limit){
        ok = true;
        break;
      }
    }
    if(ok){
      break;
    }
    que.pop();
  }

  ll ans = 0;
  while(!que.empty()) {
    ll sum = 0;
    ll tmp = que.front();
    que.pop();
    vector<ll> e(100, 0);
    bool ok = true;
    for(int i = n - 1; i >= 0; i--) {
      e[i] = tmp % 10;
      tmp /= 10;
    }
    if(ok == false) {
      continue;
    }
    for(int i = 0; i < q; i++) {
      if(e[b[i]] - e[a[i]] == c[i]) {
        sum += d[i];
      }
    }
    ans = max(ans, sum);
  }

  cout << ans << endl;
  return 0;
}