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
  ll ans = 0;
  for(int i = 0; i < n; i++) {
    if(i < n - 1) {
      int j = i;
      ll cnt = 0;
      while(j < n - 1 && s[j] == '2' && s[j + 1] == '5') {
        cnt++;
        j += 2;
      }
      ans += cnt * (cnt + 1) / 2;
      i = j;
    }
  }
  cout << ans << endl;
  return 0;
}