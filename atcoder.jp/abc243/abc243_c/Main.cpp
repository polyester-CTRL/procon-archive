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
  int n;
  cin >> n;
  vector<pair<int, int>> x(n);
  for(int i = 0; i < n; i++) {
    cin >> x[i].first >> x[i].second;
  }
  string s;
  cin >> s;
  map<int, pair<int, int>> mp;
  for(int i = 0; i < n; i++) {
    if(mp[x[i].second] == make_pair(0, 0)) {
      if(s[i] == 'L') {
        mp[x[i].second] = make_pair(1000000000, x[i].first);
      } else {
        mp[x[i].second] = make_pair(x[i].first, 0);
      }
    } else {
      if(s[i] == 'L') {
        mp[x[i].second] = make_pair(mp[x[i].second].first,
                                    max(mp[x[i].second].second, x[i].first));
      } else {
        mp[x[i].second] = make_pair(min(mp[x[i].second].first, x[i].first),
                                    mp[x[i].second].second);
      }
    }
  }
  for(auto p : mp) {
    if(p.second.first < p.second.second) {
      cout << "Yes\n";
      return 0;
    }
  }
  cout << "No\n";
  return 0;
}