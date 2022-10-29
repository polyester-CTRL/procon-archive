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
map<ll, ll> mp;
ll func(ll n) {
  if(mp[n] != 0) {
    return mp[n];
  }
  ll ret = 0;
  ret = func(n / 2) + func(n / 3);
  mp[n] = ret;
  return ret;
}
int main() {
  ll n;
  cin >> n;
  mp[0] = 1;
  cout << func(n) << endl;
  return 0;
}