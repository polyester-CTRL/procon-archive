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
vector<vector<int>> t(5, vector<int>(5, 0));
bool ok = true;
int n, k;
void dfs(int d, int x) {
  if(x == 0 && d == n) {
    ok = false;
    return;
  }
  if(d < n) {
    for(int i = 0; i < k; i++) {
      dfs(d + 1, x ^ t[d][i]);
    }
  }
}
int main() {
  cin >> n >> k;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < k; j++) {
      cin >> t[i][j];
    }
  }
  dfs(0, 0);
  if(ok) {
    cout << "Nothing\n";
  } else {
    cout << "Found\n";
  }

  return 0;
}