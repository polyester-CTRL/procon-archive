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
  cin >> s;
  int n = s.length();
  for(int i = 0; i < n; i++) {
    if(s[i] == '0') {
      continue;
    }
    t.push_back(s[i]);
  }
  n = t.length();
  int royal[4][5] = {};
  for(int i = 0; i < n; i += 2) {
    int mark = -1;
    int no = -1;
    if(t[i] == 'S') {
      mark = 0;
    } else if(t[i] == 'H') {
      mark = 1;
    } else if(t[i] == 'D') {
      mark = 2;
    } else if(t[i] == 'C') {
      mark = 3;
    }
    if(t[i + 1] == '1') {
      no = 0;
    } else if(t[i + 1] == 'J') {
      no = 1;
    } else if(t[i + 1] == 'Q') {
      no = 2;
    } else if(t[i + 1] == 'K') {
      no = 3;
    } else if(t[i + 1] == 'A') {
      no = 4;
    }
    if(mark == -1 || no == -1) {
      continue;
    }
    royal[mark][no] = i + 1;
  }
  for(int i = 0; i < 4; i++) {
    for(int j = 0; j < 5; j++) {
      if(royal[i][j] == 0) {
        for(int k = 0; k < 5; k++) {
          royal[i][k] = 0;
        }
        break;
      }
    }
  }

  int mini = 1001001001;
  int idx = 0;
  for(int i = 0; i < 4; i++) {
    int tmp = 0;
    for(int j = 0; j < 5; j++) {
      if(royal[i][j] == 0) {
        break;
      }
      tmp = max(tmp, royal[i][j]);
    }
    if(mini > tmp && tmp != 0) {
      mini = tmp;
      idx = i;
    }
  }
  string ans;
  for(int i = 0; i < mini + 1; i += 2) {
    if((idx == 0 && t[i] == 'S') || (idx == 1 && t[i] == 'H') ||
       (idx == 2 && t[i] == 'D') || (idx == 3 && t[i] == 'C')) {
      if(t[i + 1] == '1' && royal[idx][0] != 0) {
        royal[idx][0] = 0;
        continue;
      } else if(t[i + 1] == 'J' && royal[idx][1] != 0) {
        royal[idx][1] = 0;
        continue;
      } else if(t[i + 1] == 'Q' && royal[idx][2] != 0) {
        royal[idx][2] = 0;
        continue;
      } else if(t[i + 1] == 'K' && royal[idx][3] != 0) {
        royal[idx][3] = 0;
        continue;
      } else if(t[i + 1] == 'A' && royal[idx][4] != 0) {
        royal[idx][4] = 0;
        continue;
      }
    }
    ans += t[i];
    ans += t[i + 1];
    if(t[i + 1] == '1') {
      ans += '0';
    }
  }
  if(ans.length() == 0) {
    cout << 0 << endl;
  } else {
    cout << ans << endl;
  }
  return 0;
}