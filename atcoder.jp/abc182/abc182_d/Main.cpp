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
  ll sum = 0, now = 0;
  ll maxi = 0, highest = 0;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    highest = max(highest, sum + a[i]);
    sum += a[i];
    maxi = max(maxi, now + highest);
    now += sum;
  }
  cout << maxi << endl;
  return 0;
}