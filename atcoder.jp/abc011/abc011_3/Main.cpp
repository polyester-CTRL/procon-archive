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
  vector<int> ng(3);
  cin >> n;
  for(int i = 0; i < 3; i++) {
    cin >> ng[i];
  }
  vector<vector<int>> a(310, vector<int>(110, 0));
  a[0][0] = 1;
  for(int i = 0; i <= n; i++) {
    for(int j = 0; j <= 100; j++) {
      if(i == ng[0] || i == ng[1] || i == ng[2]) {
        a[i][j] = 0;
        continue;
      }
      a[i + 1][j + 1] += a[i][j];
      a[i + 2][j + 1] += a[i][j];
      a[i + 3][j + 1] += a[i][j];
    }
  }
  for(int i = 0; i <= 100; i++) {
    if(a[n][i] > 0) {
      cout << "YES\n";
      return 0;
    }
  }
  cout << "NO\n";
  return 0;
}