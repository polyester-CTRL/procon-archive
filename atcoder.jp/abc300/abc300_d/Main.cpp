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
bool isPrime(ll n) {
  bool ret = true;
  for(ll i = 2; i * i <= n; i++) {
    if(n % i == 0) {
      ret = false;
    }
  }
  return ret;
}
bool isSquare(ll n) {
  ll r = (ll)floor(sqrt((long double)n));
  return (r * r == n);
}
vector<ll> Eratosthenes(const int N) {
  std::vector<bool> is_prime(N + 1);
  for(int i = 0; i <= N; i++) {
    is_prime[i] = true;
  }
  std::vector<ll> P;
  for(int i = 2; i <= N; i++) {
    if(is_prime[i]) {
      for(int j = 2 * i; j <= N; j += i) {
        is_prime[j] = false;
      }
      P.emplace_back(i);
    }
  }
  return P;
}
int main() {
  ll n;
  cin >> n;
  int ans = 0;
  ll maxi = 0;
  vector<ll> er = Eratosthenes(300000);
  for(ll i = 2; i * i * i * i * i <= n; i++) {
    if(!isPrime(i)) {
      continue;
    }
    for(ll j = i + 1; i * i * j * j * j <= n; j++) {
      if(!isPrime(j)) {
        continue;
      }
      // cout << i << " " << j << endl;
      ans += distance(er.begin(),
                      upper_bound(er.begin(), er.end(),
                                  floor(sqrt((long double)n / (i * i * j)))));
      ans -= distance(er.begin(), upper_bound(er.begin(), er.end(), j));
      // cout << n / (i * i * j) << endl;
      // cout << i << " " << j << " " << ans << endl;
    }
  }
  cout << ans << endl;
  return 0;
}