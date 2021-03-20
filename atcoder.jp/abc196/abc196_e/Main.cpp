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
  vector<ll> a(n), t(n);
  ll maxi = 1001001001;
  ll mini = -1001001001;
  ll sum = 0;
  for(int i = 0; i < n; i++) {
    cin >> a[i] >> t[i];
    if(t[i] == 1) {
      sum += a[i];
      maxi += a[i];
      mini += a[i];
    } else if(t[i] == 2) {
      maxi = max(maxi, a[i]);
      mini = max(mini, a[i]);
    } else if(t[i] == 3) {
      maxi = min(maxi, a[i]);
      mini = min(mini, a[i]);
    }
  }
  int q;
  cin >> q;
  vector<ll> x(q);
  for(int i = 0; i < q; i++) {
    cin >> x[i];
  }
  // cout << mini << " " << maxi << " " << sum << endl;
  for(int i = 0; i < q; i++) {
    if(abs(maxi - mini) == 0) {
      cout << maxi << '\n';
    } else if(x[i] + sum <= maxi && x[i] + sum >= mini) {
      cout << x[i] + sum << '\n';
    } else if(x[i] + sum >= maxi){
      cout << maxi << '\n';
    } else {
      cout << mini << '\n';
    }
  }
  return 0;
}