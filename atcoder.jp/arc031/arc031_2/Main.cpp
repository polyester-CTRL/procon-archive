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
  int n = 10;
  vector<vector<int>> a(n, vector<int>(n, 0)), b(n, vector<int>(n, 0));
  int x = -1, y = -1;
  for(int i = 0; i < n; i++) {
    string s;
    cin >> s;
    for(int j = 0; j < n; j++) {
      if(s[j] == 'o') {
        a[i][j] = 1;
        x = j;
        y = i;
      }
    }
  }
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      if(a[i][j] == 1) {
        continue;
      }
      a[i][j] = 1;
      queue<pair<int, int>> que;
      que.push({y, x});
      b[y][x] = 1;
      while(!que.empty()) {
        int k = que.front().first;
        int l = que.front().second;
        que.pop();
        if(k > 0 && b[k - 1][l] == 0 && a[k - 1][l] == 1) {
          b[k - 1][l] = 1;
          que.push({k - 1, l});
        }
        if(k < n - 1 && b[k + 1][l] == 0 && a[k + 1][l] == 1) {
          b[k + 1][l] = 1;
          que.push({k + 1, l});
        }
        if(l < n - 1 && b[k][l + 1] == 0 && a[k][l + 1] == 1) {
          b[k][l + 1] = 1;
          que.push({k, l + 1});
        }
        if(l > 0 && b[k][l - 1] == 0 && a[k][l - 1] == 1) {
          b[k][l - 1] = 1;
          que.push({k, l - 1});
        }
      }
      bool ok = true;
      for(int k = 0; k < n; k++) {
        for(int l = 0; l < n; l++) {
          if(a[k][l] == 1 && b[k][l] == 0) {
            ok = false;
          }
          b[k][l] = 0;
        }
      }
      if(ok) {
        cout << "YES\n";
        return 0;
      }
      a[i][j] = 0;
    }
  }
  cout << "NO\n";
  return 0;
}