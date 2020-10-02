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
  int h, w, d;
  cin >> h >> w >> d;
  vector<pair<int, int>> a((h * w + 1), {0, 0});
  for(int i = 0; i < h; i++) {
    for(int j = 0; j < w; j++) {
      int tmp;
      cin >> tmp;
      a[tmp] = {i, j};
    }
  }
  int q;
  cin >> q;
  vector<int> l(q), r(q);
  for(int i = 0; i < q; i++) {
    cin >> l[i] >> r[i];
  }
  vector<int> sum(h * w + 10, 0);
  for(int i = 0; i < h * w; i++) {
    if(i + d > h * w) {
      break;
    }
    sum[i + d] = sum[i] + abs(a[i + d].first - a[i].first) +
                 abs(a[i + d].second - a[i].second);
  }
  for(int i = 0; i < q; i++) {
    cout << sum[r[i]] - sum[l[i]] << '\n';
  }
  return 0;
}