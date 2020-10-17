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
  int n;
  cin >> n;
  vector<ll> a(n);
  double ans = 0;
  ll num = 0;
  ll num1 = 0;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    num += abs(a[i]);
    ans += a[i] * a[i];
    num1 = max(num1, abs(a[i]));
  }
  cout << num << endl;
  printf("%.15f\n", sqrt(ans));
  cout << num1 << endl;

  return 0;
}