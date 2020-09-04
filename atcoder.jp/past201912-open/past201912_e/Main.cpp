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
  int n, q;
  cin >> n >> q;
  vector<vector<int>> f(n, vector<int>(n, 0));
  for(int i = 0; i < q; i++) {
    int tmp;
    cin >> tmp;
    if(tmp == 1) {
      int a, b;
      cin >> a >> b;
      a--;
      b--;
      f[a][b] = 1;
    } else if(tmp == 2) {
      int a;
      cin >> a;
      a--;
      for(int i = 0; i < n; i++) {
        if(f[i][a] == 1) {
          f[a][i] = 1;
        }
      }
    } else {
      int a;
      cin >> a;
      a--;
      vector<int> t;
      for(int i = 0; i < n; i++) {
        if(i == a || f[a][i] == 0) {
          continue;
        }
        for(int j = 0; j < n; j++) {
          if(j == a) {
            continue;
          }
          if(f[i][j] == 1) {
            t.push_back(j);
          }
        }
      }
      for(auto p : t) {
        f[a][p] = 1;
      }
    }
  }
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      if(f[i][j] == 1) {
        cout << "Y";
      } else {
        cout << "N";
      }
    }
    cout << endl;
  }
  return 0;
}