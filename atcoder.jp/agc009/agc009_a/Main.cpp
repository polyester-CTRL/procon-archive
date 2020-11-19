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
    cin >> a[i] >> b[i];
  }
  ll cnt = 0;
  for(int i = n - 1; i >= 0; i--) {
    if((a[i] + cnt) % b[i] != 0) {
      cnt += b[i] - (a[i] + cnt) % b[i];
    }
  }
  cout << cnt << endl;
  return 0;
}