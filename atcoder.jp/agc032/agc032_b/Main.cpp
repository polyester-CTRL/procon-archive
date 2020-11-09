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
  vector<vector<int>> a(n, vector<int>(n, 0));
  vector<pair<int, int>> ans;
  if(n % 2 == 0) {
    for(int i = 0; i < n; i++) {
      for(int j = i + 1; j < n; j++) {
        if((i + j + 2) % n == 1 || i == j) {
          continue;
        }
        ans.push_back({i + 1, j + 1});
      }
    }
  } else {
    for(int i = 0; i < n; i++) {
      for(int j = i + 1; j < n; j++) {
        if((i + j + 2) % n == 0 || i == j) {
          continue;
        }
        ans.push_back({i + 1, j + 1});
      }
    }
  }
  cout << ans.size() << endl;
  for(const auto &p : ans) {
    cout << p.first << " " << p.second << endl;
  }
  return 0;
}