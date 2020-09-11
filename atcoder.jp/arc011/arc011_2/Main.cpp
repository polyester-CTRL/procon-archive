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
  vector<string> s(n);
  for(int i = 0; i < n; i++) {
    cin >> s[i];
  }
  vector<string> ans(n);
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < s[i].length(); j++) {
      char c = s[i][j];
      if(c == 'b' || c == 'B' || c == 'c' || c == 'C') {
        // cout << 1;
        ans[i].push_back('1');
      } else if(c == 'd' || c == 'D' || c == 'w' || c == 'W') {
        // cout << 2;
        ans[i].push_back('2');
      } else if(c == 't' || c == 'T' || c == 'j' || c == 'J') {
        // cout << 3;
        ans[i].push_back('3');
      } else if(c == 'f' || c == 'F' || c == 'q' || c == 'Q') {
        // cout << 4;
        ans[i].push_back('4');
      } else if(c == 'l' || c == 'L' || c == 'v' || c == 'V') {
        // cout << 5;
        ans[i].push_back('5');
      } else if(c == 's' || c == 'S' || c == 'x' || c == 'X') {
        // cout << 6;
        ans[i].push_back('6');
      } else if(c == 'p' || c == 'P' || c == 'm' || c == 'M') {
        // cout << 7;
        ans[i].push_back('7');
      } else if(c == 'h' || c == 'H' || c == 'k' || c == 'K') {
        // cout << 8;
        ans[i].push_back('8');
      } else if(c == 'n' || c == 'N' || c == 'g' || c == 'G') {
        // cout << 9;
        ans[i].push_back('9');
      } else if(c == 'z' || c == 'Z' || c == 'r' || c == 'R') {
        // cout << 0;
        ans[i].push_back('0');
      }
    }
  }
  bool ok = false;
  for(int i = 0; i < n; i++) {
    if(ok == true && ans[i].length() != 0) {
      cout << ' ';
    }
    cout << ans[i];
    if(ans[i].length() != 0) {
      ok = true;
    }
  }
  cout << '\n';
  return 0;
}