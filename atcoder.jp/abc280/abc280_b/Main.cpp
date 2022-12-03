#include <algorithm>
#include <cmath>
#include <cstdio>
#include <functional>
#include <iomanip>
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
  vector<ll> s(n), a(n, 0);
  for(int i = 0; i < n; i++) {
    cin >> s[i];
  }
  a[0] = s[0];
  ll prev = a[0];
  for(int i = 1; i < n; i++) {
    a[i] = s[i] - prev;
    prev += a[i];
  }
  for(int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
  return 0;
}