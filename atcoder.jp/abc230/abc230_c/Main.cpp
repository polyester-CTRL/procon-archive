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
  ll n, a, b, p, q, r, s;
  cin >> n >> a >> b;
  cin >> p >> q >> r >> s;
  for(ll i = p; i <= q; i++) {
    for(ll j = r; j <= s; j++) {
      bool ok = false;
      if((i - a) >= max(1 - a, 1 - b) && (i - a) <= min(n - a, n - b)) {
        if((j - b) >= max(1 - a, 1 - b) && (j - b) <= min(n - a, n - b) &&
           (i - a) == (j - b)) {
          cout << "#";
          ok = true;
        }
      }
      if(ok) {
        continue;
      }
      if((i - a) >= max(1 - a, b - n) && (i - a) <= min(n - a, b - 1)) {
        if((-j + b) >= max(1 - a, b - n) && (-j + b) <= min(n - a, b - 1) &&
           (-j + b) == (i - a)) {
          cout << "#";
          ok = true;
        }
      }
      if(!ok) {
        cout << ".";
      }
    }
    cout << endl;
  }
  return 0;
}