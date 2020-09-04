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
  vector<int> a(m), b(n, 0);
  for(int i = 0; i < m; i++) {
    cin >> a[i];
    a[i]--;
  }
  reverse(a.begin(), a.end());
  for(int i = 0; i < m; i++) {
    if(b[a[i]] == 0) {
      cout << a[i] + 1 << '\n';
      b[a[i]]++;
    } else {
      continue;
    }
  }
  for(int i = 0; i < n; i++) {
    if(b[i] == 0) {
      cout << i + 1 << '\n';
    }
  }

  return 0;
}