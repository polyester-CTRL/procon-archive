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
int main() {
  int t;
  cin >> t;
  while(t--) {
    ll n;
    cin >> n;
    ll p = 1, q = 1;
    for(ll i = 2; i < cbrt(n) + 10; i++) {
      if(n % i == 0) {
        if(n % (i * i) == 0) {
          p = i;
          q = n / (p * p);
        } else {
          q = i;
          n /= q;
          p = sqrt(n);
          for(ll j = sqrt(n) - 1; j < sqrt(n) + 1; j++) {
            if(n % (j * j) == 0) {
              p = j;
              break;
            }
          }
        }
        break;
      }
    }
    cout << p << " " << q << endl;
  }
  return 0;
}