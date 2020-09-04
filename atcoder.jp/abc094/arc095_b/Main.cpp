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
  vector<int> a(n), b(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    b[i] = -a[i];
  }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  if(a[n - 1] % 2 == 0) {
    int t = a[n - 1] / 2;
    int num = 1001001001;
    int idx = 0;
    for(int i = 0; i < n; i++) {
      if(num > abs(a[i] - t)) {
        num = abs(a[i] - t);
        idx = i;
      }
    }
    cout << a[n - 1] << " " << a[idx] << endl;
  } else {
    int t1 = a[n - 1] / 2, t2 = (a[n - 1] + 1) / 2;
    int num = 1001001001;
    int idx = 0;
    for(int i = 0; i < n; i++) {
      if(num > abs(a[i] - t1)) {
        num = abs(a[i] - t1);
        idx = i;
      }
      if(num > abs(a[i] - t2)) {
        num = abs(a[i] - t2);
        idx = i;
      }
    }
    cout << a[n - 1] << " " << a[idx] << endl;
  }
  return 0;
}