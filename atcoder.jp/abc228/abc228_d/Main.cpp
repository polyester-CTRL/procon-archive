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
const ll n = 1048576;

int main() {
  int q;
  cin >> q;
  map<ll, ll> mp, interval;
  interval[n] = 0;
  while(q--) {
    int t;
    ll x;
    cin >> t >> x;
    if(t == -1) {
      break;
    }
    if(t == 1) {
      ll h = x % n;
      auto itr = interval.upper_bound(h);
      if(itr == interval.end()) {
        // cout << "end\n";
        itr = interval.begin();
        h = itr->second;
      } else {
        if(itr->second > h) {
          h = itr->second;
        }
      }
      // cout << itr->first << " " << itr->second << endl;
      mp[h] = x;
      int l = itr->second, r = itr->first;
      interval.erase(r);
      if(l < h) {
        interval[h] = l;
      }
      if(h + 1 < r) {
        interval[r] = h + 1;
      }

      // for(auto itr : interval) {
      //   cout << itr.first << ":" << itr.second << "  ";
      // }
      // cout << endl;
    } else {
      x %= n;
      if(mp[x] == 0) {
        cout << -1 << endl;
      } else {
        cout << mp[x] << endl;
      }
    }
  }
  return 0;
}