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
  vector<int> a(1000005, 0);
  int zero = 0;
  for(int i = 0; i < n; i++) {
    int tmp;
    cin >> tmp;
    if(tmp == 0) {
      zero++;
      continue;
    }
    a[tmp]++;
  }
  for(int i = 1000000; i >= 0; i--) {
    a[i] += a[i + 1];
  }
  int q;
  cin >> q;
  vector<int> b(q);
  for(int i = 0; i < q; i++) {
    cin >> b[i];
  }
  reverse(a.begin(), a.end());
  for(int i = 0; i < q; i++) {
    cout << 1000005 -
                (int)distance(a.begin(), upper_bound(a.begin(), a.end(), b[i]))
         << '\n';
  }
  return 0;
}