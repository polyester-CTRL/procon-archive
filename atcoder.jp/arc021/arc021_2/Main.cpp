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
  vector<ll> a(n), b(n);
  for(int i = 0; i < n; i++) {
    cin >> b[i];
  }
  a[0] = 0;
  a[n - 1] = b[n - 1];
  for(int i = 1; i < n; i++) {
    a[i] = b[i - 1] ^ a[i - 1];
  }
  if(a[0] == (b[n - 1] ^ a[n - 1])) {
    for(int i = 0; i < n; i++) {
      cout << a[i] << '\n';
    }
  } else {
    cout << -1 << '\n';
  }
  return 0;
}