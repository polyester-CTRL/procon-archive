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

const ll INF = 1001001001;

int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(m), b(m);
  vector<ll> c(m);
  vector<vector<ll>> dist(n, vector<ll>(n, INF));
  for(int i = 0; i < m; i++) {
    cin >> a[i] >> b[i] >> c[i];
    a[i]--, b[i]--;
    dist[a[i]][b[i]] = c[i];
    dist[b[i]][a[i]] = c[i];
  }
  for(int k = 0; k < n; k++) {
    for(int i = 0; i < n; i++) {
      for(int j = 0; j < n; j++) {
        if(dist[i][j] > dist[i][k] + dist[k][j]) {
          dist[i][j] = dist[i][k] + dist[k][j];
        }
      }
    }
  }
  int ans = 0;
  for(int i = 0; i < m; i++) {
    int tmp = 0;
    for(int j = 0; j < n; j++) {
      if(dist[a[i]][j] + dist[j][b[i]] <= c[i]) {
        tmp = 1;
      }
    }
    ans += tmp;
  }
  cout << ans << endl;

  return 0;
}