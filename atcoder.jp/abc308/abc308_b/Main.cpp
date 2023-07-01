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
  int n, m;
  cin >> n >> m;
  m++;
  vector<string> c(n), d(m);
  vector<int> price(m);
  for(int i = 0; i < n; i++) {
    cin >> c[i];
  }
  for(int i = 1; i < m; i++) {
    cin >> d[i];
  }
  for(int i = 0; i < m; i++) {
    cin >> price[i];
  }
  int ans = 0;
  for(int i = 0; i < n; i++) {
    bool found = false;
    for(int j = 0; j < m; j++) {
      if(c[i] == d[j]) {
        found = true;
        ans += price[j];
      }
    }
    if(!found) {
      ans += price[0];
    }
  }
  cout << ans << endl;

  return 0;
}