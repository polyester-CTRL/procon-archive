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
int calculate(string s, string t) {
  int res = 0;
  for(int i = 0; i < s.length(); i++) {
    if(s[i] != t[i]) {
      res++;
    }
  }
  return res;
}
int main() {
  int n;
  cin >> n;
  string s, t;
  cin >> s >> t;
  for(int bits = 0; bits < (1 << (n * 2)); bits++) {
  }
  // s = "", t = "";
  // for(int i = 0; i < n; i++) {
  //   if(bits & (1 << i)) {
  //     s.push_back('1');
  //   } else {
  //     s.push_back('0');
  //   }
  // }
  // for(int i = 0; i < n; i++) {
  //   if(bits & (1 << (i + n))) {
  //     t.push_back('1');
  //   } else {
  //     t.push_back('0');
  //   }
  // }
  string ans;
  for(int i = 0; i < n; i++) {
    ans.push_back('0');
  }
  int dist = 0;
  for(int i = 0; i < n; i++) {
    if(s[i] == t[i]) {
      continue;
    }
    if(s[i] == '0') {
      dist++;
    } else {
      dist--;
    }
  }
  // cout << dist << endl;
  bool flag = false;
  if(dist < 0) {
    dist *= -1;
    flag = true;
  }
  if(dist % 2 != 0) {
    cout << -1 << endl;
    return 0;
    // continue;
  }
  int cnt = 0;
  for(int i = n - 1; i >= 0; i--) {
    if(s[i] == t[i]) {
      continue;
    }
    if(cnt < dist && flag == false) {
      ans[i] = '1';
      cnt += 2;
    }
    if(cnt < dist && s[i] == '1' && flag == true) {
      ans[i] = '1';
      cnt += 2;
    }
  }
  cnt = 0;
  string ans2;
  dist = 0;
  for(int i = 0; i < n; i++) {
    if(s[i] == t[i]) {
      continue;
    }
    if(s[i] == '0') {
      dist--;
    } else {
      dist++;
    }
  }
  flag = false;
  if(dist < 0) {
    dist *= -1;
    flag = true;
  }
  if(dist % 2 != 0) {
    cout << -1 << endl;
    return 0;
    // continue;
  }
  for(int i = 0; i < n; i++) {
    ans2.push_back('0');
  }

  for(int i = n - 1; i >= 0; i--) {
    if(s[i] == t[i]) {
      continue;
    }
    if(cnt < dist && flag == false) {
      ans2[i] = '1';
      cnt += 2;
    }
    if(cnt < dist && t[i] == '1' && flag == true) {
      ans2[i] = '1';
      cnt += 2;
    }
  }
  // cout << s << " " << t << ":";

  // cout << ans << " ";
  // if(ans != ans2) {
  //   cout << ans2 << ": ";
  // }
  for(int i = 0; i < n; i++) {
    if(ans[i] == '0' && ans2[i] == '1') {
      ans = ans2;
      break;
    } else if(ans[i] == '1' && ans2[i] == '0') {
      break;
    }
  }
  // for(int bit = 0; bit < (1 << n); bit++) {
  //   string tmp;
  //   for(int i = n - 1; i >= 0; i--) {
  //     if(bit & (1 << i)) {
  //       tmp.push_back('1');
  //     } else {
  //       tmp.push_back('0');
  //     }
  //   }
  //   if(calculate(s, tmp) == calculate(t, tmp)) {
  //     if(tmp != ans) {
  //       cout << tmp << " err";
  //     }
  //     break;
  //   }
  // }
  // cout << endl;
  cout << ans << endl;
  return 0;
}