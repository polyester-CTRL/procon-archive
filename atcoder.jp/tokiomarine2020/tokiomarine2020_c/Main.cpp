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
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  vector<int> b(n, 0), imos(n + 1, 0);

  for(int i = 0; i < n; i++) {
    imos[max(i - a[i], 0)]++;
    imos[min(i + a[i] + 1, n)]--;
  }
  for(int i = 1; i < n; i++) {
    imos[i] += imos[i - 1];
  }

  for(int i = 0; i < k; i++) {
    for(int j = 0; j < n; j++) {
      b[j] = imos[j];
      b[j] = min(n, b[j]);
      imos[j] = 0;
    }
    bool ok = true;
    for(int j = 0; j < n; j++) {
      if(b[j] < n) {
        ok = false;
        break;
      }
    }
    if(ok) {
      break;
    }
    for(int j = 0; j < n; j++) {
      imos[max(j - b[j], 0)]++;
      imos[min(j + b[j] + 1, n)]--;
    }
    for(int j = 1; j < n; j++) {
      imos[j] += imos[j - 1];
    }
  }
  for(int i = 0; i < n; i++) {
    cout << b[i] << " ";
  }
  cout << endl;
  return 0;
}