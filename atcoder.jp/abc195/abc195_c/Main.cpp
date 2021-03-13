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
  if(n >= 1000) {
    ans += n - 999;
  }
  if(n >= 1000000) {
    ans += n - 999999;
  }
  if(n >= 1000000000) {
    ans += n - 999999999;
  }
  if(n >= 1000000000000) {
    ans += n - 999999999999;
  }
  if(n >= 1000000000000000) {
    ans += n - 999999999999999;
  }
  cout << ans << endl;
  return 0;
}