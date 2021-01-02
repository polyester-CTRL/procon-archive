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
  vector<int> x(n), y(n);
  for(int i = 0; i < n; i++) {
    cin >> x[i] >> y[i];
  }
  int ans = 0;
  for(int i = 0; i < n; i++) {
    for(int j = i + 1; j < n; j++) {
      if(abs(x[i] - x[j]) >= abs(y[i] - y[j])) {
        ans++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}