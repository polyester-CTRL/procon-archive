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
  int n, m;
  cin >> n >> m;
  if(m < n * 2 || n * 4 < m) {
    cout << -1 << " " << -1 << " " << -1 << endl;
  } else if(m <= n * 3) {
    cout << 3 * n - m << " " << m - 2 * n << " " << 0 << endl;
  } else {
    cout << 0 << " " << 4 * n - m << " " << m - 3 * n << endl;
  }
  return 0;
}