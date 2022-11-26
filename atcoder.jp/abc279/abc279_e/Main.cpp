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
  int n, m;
  cin >> n >> m;
  vector<int> a(m);
  for(int i = 0; i < m; i++) {
    cin >> a[i];
    a[i]--;
  }
  vector<int> b(n, 0);
  map<int, int> c;
  for(int j = 0; j < n; j++) {
    b[j] = j;
    c[j] = j;
  }
  int idx = 0;
  for(int i = m - 1; i >= 0; i--) {
    swap(c[a[i]], c[a[i] + 1]);
  }
  for(int i = 0; i < m; i++) {
    swap(c[a[i]], c[a[i] + 1]);

    cout << c[idx] + 1 << endl;

    if(idx == a[i]) {
      idx++;
    } else if(idx - 1 == a[i]) {
      idx--;
    }
    swap(b[a[i]], b[a[i] + 1]);
  }
  return 0;
}