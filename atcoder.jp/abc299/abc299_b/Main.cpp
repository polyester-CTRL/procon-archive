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
  int n, t;
  cin >> n >> t;
  vector<int> c(n), r(n);
  for(int i = 0; i < n; i++) {
    cin >> c[i];
  }
  for(int i = 0; i < n; i++) {
    cin >> r[i];
  }
  int maxi = 0, idx = 0, t1 = 0;
  for(int i = 0; i < n; i++) {
    if(c[i] == t) {
      t1 = 1;
      break;
    }
  }
  if(t1 == 0) {
    t = c[0];
  }
  for(int i = 0; i < n; i++) {
    if(c[i] == t) {
      if(r[i] > maxi) {
        idx = i;
        maxi = r[i];
      }
    }
  }
  cout << idx + 1 << endl;
  return 0;
}