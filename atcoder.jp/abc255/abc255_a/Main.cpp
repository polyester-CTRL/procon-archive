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
  int r, c;
  cin >> r >> c;
  r--, c--;
  vector<vector<int>> a(2, vector<int>(2, 0));
  for(int i = 0; i < 2; i++) {
    for(int j = 0; j < 2; j++) {
      cin >> a[i][j];
    }
  }
  cout << a[r][c] << endl;
  return 0;
}