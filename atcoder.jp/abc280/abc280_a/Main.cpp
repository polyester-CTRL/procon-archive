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
  int h, w;
  cin >> h >> w;
  vector<string> s(h);
  int ans = 0;
  for(int i = 0; i < h; i++) {
    cin >> s[i];
    for(int j = 0; j < w; j++) {
      if(s[i][j] == '#') {
        ans++;
      }
    }
  }
  cout << ans << endl;

  return 0;
}