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
  vector<ll> a(n);
  ll average = 0;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    average += a[i];
  }
  average /= n;
  ll sub = 0, add = 0;
  for(int i = 0; i < n; i++) {
    if(a[i] < average) {
      sub += abs(a[i] - average);
    }
    if(a[i] > average + 1) {
      add += abs(a[i] - average - 1);
    }
  }
  cout << max(sub, add) << endl;

  return 0;
}