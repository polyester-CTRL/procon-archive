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
  int ans = 0;
  for(int i = 0; i < 10000; i++) {
    int now = i;
    string t = s;
    bool ok = true;
    int cnt = 0;
    while(cnt < 4) {
      if(t[now % 10] == 'x') {
        ok = false;
      } else if(t[now % 10] == 'o') {
        t[now % 10] = '?';
      }
      now /= 10;
      cnt++;
    }
    for(int j = 0; j < 10; j++) {
      if(t[j] == 'o') {
        ok = false;
      }
    }
    if(ok) {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}