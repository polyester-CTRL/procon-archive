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
  ll ans = 0, n;
  n = s.length();
  for(int i = 0; i < n; i++) {
    ans += (int)(s[i] - '0');
  }
  if(ans % 9 == 0) {
    cout << "Yes\n";
  } else {
    cout << "No\n";
  }
  return 0;
}