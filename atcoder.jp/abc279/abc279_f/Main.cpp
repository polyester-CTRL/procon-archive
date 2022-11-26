#include <algorithm>
#include <atcoder/dsu>
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
  int n, q;
  cin >> n >> q;
  vector<int> ans;
  atcoder::dsu uf(n + q + 1);
  vector<int> ld(n), box(n + q);
  ll sum = n;
  for(int i = 0; i < n; i++) {
    ld[i] = i;
    box[i] = i;
  }

  for(int i = 0; i < q; i++) {
    int t;
    cin >> t;
    if(t == 1) {
      int x, y;
      cin >> x >> y;
      x--, y--;
      if(ld[x] == -1 && ld[y] != -1) {
        ld[x] = ld[y];
        box[ld[y]] = x;
        ld[y] = -1;
      } else if(ld[x] != -1 && ld[y] != -1) {
        uf.merge(ld[x], ld[y]);
        ld[x] = uf.leader(ld[x]);
        box[ld[x]] = x;
        ld[y] = -1;
      }
    } else if(t == 2) {
      ll x;
      cin >> x;
      x--;
      if(ld[x] == -1) {
        ld[x] = sum;
        box[ld[x]] = x;
      } else {
        uf.merge(ld[x], sum);
        ld[x] = uf.leader(ld[x]);
        box[ld[x]] = x;
      }

      sum++;
    } else {
      ll x;
      cin >> x;
      x--;
      ans.push_back(box[uf.leader(x)]);
    }
  }
  for(auto p : ans) {
    cout << p + 1 << endl;
  }
  return 0;
}