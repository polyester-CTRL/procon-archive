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
  int n = s.length();
  if(n >= 9) {
    if(s == "AKIHABARA") {
      cout << "YES\n";
    } else {
      cout << "NO\n";
    }
  } else {
    for(int bit = 0; bit < (1 << (n + 1)); bit++) {
      string tmp = "";
      for(int i = 0; i < n + 1; i++) {
        if(bit & (1 << i)) {
          tmp.push_back('A');
        }
        if(i < n) {
          tmp.push_back(s[i]);
        }
      }
      if(tmp == "AKIHABARA") {
        cout << "YES\n";
        return 0;
      }
    }
    cout << "NO\n";
  }
  return 0;
}