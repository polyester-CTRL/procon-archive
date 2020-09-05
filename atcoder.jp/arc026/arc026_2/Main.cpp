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
  ll sum = 0;
  for(ll i = 1; i * i <= n; i++) {
    if(n % i == 0) {
      sum += i;
      if(n != i * i) {
        sum += n / i;
      }
    }
  }
  sum -= n;
  if(sum < n) {
    cout << "Deficient\n";
  } else if(sum > n) {
    cout << "Abundant\n";
  } else {
    cout << "Perfect\n";
  }
  return 0;
}