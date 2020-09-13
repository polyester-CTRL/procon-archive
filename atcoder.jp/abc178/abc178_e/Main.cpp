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
  vector<int> a(n), b(n);
  for(int i = 0; i < n; i++) {
    int x, y;
    cin >> x >> y;
    a[i] = x - y;
    b[i] = x + y;
  }
  int FX = *max_element(a.begin(), a.end()) - *min_element(a.begin(), a.end());
  int FY = *max_element(b.begin(), b.end()) - *min_element(b.begin(), b.end());
  cout << max(FX, FY) << endl;
  return 0;
}