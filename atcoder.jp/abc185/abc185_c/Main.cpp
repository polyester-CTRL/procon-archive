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
  n--;
  ll ans = 1;
  ll cnt = 1;
  for(ll i = 1; i <= 11; i++) {
    ans *= (n - i + 1);
    ans /= i;
    cnt++;
  }
  cout << ans << endl;
  return 0;
}