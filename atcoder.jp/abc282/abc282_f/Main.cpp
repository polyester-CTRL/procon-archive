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
  vector<pair<int, int>> numPair;
  vector<vector<int>> g(n);
  vector<int> idx;
  multimap<int, int> mp;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < 12; j++) {
      numPair.push_back({i + 1, min(n, i + (int)pow(2, j))});
      mp.insert({min(n, i + (int)pow(2, j)), numPair.size()});
      g[i].push_back((*numPair.rbegin()).second);
      idx.push_back(i + 1);
      if((*numPair.rbegin()).second >= n) {
        break;
      }
    }
  }
  int m = numPair.size();
  cout << m << endl;
  for(int i = 0; i < m; i++) {
    cout << numPair[i].first << " " << numPair[i].second << endl;
  }
  int q;
  cin >> q;
  while(q--) {
    int l, r;
    cin >> l >> r;
    int ans1 = 0, ans2 = 0;
    int tmp = 1;
    while(tmp < r) {
      tmp *= 2;
    }
    tmp /= 2;
    ans1 = distance(idx.begin(), lower_bound(idx.begin(), idx.end(), l)) + 1;
    for(int i = ans1; numPair[i].first == l; i++) {
      if(numPair[i].second < r) {
        ans1++;
        continue;
      }
      break;
    }
    auto p = mp.equal_range(r);
    for(auto it = p.first; it != p.second; ++it) {
      if(it->second >= ans1) {
        ans2 = it->second;
        break;
      }
    }

    cout << ans1 << " " << ans2 << endl;
  }
  return 0;
}