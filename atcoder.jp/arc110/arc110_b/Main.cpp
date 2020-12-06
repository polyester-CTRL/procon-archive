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
  string s = "110";
  string t;
  cin >> t;
  if(t.length() == 1) {
    if(t[0] == '1') {
      cout << 20000000000 << endl;
    } else {
      cout << 10000000000 << endl;
    }
  } else if(t.length() == 2) {
    if(t[0] == '1') {
      cout << 10000000000 << endl;
    } else if(t[1] == '0') {
      cout << 0 << endl;
    } else {
      cout << 10000000000 - 1 << endl;
    }
  } else {
    int ok[3];
    for(int i = 0; i < 3; i++) {
      ok[i] = 0;
      for(int j = 0; j < n; j++) {
        if(t[j] != s[(j + i) % 3]) {
          ok[i] = 0;
          break;
        } else {
          ok[i] = i + j;
        }
      }
    }
    if(ok[0] + ok[1] + ok[2] == 0) {
      cout << 0 << endl;
      return 0;
    }
    cout << (10000000000 - max({ok[0], ok[1], ok[2]}) / 3) << endl;
  }

  return 0;
}