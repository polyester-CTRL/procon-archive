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
  double ans = 0;
  for(int i = 1; i <= n; i++) {
    ll tmp = i;
    int cnt = 0;
    while(tmp < k) {
      tmp *= 2;
      cnt++;
    }
    ans += (double)1 / (n * pow(2, cnt));
  }
  printf("%.10f\n", ans);
  return 0;
}