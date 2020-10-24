#include <algorithm>
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
using namespace std;
namespace mp = boost::multiprecision;
using Bint = mp::cpp_int;
using ll = long long;
int main() {
  Bint n;
  cin >> n;
  for(ll i = 1; i <= 40; i++) {
    for(ll j = 1; j <= 30; j++) {
      Bint a = 3;
      Bint b = 5;
      int cnt0 = i - 1, cnt1 = j - 1;
      while(cnt0--) {
        a *= 3;
      }
      if(a > n) {
        continue;
      }
      while(cnt1--) {
        b *= 5;
      }
      if(b > n) {
        continue;
      }
      if(n - a == b) {
        cout << i << " " << j << endl;
        return 0;
      }
    }
  }
  cout << -1 << endl;
  return 0;
}