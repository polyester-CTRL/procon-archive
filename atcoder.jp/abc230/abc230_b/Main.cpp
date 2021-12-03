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
  string t = "oxx";
  for(int i = 0; i < 9; i++) {
    t += "oxx";
  }
  for(int i = 0; i < t.length() - s.length(); i++) {
    if(t.substr(i, s.length()) == s) {
      cout << "Yes\n";
      return 0;
    }
  }
  cout << "No\n";
  return 0;
}