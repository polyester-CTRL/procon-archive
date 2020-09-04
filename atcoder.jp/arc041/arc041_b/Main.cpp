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
  int n, m;
  cin >> n >> m;
  vector<vector<int>> a(n, vector<int>(m, 0)), b(n, vector<int>(m, 0));
  for(int i = 0; i < n; i++) {
    string s;
    cin >> s;
    for(int j = 0; j < m; j++) {
      b[i][j] = (int)(s[j] - '0');
    }
  }
  for(int i = 1; i < n - 1; i++) {
    for(int j = 1; j < m - 1; j++) {
      int num = min({b[i - 1][j], b[i][j - 1], b[i + 1][j], b[i][j + 1]});
      a[i][j] += num;
      b[i - 1][j] -= num;
      b[i][j - 1] -= num;
      b[i + 1][j] -= num;
      b[i][j + 1] -= num;
    }
  }
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < m; j++) {
      cout << a[i][j];
    }
    cout << endl;
  }
  return 0;
}