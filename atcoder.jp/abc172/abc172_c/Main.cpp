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
  int n, m, k;
  cin >> n >> m >> k;
  vector<ll> a(n), b(m);
  vector<ll> suma(n + 1, 0), sumb(m + 1, 0);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    suma[i + 1] = suma[i] + a[i];
  }
  for(int i = 0; i < m; i++) {
    cin >> b[i];
    sumb[i + 1] = sumb[i] + b[i];
  }
  ll t = 0;
  int ans = 0;
  int maxi = 0;
  for(int i = 0; i <= n; i++) {
    ll tmp = suma[i];
    
    int num = 0;
    num = distance(sumb.begin(), lower_bound(sumb.begin(), sumb.end(), k - tmp));
    num = min(num, m);
    while(sumb[num] + tmp > k && num > 0) {
      num--;
    }
    if(tmp + sumb[num] <= k){
      num += i;
    }
    maxi = max(maxi, num);
  }
  cout << maxi << endl;
  return 0;
}