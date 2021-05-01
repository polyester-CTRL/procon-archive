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
  int ans = 0;
  for(int i = 0; i < n - 3; i++) {
    if(s.substr(i, 4) == "ZONe") {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}