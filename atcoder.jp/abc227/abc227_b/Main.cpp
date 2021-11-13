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
  vector<int> s(n), check(n, 1);
  for(int i = 0; i < n; i++) {
    cin >> s[i];
  }
  for(int i = 1; i < 1000; i++) {
    for(int j = 1; j < 1000; j++) {
      for(int k = 0; k < n; k++) {
        if(s[k] == 4 * i * j + 3 * i + 3 * j) {
          check[k] = 0;
        }
      }
    }
  }
  int ans = 0;
  for(int i = 0; i < n; i++) {
    ans += check[i];
  }
  cout << ans << endl;
  return 0;
}