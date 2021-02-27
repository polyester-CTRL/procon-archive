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
  map<ll, ll> mp;

  for(ll i = 2; i * i <= n; i++) {
    for(ll j = 2; j <= n; j++) {
      if(pow(i, j) <= n) {
        mp[(ll)pow(i, j)]++;
      } else {
        break;
      }
    }
  }
  cout << n - mp.size() << endl;
  return 0;
}