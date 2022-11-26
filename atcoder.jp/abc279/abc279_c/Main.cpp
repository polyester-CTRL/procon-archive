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
  int h, w;
  cin >> h >> w;
  vector<string> s(h), t(h);
  for(int i = 0; i < h; i++) {
    cin >> s[i];
  }
  for(int i = 0; i < h; i++) {
    cin >> t[i];
  }
  map<string, int> mp1, mp2;
  for(int j = 0; j < w; j++) {
    string tmpS = "", tmpT = "";
    for(int i = 0; i < h; i++) {
      tmpS += s[i][j];
      tmpT += t[i][j];
    }
    mp1[tmpS]++;
    mp2[tmpT]++;
  }
  bool ok = true;
  for(auto p : mp1) {
    auto it = mp2.find(p.first);
    if(it == mp2.end()) {
      ok = false;
      break;
    }
    if(it->second != p.second) {
      ok = false;
      break;
    }
  }
  if(ok) {
    cout << "Yes\n";
  } else {
    cout << "No\n";
  }
  return 0;
}