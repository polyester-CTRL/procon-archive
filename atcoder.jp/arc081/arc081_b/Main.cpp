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
const ll MOD = 1000000007;
int main() {
  int n;
  string s1, s2;
  cin >> n >> s1 >> s2;
  ll ans = 3;
  for(int i = 0; i < n; i++) {
    if(i < n - 1 && s1[i] == s1[i + 1]) {
      if(i > 0 && s1[i - 1] == s2[i - 1] || i == 0) {
        ans *= 2;
        ans %= MOD;
      } else if(i > 0 && s1[i - 1] != s2[i - 1]) {
        ans *= 3;
        ans %= MOD;
      }
    } else if(i > 0) {
      if(s1[i - 1] == s2[i - 1]) {
        ans *= 2;
        ans %= MOD;
      }
    }
  }
  cout << ans << endl;
  return 0;
}