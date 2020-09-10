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
  stack<char> st;
  int cnt = 0;
  int ans = 0;
  for(int i = 0; i < n; i++) {
    if(s[i] == '{') {
      cnt++;
    } else if(s[i] == '}') {
      cnt--;
    }
    if(cnt == 1 && s[i] == ':') {
      ans = 1;
    }
  }
  if(s == "{}") {
    ans = 1;
  }
  cout << (ans ? "dict" : "set") << endl;
  return 0;
}