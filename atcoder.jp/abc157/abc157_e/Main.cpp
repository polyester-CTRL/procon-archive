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
  int n, q;
  string s;
  cin >> n >> s >> q;
  vector<set<int>> st(26);
  for(int i = 0; i < n; i++) {
    st[s[i] - 'a'].insert(i + 1);
  }
  vector<int> ans;
  ans.reserve(q);
  for(int i = 0; i < q; i++) {
    int in;
    cin >> in;
    if(in == 1) {
      int ip;
      char c;
      cin >> ip >> c;
      if(c == s[ip - 1]) {
        continue;
      }
      st[s[ip - 1] - 'a'].erase(ip);
      st[c - 'a'].insert(ip);
      s[ip - 1] = c;
    } else {
      int l, r;
      cin >> l >> r;
      int cnt = 0;
      for(int j = 0; j < 26; j++) {
        auto p = st[j].lower_bound(l);
        if(p != st[j].end() && *p <= r) {
          cnt++;
        }
      }
      ans.push_back(cnt);
    }
  }
  for(auto p : ans) {
    cout << p << "\n";
  }
  return 0;
}