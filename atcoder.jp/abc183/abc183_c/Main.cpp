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
  ll k;
  cin >> n >> k;
  vector<vector<ll>> t(n, vector<ll>(n, 0));
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      cin >> t[i][j];
    }
  }
  vector<int> route;
  for(int i = 1; i < n; i++) {
    route.push_back(i);
  }
  int ans = 0;
  do {
    ll tmp = 0;
    tmp += t[0][route[0]];
    for(int i = 0; i < n - 1; i++) {
      tmp += t[route[i]][route[i + 1]];
    }
    tmp += t[route[n - 1]][0];
    if(tmp == k) {
      ans++;
    }
  } while(next_permutation(route.begin(), route.end()));
  cout << ans << endl;
  return 0;
}