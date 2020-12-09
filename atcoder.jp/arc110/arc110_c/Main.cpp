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
  vector<int> a(n), mp(n + 10);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    mp[a[i]] = i;
  }
  vector<int> ans, check(n, 0);
  for(int i = 0; i < n; i++) {
    int now = mp[n - i];
    for(int k = now; k < n - i - 1; k++) {
      mp[a[k]] = k + 1;
      mp[a[k + 1]] = k;
      swap(a[k], a[k + 1]);
      if(check[k] == 0) {
        ans.push_back(k + 1);
        check[k] = 1;
      } else {
        cout << -1 << endl;
        return 0;
      }
    }
    if(ans.size() > n - 1) {
      cout << -1 << endl;
      return 0;
    }
  }
  if(ans.size() == n - 1) {
    for(const auto &p : ans) {
      cout << p << '\n';
    }
  } else {
    cout << -1 << endl;
  }
  return 0;
}