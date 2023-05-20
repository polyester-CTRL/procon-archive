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
  int n, m;
  cin >> n >> m;
  vector<string> s(n);
  for(int i = 0; i < n; i++) {
    cin >> s[i];
  }
  sort(s.begin(), s.end());
  do {
    bool ok = true;
    for(int i = 0; i < n - 1; i++) {
      int cnt = 0;
      for(int j = 0; j < m; j++) {
        if(s[i][j] != s[i + 1][j]) {
          cnt++;
        }
      }
      if(cnt >= 2) {
        ok = false;
        break;
      }
    }
    if(ok) {
      cout << "Yes\n";
      return 0;
    }
  } while(next_permutation(s.begin(), s.end()));
  cout << "No\n";
  return 0;
}