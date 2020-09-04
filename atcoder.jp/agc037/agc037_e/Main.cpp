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
  ll n, k;
  cin >> n >> k;
  string s;
  cin >> s;
  string t = s;
  reverse(t.begin(), t.end());
  s += t;
  reverse(s.begin(), s.end());
  string u = s;
  for(int i = 0; i < n; i++) {
    string tmp = s.substr(i, n);
    u = min(u, tmp);
  }

  int cnt = 1;
  for(int i = 0; i < n - 1; i++) {
    if(u[i] == u[i + 1]) {
      cnt++;
    } else {
      break;
    }
  }
  ll num = cnt * (ll)pow(2, min({n, k - 1, (ll)16}));
  if(n < num) {
    for(int i = 0; i < n; i++) {
      cout << u[0];
    }
  } else {
    for(int i = 0; i < num; i++) {
      cout << u[0];
    }
    for(int i = cnt; i < n - num + cnt; i++) {
      cout << u[i];
    }
  }

  cout << endl;

  return 0;
}