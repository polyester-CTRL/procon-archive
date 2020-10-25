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
  string s;
  cin >> s;
  ll n = s.length();
  ll ans = n * (n - 1) / 2 + 1;
  vector<ll> a(26, 0);
  for(int i = 0; i < n; i++) {
    a[s[i] - 'a']++;
  }
  for(int i = 0; i < 26; i++) {
    ans -= a[i] * (a[i] - 1) / 2;
  }
  cout << ans << endl;
  return 0;
}