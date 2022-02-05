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
  vector<int> a(n), b(360);
  int sum = 0;
  b[0] = 1;
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    sum += a[i];
    sum %= 360;
    b[sum] = 1;
  }
  int maxi = 0, now = 0;
  for(int i = 0; i < 360; i++) {
    if(b[i] == 1) {
      maxi = max(maxi, now);
      now = 1;
    } else {
      now++;
      maxi = max(maxi, now);
    }
  }
  cout << maxi << endl;

  return 0;
}