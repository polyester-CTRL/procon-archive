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
  vector<int> h(n);
  for(int i = 0; i < n; i++) {
    cin >> h[i];
  }
  int ans = 0;
  int tmp = 0;
  for(int i = 0; i < n; i++) {
    tmp++;
    if(i > 0 && i < n - 1) {
      if(h[i - 1] > h[i] && h[i] < h[i + 1]) {
        ans = max(ans, tmp);
        tmp = 1;
      }
    }
    ans = max(ans, tmp);
  }
  cout << min(ans, n) << endl;
  return 0;
}