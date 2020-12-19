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
  int ans = 0;
  for(int i = 1; i <= n; i++) {
    int tmp = i;
    bool ok = true;
    while(tmp > 0) {
      if(tmp % 10 == 7) {
        ok = false;
      }
      tmp /= 10;
    }
    tmp = i;
    while(tmp > 0) {
      if(tmp % 8 == 7) {
        ok = false;
      }
      tmp /= 8;
    }
    if(ok) {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}