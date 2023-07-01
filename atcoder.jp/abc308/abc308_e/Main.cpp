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
  int n;
  cin >> n;
  vector<int> a(n);
  string s;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  cin >> s;
  vector<vector<ll>> m(n + 1, vector<ll>(3, 0));
  vector<vector<ll>> x(n + 1, vector<ll>(3, 0));
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < 3; j++) {
      m[i + 1][j] += m[i][j];
    }
    if(s[i] == 'M') {
      m[i + 1][a[i]]++;
    }
  }
  for(int i = n - 1; i >= 0; i--) {
    for(int j = 0; j < 3; j++) {
      x[i][j] += x[i + 1][j];
    }
    if(s[i] == 'X') {
      x[i][a[i]]++;
    }
  }
  for(int i = 0; i < n + 1; i++) {
    // cout << m[i][0] << " " << m[i][1] << " " << m[i][2] << " : ";
    // cout << x[i][0] << " " << x[i][1] << " " << x[i][2] << endl;
  }
  ll ans = 0;
  for(int i = 0; i < n; i++) {
    if(s[i] != 'E') {
      continue;
    }
    // cout << m[i][0] << " " << m[i][1] << " " << m[i][2] << " : ";
    // cout << a[i] << " : ";
    // cout << x[i][0] << " " << x[i][1] << " " << x[i][2] << " : ";
    if(a[i] == 0) {
      ans += m[i][0] * x[i][0] * 1;
      ans += m[i][0] * x[i][1] * 2;
      ans += m[i][0] * x[i][2] * 1;
      ans += m[i][1] * (x[i][0] + x[i][1]) * 2;
      ans += m[i][1] * x[i][2] * 3;
      ans += m[i][2] * (x[i][0] + x[i][2]) * 1;
      ans += m[i][2] * x[i][1] * 3;
    } else if(a[i] == 1) {
      ans += m[i][0] * (x[i][0] + x[i][1]) * 2;
      ans += m[i][0] * x[i][2] * 3;
      ans += m[i][1] * x[i][0] * 2;
      ans += m[i][2] * x[i][0] * 3;
    } else if(a[i] == 2) {
      ans += m[i][0] * x[i][0] * 1;
      ans += m[i][0] * x[i][1] * 3;
      ans += m[i][0] * x[i][2] * 1;
      ans += m[i][1] * x[i][0] * 3;
      ans += m[i][2] * x[i][0] * 1;
    }
    // cout << ans << endl;
  }
  cout << ans << endl;
  return 0;
}