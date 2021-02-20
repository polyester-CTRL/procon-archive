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
  bool ok = true;
  for(int i = 0; i < s.length(); i++) {
    if(i % 2 == 0) {
      if(s[i] >= 'a' && s[i] <= 'z') {
        continue;
      } else {
        ok = false;
      }
    } else {
      if(s[i] >= 'A' && s[i] <= 'Z') {
        continue;
      } else {
        ok = false;
      }
    }
  }
  if(ok) {
    cout << "Yes\n";
  } else {
    cout << "No\n";
  }
  return 0;
}