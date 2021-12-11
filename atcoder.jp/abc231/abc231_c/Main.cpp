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
  int n, q;
  cin >> n >> q;
  vector<int> a(n), x(q);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  for(int i = 0; i < q; i++) {
    cin >> x[i];
  }
  for(int i = 0; i < q; i++) {
    cout << n - distance(a.begin(), lower_bound(a.begin(), a.end(), x[i]))
         << endl;
  }

  return 0;
}