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
    cin >> a[i];
  }
  int maxA = *max_element(a.begin(), a.end());
  for(int i = 0; i < n; i++) {
    cin >> b[i];
  }
  int maxB = *min_element(b.begin(), b.end());
  if(maxA <= maxB) {
    cout << maxB - maxA + 1 << endl;
  } else {
    cout << 0 << endl;
  }
  return 0;
}