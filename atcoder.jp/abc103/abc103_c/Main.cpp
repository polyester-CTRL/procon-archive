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
  vector<int> a(n);
  int ans = 0;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    ans += a[i] - 1;
  }
  cout << ans << endl;

  return 0;
}