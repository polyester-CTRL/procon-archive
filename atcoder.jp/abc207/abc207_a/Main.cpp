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
  vector<int> a(3);
  for(int i = 0; i < 3; i++) {
    cin >> a[i];
  }
  int ans = 0;
  sort(a.begin(), a.end());
  for(int i = 1; i < 3; i++) {
    ans += a[i];
  }
  cout << ans << endl;
  return 0;
}