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
  string s, t;
  cin >> s >> t;
  int n = s.length();
  int m = t.length();
  int ans = m;
  for(int i = 0; i < n - m + 1; i++) {
    int num = 0;
    for(int j = 0; j < m; j++) {
      if(s[i + j] != t[j]) {
        num++;
      }
    }
    ans = min(ans, num);
  }
  cout << ans << endl;
  return 0;
}