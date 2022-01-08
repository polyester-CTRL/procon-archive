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
ll f(ll x) {
  ll res = x * x + 2 * x + 3;
  return res;
}
int main() {
  ll n;
  cin >> n;
  cout << f(f(f(n) + n) + f(f(n))) << endl;
  return 0;
}