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
int h, w;
int dfs(int now, int bit, int a, int b) {
  int ans = 0;
  if(now == h * w) {
    return 1;
  }
  if(bit & (1 << now)) {
    return dfs(now + 1, bit, a, b);
  }
  int tmp = bit;
  if(a > 0) {
    if(now + w < h * w) {
      if((bit & (1 << (now + w))) == 0) {
        tmp |= (1 << now);
        tmp |= (1 << (now + w));
        ans += dfs(now + 1, tmp, a - 1, b);
      }
    }
    if(now % w < w - 1) {
      if((bit & (1 << (now + 1))) == 0) {
        tmp = bit;
        tmp |= (1 << now);
        tmp |= (1 << (now + 1));
        ans += dfs(now + 1, tmp, a - 1, b);
      }
    }
  }
  if(b > 0) {
    tmp = bit;
    tmp |= (1 << now);
    ans += dfs(now + 1, tmp, a, b - 1);
  }
  return ans;
}
int main() {
  int a, b;
  cin >> h >> w >> a >> b;
  cout << dfs(0, 0, a, b) << endl;
  return 0;
}