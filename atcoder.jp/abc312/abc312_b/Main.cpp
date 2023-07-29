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
  int n, m;
  cin >> n >> m;
  vector<string> s(n);
  for(int i = 0; i < n; i++) {
    cin >> s[i];
  }
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      if(i + 9 > n || j + 9 > m) {
        continue;
      }
      bool ok = true;
      for(int k1 = 0; k1 < 3; k1++) {
        for(int k2 = 0; k2 < 3; k2++) {
          if(s[i + k1][j + k2] == '.') {
            ok = false;
          }
          if(s[i + k1 + 6][j + k2 + 6] == '.') {
            ok = false;
          }
        }
      }
      if(s[i][j + 3] == '#' || s[i + 1][j + 3] == '#' || s[i + 2][j + 3] == '#') {
        ok = false;
      }
      for(int k1 = 0; k1 < 4; k1++) {
        if(s[i + 3][j + k1] == '#') {
          ok = false;
        }
        if(s[i + 5][j + k1 + 5] == '#') {
          ok = false;
        }
      }
      if(s[i + 6][j + 5] == '#' || s[i + 7][j + 5] == '#' || s[i + 8][j + 5] == '#') {
        ok = false;
      }
      if(ok) {
        cout << i + 1 << " " << j + 1 << endl;
      }
    }
  }
  return 0;
}