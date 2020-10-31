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
const ll MOD = 998244353;
int main() {
  ll a, b, c;
  cin >> a >> b >> c;
  cout << (a * (a + 1) / 2 % MOD) % MOD * (b * (b + 1) / 2 % MOD) % MOD *
              (c * (c + 1) / 2 % MOD) % MOD
       << endl;
  return 0;
}