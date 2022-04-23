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
  string s;
  cin >> s;
  map<char, int> mp;
  int big = 0, small = 0;
  for(int i = 0; i < s.size(); i++) {
    if(s[i] >= 'A' && s[i] <= 'Z') {
      big = 1;
    }
    if(s[i] >= 'a' && s[i] <= 'z') {
      small = 1;
    }
    mp[s[i]]++;
  }
  bool ok = true;
  if(small == 0 || big == 0) {
    cout << "No\n";
  } else {
    for(auto p : mp) {
      if(p.second >= 2) {
        ok = false;
      }
    }
    if(ok) {
      cout << "Yes\n";
    } else {
      cout << "No\n";
    }
  }
  return 0;
}