#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <iomanip>
#include <iostream>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <stack>
#include <string>
#include <vector>
using namespace std;
using ll = long long;
int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(10);
  for(int i = 0; i < 10; i++) {
    cin >> a[i];
  }
  vector<pair<int, int>> x(n);
  for(int i = 0; i < n; i++) {
    cin >> x[i].first >> x[i].second;
  }
  vector<vector<int>> ans(k, vector<int>(4, 0));
  int minus = 20;
  random_device rd;
  mt19937 mt(rd());
  uniform_int_distribution<int> dist(-10000, 10000);
  for(int i = 0; i < 50; i++) {
    for(int j = 0; j < 4; j++) {
      
    }
  }

  for(int i = minus; i < ans.size(); i++) {
    for(int j = 0; j < 4; j++) {
      ans[i][j] = dist(mt);
    }
  }
  cout << ans.size() - minus << endl;
  for(int i = minus; i < ans.size(); i++) {
    for(int j = 0; j < 4; j++) {
      cout << ans[i][j] << " ";
    }
    cout << endl;
  }
  return 0;
}