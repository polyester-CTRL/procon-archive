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
  vector<int> price(n);
  vector<vector<int>> f(n, vector<int>(m, 0));
  for(int i = 0; i < n; i++) {
    cin >> price[i];
    int c;
    cin >> c;
    for(int j = 0; j < c; j++) {
      int tmp;
      cin >> tmp;
      f[i][tmp - 1] = 1;
    }
  }
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      if(price[i] < price[j]) {
        continue;
      }
      bool ok = true;
      for(int k = 0; k < m; k++) {
        if(f[i][k] == 1 && f[j][k] == 0) {
          ok = false;
        }
      }
      if(!ok) {
        continue;
      }
      for(int k = 0; k < m; k++) {
        if(f[i][k] == 0 && f[j][k] == 1) {
          cout << "Yes\n";
          return 0;
        }
      }
      if(price[i] > price[j]) {
        cout << "Yes\n";
        return 0;
      }
    }
  }
  cout << "No\n";
  return 0;
}