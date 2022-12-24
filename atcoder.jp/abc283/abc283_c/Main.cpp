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
  int ans = 0;
  for(int i = 0; i < s.length(); i++) {
    if(i < s.length() - 1) {
      if(s[i] == '0' && s[i + 1] == '0') {
        ans++;
        i++;
        continue;
      }
    }
    ans++;
  }
  cout << ans << endl;
  return 0;
}