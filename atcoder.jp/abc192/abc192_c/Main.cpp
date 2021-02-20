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
  int k;
  cin >> n >> k;
  for(int i = 0; i < k; i++) {
    ll tmp = n;
    ll ans = 0;
    vector<ll> a;
    while(tmp > 0) {
      a.push_back(tmp % 10);
      tmp /= 10;
    }
    sort(a.begin(), a.end());
    for(int i = a.size() - 1; i >= 0; i--) {
      ans -= a[i] * pow(10, a.size() - i - 1);
    }
    for(int i = 0; i < a.size(); i++) {
      ans += a[i] * pow(10, i);
    }
    n = ans;
  }
  cout << n << endl;
  return 0;
}