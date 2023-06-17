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
#include <boost/multiprecision/cpp_dec_float.hpp>
#include <boost/multiprecision/cpp_int.hpp>
namespace mp = boost::multiprecision;

using namespace std;
using ll = mp::cpp_int;
int main() {
  ll ans = 0;
  ll a = 1;
  for(int i = 0; i < 64; i++) {
    ll tmp;
    cin >> tmp;
    ans += tmp * a;
    a *= 2;
  }
  cout << ans << endl;
  return 0;
}