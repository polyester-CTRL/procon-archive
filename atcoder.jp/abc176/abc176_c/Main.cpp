#include <iostream>
#include <algorithm>
#include <vector>
#include <functional>
#include <string>
#include <cmath>
#include <map>
#include <set>
#include <queue>
#include <stack>
#include <cstdio>
#include <numeric>
using namespace std;
using ll = long long;
int main() {
  int n;
  cin >> n;
  vector<ll> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  ll maxi = a[0];
  ll ans = 0;
  for(int i = 1; i < n; i++) {
    if(maxi > a[i]) {
      ans += maxi - a[i];
    } else if(maxi < a[i]) {
      maxi = a[i];
    }
  }
  cout << ans << endl;
  return 0;
}