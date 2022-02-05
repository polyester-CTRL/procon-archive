#include <algorithm>
#include <boost/multiprecision/cpp_dec_float.hpp>
#include <boost/multiprecision/cpp_int.hpp>
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
namespace mp = boost::multiprecision;
using ll = mp::cpp_int;
using namespace std;

const ll MOD = 998244353;
int main() {
  ll n;
  cin >> n;
  ll sum = 0;
  ll d = 1;
  while(d <= n) {
    if(d * 10 <= n) {
      sum +=
          ((10 * d - d) % MOD * (2 * 1 + (10 * d - d - 1)) % MOD * 499122177) %
          MOD;
      sum %= MOD;
    } else {
      sum += ((n - d + 1) % MOD * (2 * 1 + (n - d)) % MOD * 499122177) % MOD;
      sum %= MOD;
      break;
    }
    d *= 10;
  }
  cout << sum << endl;
  return 0;
}