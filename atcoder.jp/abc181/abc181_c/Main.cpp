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
  vector<vector<int>> a(1000, vector<int>(1000, 0));
  vector<int> x(n), y(n);
  for(int i = 0; i < n; i++) {
    cin >> x[i] >> y[i];
  }
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      if(i == j) {
        continue;
      }
      for(int k = 0; k < n; k++) {
        if(i == k || j == k) {
          continue;
        }
        if((x[i] - x[j]) * y[k] ==
           (y[i] - y[j]) * x[k] - (y[i] - y[j]) * x[i] + (x[i] - x[j]) * y[i]) {
          cout << "Yes\n";
          return 0;
        }
      }
    }
  }
  cout << "No\n";
  return 0;
}