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
  int h, w;
  int c, q;
  cin >> h >> w >> c >> q;
  vector<int> t(q), n(q), color(q);
  for(int i = 0; i < q; i++) {
    cin >> t[i] >> n[i] >> color[i];
    n[i]--;
    color[i]--;
  }
  map<int, pair<ll, ll>> mp1, mp2;
  vector<ll> sumh(q + 1, 0), sumw(q + 1, 0);
  map<int, int> coloredh, coloredw;
  for(int i = q - 1; i >= 0; i--) {
    if(t[i] == 1) {
      if(coloredw[n[i]] == 0) {
        sumh[i] += sumh[i + 1] + 1;
        coloredw[n[i]] = 1;
      } else {
        sumh[i] += sumh[i + 1];
      }
      sumw[i] += sumw[i + 1];
    } else {
      if(coloredh[n[i]] == 0) {
        sumw[i] += sumw[i + 1] + 1;
        coloredh[n[i]] = 1;
      } else {
        sumw[i] += sumw[i + 1];
      }
      sumh[i] += sumh[i + 1];
    }
  }
  for(int i = 0; i < q; i++) {
    if(t[i] == 1) {
      mp1[n[i]] = {color[i], max((ll)0, w - sumw[i])};
    } else {
      mp2[n[i]] = {color[i], max((ll)0, h - sumh[i])};
    }
  }
  vector<ll> ans(c, 0);
  for(auto p : mp1) {
    ans[p.second.first] += p.second.second;
  }
  for(auto p : mp2) {
    ans[p.second.first] += p.second.second;
  }
  for(auto p : ans) {
    cout << p << " ";
  }
  cout << endl;
  // for(int i = 0; i < q; i++) {
  //   cout << sumh[i] << " " << sumw[i] << endl;
  // }
  return 0;
}