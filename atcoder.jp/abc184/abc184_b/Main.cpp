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
  int n, x;
  cin >> n >> x;
  string s;
  cin >> s;
  for(int i = 0; i < n; i++) {
    if(s[i] == 'x') {
      x--;
      if(x < 0) {
        x = 0;
      }
    } else {
      x++;
    }
  }
  cout << x << endl;
  return 0;
}