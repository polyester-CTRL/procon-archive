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
  int a = 0, b = 0, c = 0;
  int n = s.length();
  for(int i = 0; i < n; i++) {
    if(s[i] == 'a') {
      a++;
    } else if(s[i] == 'b') {
      b++;
    } else {
      c++;
    }
  }
  // cout << a << " " << b << " " << c << endl;
  if(abs(max({a, b, c}) - min({a, b, c})) < 2) {
    cout << "YES\n";
  } else {
    cout << "NO\n";
  }
  return 0;
}