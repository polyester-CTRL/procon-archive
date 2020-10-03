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
  string s;
  cin >> n >> s;
  int a = 0, t = 0, g = 0, c = 0;
  int ans = 0;
  for(int i = 0; i < n; i++) {
    a = 0, t = 0, g = 0, c = 0;
    for(int j = i; j < n; j++) {
      if(s[j] == 'A') {
        a++;
      } else if(s[j] == 'T') {
        t++;
      } else if(s[j] == 'G') {
        g++;
      } else if(s[j] == 'C') {
        c++;
      }
      if(a == t && g == c) {
        ans++;
      }
    }
  }
  cout << ans << endl;
  return 0;
}