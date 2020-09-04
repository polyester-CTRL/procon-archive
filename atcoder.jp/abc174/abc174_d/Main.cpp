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
  string s;
  cin >> s;
  int r = 0, w = 0;
  for(int i = 0; i < n; i++) {
    if(s[i] == 'R') {
      r++;
    } else {
      w++;
    }
  }
  int cr = 0, cw = 0;
  for(int i = 0; i < n; i++) {
    if(s[i] == 'W' && i < r) {
      cw++;
    } else if(s[i] == 'R' && i >= n - w) {
      cr++;
    }
  }
  int ans = max(cw, cr);
  cout << min({r, w, ans}) << endl;
  return 0;
}