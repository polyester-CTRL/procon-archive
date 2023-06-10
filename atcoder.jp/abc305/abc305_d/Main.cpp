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
  int n;
  cin >> n;
  vector<ll> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  vector<ll> sum(1, 0);
  for(int i = 1; i < n; i++) {
    if(i % 2 != 0) {
      sum.push_back(0 + sum[i - 1]);
    } else {
      sum.push_back(a[i] - a[i - 1] + sum[i - 1]);
    }
  }
  // for(auto p : sum) {
  //   cout << p << " ";
  // }
  // cout << endl;
  int q;
  cin >> q;
  vector<ll> ans;
  while(q--) {
    ll l, r;
    cin >> l >> r;
    ll total = 0;
    int li = distance(a.begin(), lower_bound(a.begin(), a.end(), l));
    int ri = distance(a.begin(), lower_bound(a.begin(), a.end(), r));
    // cout << li << " " << ri << endl;
    if(li % 2 == 0) {
      total -= sum[li] - (a[li] - l);
    } else {
      total -= sum[li];
    }
    if(ri % 2 == 0) {
      total += sum[ri] - (a[ri] - r);
    } else {
      total += sum[ri];
    }
    ans.push_back(total);
  }
  for(auto p : ans) {
    cout << p << endl;
  }
  return 0;
}