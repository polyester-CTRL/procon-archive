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
  vector<ll> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    a[i] -= i + 1;
  }
  sort(a.begin(), a.end());
  ll b;
  if(n % 2 == 0) {
    b = (a[n / 2 - 1] + a[n / 2]) / 2;
  } else {
    b = a[n / 2];
  }
  ll sum = 0;
  for(int i = 0; i < n; i++) {
    sum += abs(a[i] - b);
  }
  cout << sum << endl;

  return 0;
}