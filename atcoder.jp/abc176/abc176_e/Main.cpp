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
  int h, w, m;
  cin >> h >> w >> m;
  vector<ll> ansh(h, 0), answ(w, 0);
  map<pair<ll, ll>, ll> mp;
  for(int i = 0; i < m; i++) {
    int x, y;
    cin >> x >> y;
    x--, y--;
    mp[{x, y}]++;
    ansh[x]++;
    answ[y]++;
  }
  ll ans = 0, maxi = 0;
  for(int i = 0; i < h; i++) {
    maxi = max(maxi, ansh[i]);
  }
  ans += maxi;
  vector<int> idxx, idxy;
  for(int i = 0; i < h; i++) {
    if(ansh[i] == maxi) {
      idxx.push_back(i);
    }
  }
  maxi = 0;
  for(int i = 0; i < w; i++) {
    maxi = max(maxi, answ[i]);
  }
  ans += maxi;
  for(int i = 0; i < w; i++) {
    if(answ[i] == maxi) {
      idxy.push_back(i);
    }
  }
  int cnt = 0;
  for(int i = 0; i < idxx.size(); i++) {
    for(int j = 0; j < idxy.size(); j++) {
      if(mp[{idxx[i], idxy[j]}] == 1) {
        continue;
        cnt++;
      } else {
        cnt = m;
        break;
      }
    }
    if(cnt >= m) {
      break;
    }
  }
  if(cnt < m) {
    cout << ans - 1 << endl;
  } else {
    cout << ans << endl;
  }
  return 0;
}