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
  if(n == 1 && m == 0) {
    cout << 1 << " " << 2 << endl;
    return 0;
  }
  if(n == abs(m) + 1 || n == abs(m) || n == -m - 1 || n == -m || m < 0) {
    cout << -1 << endl;
    return 0;
  }

  if(m > 0) {
    for(int i = 1; i <= m + 1; i++) {
      cout << i * 2 << " " << i * 2 + 1 << endl;
    }
    for(int i = m + 2; i < n; i++) {
      cout << i * 2 + 10000000 << " " << i * 2 + 1 + 10000000 << endl;
    }
    cout << 1 << " " << 10000000 << endl;
  } else if(m < 0) {
    m *= -1;
    for(int i = 1; i <= m + 1; i++) {
      cout << i * 4 - 3 << " " << i * 4 - 1 << endl;
    }
    for(int i = m + 2; i < n; i++) {
      cout << i * 2 + 10000000 << " " << i * 2 + 1 + 10000000 << endl;
    }
    cout << 2 << " " << 10000000 << endl;
  } else {
    for(int i = 1; i <= n; i++) {
      cout << i * 2 << " " << i * 2 + 1 << endl;
    }
  }
  return 0;
}