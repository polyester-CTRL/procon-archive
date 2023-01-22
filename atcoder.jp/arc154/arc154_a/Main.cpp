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
const ll MOD = 998244353;
int main() {
  int n;
  cin >> n;
  vector<int> a(n), b(n);
  string sa, sb;
  cin >> sa >> sb;
  for(int i = 0; i < n; i++) {
    a[i] = (int)(sa[i] - '0');
    b[i] = (int)(sb[i] - '0');
  }
  for(int i = 0; i < n; i++) {
    if(a[i] > b[i]) {
      swap(a[i], b[i]);
    }
  }
  ll la = 0, lb = 0, ten = 1;
  for(int i = n - 1; i >= 0; i--) {
    la += a[i] * ten % MOD;
    lb += b[i] * ten % MOD;
    la %= MOD;
    lb %= MOD;
    ten *= 10;
    ten %= MOD;
  }
  cout << la * lb % MOD << endl;

  return 0;
}