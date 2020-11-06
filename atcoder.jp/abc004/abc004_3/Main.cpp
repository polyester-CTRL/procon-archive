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
  ll n;
  cin >> n;
  vector<int> a = {1, 2, 3, 4, 5, 6};
  vector<vector<int>> b;
  for(int i = 0; i < 30; i++) {
    swap(a[i % 5], a[i % 5 + 1]);
    b.push_back(a);
  }
  vector<int> ans = b[(n - 1) % 30];
  for(const auto &p : ans) {
    cout << p;
  }
  cout << endl;
  return 0;
}