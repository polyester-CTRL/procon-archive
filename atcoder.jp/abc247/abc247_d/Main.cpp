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
  int q;
  cin >> q;
  queue<pair<ll, ll>> que;
  while(q--) {
    int t, x, c;
    cin >> t;
    if(t == 1) {
      cin >> x >> c;
      que.push({x, c});
      continue;
    }
    cin >> c;
    ll sum = 0;
    while(c > 0) {
      if(que.front().second <= c) {
        sum += que.front().first * que.front().second;
        c -= que.front().second;
        que.pop();
      } else {
        sum += que.front().first * c;
        que.front().second -= c;
        c = 0;
      }
    }
    cout << sum << endl;
  }
  return 0;
}