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
  string s;
  cin >> n;
  cin >> s;
  ll ans = 0;
  ll pre = 0;
  s.push_back('A');
  for(int i = 0; i < n; i++) {
    if(s[i] == s[i + 1]) {
      pre++;
    } else {
      ans += pre * (pre + 1) / 2;
      pre = 0;
    }
  }
  cout << ans << endl;
  return 0;
}