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
  vector<ll> a(n - 1);
  for(int i = 0; i < n - 1; i++) {
    cin >> a[i];
  }
  a.push_back(a[n - 2]);
  vector<ll> b(n);
  b[0] = a[0];
  for(int i = 1; i < n; i++) {
    b[i] = min(a[i - 1], a[i]);
  }
  for(const auto &p : b) {
    cout << p << " ";
  }
  cout << endl;
  return 0;
}