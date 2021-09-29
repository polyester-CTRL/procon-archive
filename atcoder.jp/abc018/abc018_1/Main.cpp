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
  vector<pair<int, int>> a(3);
  for(int i = 0; i < 3; i++) {
    cin >> a[i].first;
    a[i].second = i;
  }
  sort(a.rbegin(), a.rend());
  vector<int> ans(3);
  for(int i = 0; i < 3; i++) {
    ans[a[i].second] = i + 1;
  }
  for(int i = 0; i < 3; i++) {
    cout << ans[i] << endl;
  }
  return 0;
}