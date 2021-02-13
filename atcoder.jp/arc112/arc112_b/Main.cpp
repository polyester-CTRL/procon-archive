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
  ll b, c;
  cin >> b >> c;
  ll ans = 1;
  if(b > 0) {
    ans += min(b, c / 2);
    ans += min(b - 1, (c - 1) / 2);
    ans += (c + 1) / 2;
    ans += max((ll)0, (c - 2) / 2);
  } else {
    ans += c / 2;
    ans += (c - 1) / 2;
    ans += min(2 * (-b), (c + 1) / 2);
  }
  cout << ans << endl;
  return 0;
}