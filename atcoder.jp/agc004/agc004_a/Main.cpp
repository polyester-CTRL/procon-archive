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
  vector<ll> a(3);
  cin >> a[0] >> a[1] >> a[2];
  sort(a.begin(), a.end());
  if(a[0] % 2 + a[1] % 2 + a[2] % 2 <= 2) {
    cout << 0 << '\n';
  } else {
    cout << a[0] * a[1] << '\n';
  }
  return 0;
}