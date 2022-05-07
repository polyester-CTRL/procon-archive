#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <iomanip>
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

ll solve1(ll l, ll r) {
  ll ans = 0;
  ll mul = 1;
  while(r / mul != 0) {
    mul *= 10;
  }
  mul /= 10;
  // cout << mul << endl;
  if(mul < l) {
    // cout << r - l + 1 << endl;
    return r - l + 1;
  }
  ans += r - mul;
  // cout << ans << " ";
  if(r / mul == 1) {
    return ans + (mul - max({r % mul + 1, l, r / 10 + 1}) + 1);
  }
  return ans + 1;
}
ll solve2(ll l, ll r) {
  ll ans = 0;
  ll mul = 1;
  string str;
  for(ll i = r; i >= l; i--) {
    string tmp = "";
    ll num = i;
    while(num > 0) {
      tmp.push_back(num % 10);
      num /= 10;
    }
    if(str.find(tmp) != string::npos) {
      continue;
    }
    str.push_back(',');
    str += tmp;
    ans++;
  }
  return ans;
}
int main() {
  int t;
  cin >> t;
  while(t--) {
    ll l, r;
    cin >> l >> r;
    cout << solve1(l, r) << endl;
    // cout << solve2(l, r) << endl;
  }
  // for(int i = 1; i < 10000; i++) {
  //   for(int j = i; j < 10000; j++) {
  //     ll num1 = solve1(i, j);
  //     ll num2 = solve2(i, j);
  //     if(num1 != num2) {
  //       cout << i << " " << j << " ";
  //       cout << num1 << " " << num2 << endl;
  //     }
  //   }
  // }
  return 0;
}