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
  int n, k;
  cin >> n >> k;
  vector<int> a(n), ans(n, -1);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    a[i]--;
  }
  vector<int> under(n, 0), pile(n, 0);
  set<int> st;
  for(int i = 0; i < n; i++) {
    auto it = st.upper_bound(a[i]);
    if(it == st.end()) {
      pile[a[i]] = 1;
      st.insert(a[i]);
    } else {
      int y = *it;
      under[a[i]] = y;
      pile[a[i]] = pile[y] + 1;
      st.erase(y);
      st.insert(a[i]);
    }
    if(pile[a[i]] >= k) {
      int x = a[i];
      st.erase(x);
      for(int j = 0; j < k; j++) {
        ans[x] = i + 1;
        x = under[x];
      }
    }
  }
  for(int i = 0; i < n; i++) {
    cout << ans[i] << endl;
  }
  return 0;
}