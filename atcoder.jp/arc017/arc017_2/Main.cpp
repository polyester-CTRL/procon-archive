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
  int n, k;
  cin >> n >> k;
  vector<int> a(n), b(n + 1, 0);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for(int i = 0; i < n - 1; i++) {
    if(a[i] >= a[i + 1]) {
      b[i + 1] = -1;
    }
  }
  int ans = 0, sum = 0;
  for(int i = 0; i < k; i++) {
    sum += b[i];
  }
  for(int i = 0; i < n - k + 1; i++) {
    sum -= b[i];
    if(sum == 0) {
      ans++;
    }
    sum += b[i + k];
  }
  cout << ans << endl;
  return 0;
}