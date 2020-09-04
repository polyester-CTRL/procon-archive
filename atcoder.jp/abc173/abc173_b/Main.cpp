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
  cin >> n;
  int a = 0, w = 0, t = 0, r = 0;
  for(int i = 0; i < n; i++) {
    string s;
    cin >> s;
    if(s[0] == 'A') {
      a++;
    } else if(s[0] == 'W') {
      w++;
    } else if(s[0] == 'T') {
      t++;
    } else {
      r++;
    }
    s.clear();
  }
  cout << "AC x " << a << endl;
  cout << "WA x " << w << endl;
  cout << "TLE x " << t << endl;
  cout << "RE x " << r << endl;
  return 0;
}