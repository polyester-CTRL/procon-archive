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
  vector<ll> x(n), y(n);
  for(int i = 0; i < n; i++) {
    cin >> x[i] >> y[i];
  }
  int cnt = 0;
  for(int i = 0; i < n; i++) {
    for(int j = i + 1; j < n; j++) {
      for(int k = j + 1; k < n; k++) {
        ll s =
            abs((x[j] - x[i]) * (y[k] - y[i]) - (y[j] - y[i]) * (x[k] - x[i]));
        if(s % 2 == 0 && s != 0) {
          cnt++;
        }
      }
    }
  }
  cout << cnt << endl;
  return 0;
}