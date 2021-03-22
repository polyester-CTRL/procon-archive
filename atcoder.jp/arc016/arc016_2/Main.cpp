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
  vector<string> x(n);
  for(int i = 0; i < n; i++) {
    string tmp;
    cin >> tmp;
    x[i] = tmp;
  }
  int ans = 0;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < 9; j++) {
      if(x[i][j] == 'x') {
        ans++;
      } else if(x[i][j] == 'o') {
        if(i == 0) {
          ans++;
        } else if(x[i - 1][j] != 'o') {
          ans++;
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
}