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
  ll n;
  cin >> n;
  ll ans = 0;
  vector<ll> res;
  for(ll i = 1; i * i * i <= n; i++) {
    for(ll j = i; j * j <= n / i; j++) {
      ans += n / (i * j) - j + 1;
    }
  }
  cout << ans << endl;
  // sort(res.begin(), res.end());
  // for(int i = 0; i < res.size(); i++) {
  //   for(int j = 1; j <= res[i]; j++) {
  //     if(res[i] % j == 0) {

  //     }
  //   }
  // }
  return 0;
}