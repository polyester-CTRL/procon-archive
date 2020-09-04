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
  int n, r;
  string s;
  cin >> n >> r >> s;
  int last = -1;
  for(int i = 0; i < n; i++) {
    if(s[i] == '.') {
      last = i;
    }
  }
  if(last == -1) {
    cout << 0 << '\n';
    return 0;
  }
  int ans = 0;
  int ok = -1;
  for(int i = 0; i < n; i++) {
    if(s[i] == '.' && i > ok) {
      ans++;
      if(i + r - 1 >= last) {
        break;
      }
      ok = i + r - 1;
    } else if(i + r - 1 >= last) {
      ans++;
      break;
    }
    ans++;
  }
  cout << ans << '\n';
  return 0;
}