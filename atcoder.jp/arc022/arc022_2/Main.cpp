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
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  map<int, int> mp;
  int l = 0;
  int ans = 0;
  for(int r = 0; r < n; r++) {
    mp[a[r]]++;
    while(mp[a[r]] > 1) {
      mp[a[l]]--;
      l++;
    }
    ans = max(ans, r - l + 1);
  }
  cout << ans << endl;
  return 0;
}