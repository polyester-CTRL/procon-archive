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
  int n;
  cin >> n;
  vector<vector<int>> a(n, vector<int>(n)), b(n, vector<int>(n));
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      cin >> a[i][j];
    }
  }
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      cin >> b[i][j];
    }
  }
  bool one = true, two = true, three = true, four = true;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      if(a[i][j] != b[i][j] && a[i][j] == 1) {
        one = false;
      }
      if(a[i][j] != b[n - 1 - j][i] && a[i][j] == 1) {
        two = false;
      }
      if(a[i][j] != b[n - 1 - i][n - 1 - j] && a[i][j] == 1) {
        three = false;
      }
      if(a[i][j] != b[j][n - 1 - i] && a[i][j] == 1) {
        four = false;
      }
    }
  }
  if(one || two || three || four) {
    cout << "Yes\n";
  } else {
    cout << "No\n";
  }
  return 0;
}