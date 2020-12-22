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
  bool ok = false;
  for(ll i = 2; i * i <= n; i++) {
    if(n % i == 0) {
      ok = true;
    }
  }
  if(n == 1) {
    cout << "Not Prime\n";
  } else if(n % 2 != 0 && n % 3 != 0 && n % 5 != 0) {
    cout << "Prime\n";
  } else if(n == 2 || n == 3 || n == 5 || !ok) {
    cout << "Prime\n";
  } else {
    cout << "Not Prime\n";
  }
  return 0;
}