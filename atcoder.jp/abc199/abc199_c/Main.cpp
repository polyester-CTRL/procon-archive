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
  int q;
  cin >> q;
  int state = 0;
  for(int i = 0; i < q; i++) {
    int t, a, b;
    cin >> t >> a >> b;
    a--, b--;
    if(t == 1) {
      if(state == 0) {
        swap(s[a], s[b]);
      } else {
        if(b < n) {
          swap(s[a + n], s[b + n]);
        } else if(a >= n) {
          swap(s[a - n], s[b - n]);
        } else {
          swap(s[a + n], s[b - n]);
        }
      }
    } else {
      state ^= 1;
    }
  }
  if(state == 1) {
    string tmp1, tmp2;
    tmp1 = s.substr(0, n);
    tmp2 = s.substr(n, n);
    s = tmp2 + tmp1;
  }
  cout << s << endl;
  return 0;
}