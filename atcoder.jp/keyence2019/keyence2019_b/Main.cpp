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
  for(int i = 0; i <= 7; i++) {
    string tmp1, tmp2;
    tmp1 = s.substr(0, 7 - i);
    tmp2 = s.substr(n - i, i);
    if(tmp1 + tmp2 == "keyence") {
      cout << "YES\n";
      return 0;
    }
  }
  cout << "NO\n";
  return 0;
}