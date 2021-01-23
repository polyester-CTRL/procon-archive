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
  ll x;
  cin >> n >> x;
  x *= 100;
  int ans = -1;
  for(int i = 0; i < n; i++) {
    int v, p;
    cin >> v >> p;
    x -= v * p;
    if(x < 0 && ans == -1) {
      ans = i + 1;
    }
  }
  cout << ans << endl;
  return 0;
}