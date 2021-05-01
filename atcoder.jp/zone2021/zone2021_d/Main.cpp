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
  string s;
  cin >> s;
  deque<char> t;
  int state = 0;
  for(int i = 0; i < s.length(); i++) {
    if(s[i] == 'R') {
      state ^= 1;
    } else if(state == 0) {
      char tmp = '1';
      if(t.size() > 0) {
        tmp = t.back();
      }
      if(tmp == s[i]) {
        t.pop_back();
      } else {
        t.push_back(s[i]);
      }
    } else {
      char tmp = '1';
      if(t.size() > 0) {
        tmp = t.front();
      }
      if(tmp == s[i]) {
        t.pop_front();
      } else {
        t.push_front(s[i]);
      }
    }
  }
  string ans;
  while(!t.empty()) {
    ans.push_back(t.front());
    t.pop_front();
  }
  if(state == 1) {
    reverse(ans.begin(), ans.end());
  }
  cout << ans << endl;
  return 0;
}