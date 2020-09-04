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
  int c[4];
  int ans = n;
  for(c[0] = 0; c[0] < 4; c[0]++) {
    for(c[1] = 0; c[1] < 4; c[1]++) {
      for(c[2] = 0; c[2] < 4; c[2]++) {
        for(c[3] = 0; c[3] < 4; c[3]++) {
          string t;
          for(int i = 0; i < 4; i++) {
            if(c[i] == 0) {
              t += 'A';
            } else if(c[i] == 1) {
              t += 'B';
            } else if(c[i] == 2) {
              t += 'X';
            } else {
              t += 'Y';
            }
          }
          string l = t.substr(0, 2);
          string r = t.substr(2, 2);
          int cnt = n;
          for(int i = 0; i < n - 1; i++) {
            if(s.substr(i, 2) == l || s.substr(i, 2) == r) {
              i++;
              cnt--;
            }
          }
          ans = min(ans, cnt);
          t.clear();
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
}