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
  ll n;
  cin >> n;
  vector<int> e = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
  vector<int> ans(30, 0);
  for(int i = 2; i <= n; i++) {
    for(const auto & p : e) {
      if(i % p == 0) {
        int cnt = 0;
        int now = i;
        while(now % p == 0 && now > 0) {
          now /= p;
          cnt++;
        }
        ans[p] = max(ans[p], cnt);
      }
    }
  }
  ll s = 1;
  for(int i = 0; i < 30; i++) {
    if(ans[i] != 0) {
      for(int j = 0; j < ans[i]; j++) {
        s *= (ll)i;
      }
    }
  }
  cout << s + 1 << endl;
  return 0;
}