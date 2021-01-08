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
  int n, m;
  cin >> n >> m;
  vector<int> a(n);
  int tmp = 0;
  for(int i = 0; i < n; i++) {
    a[i] = i + 1;
  }
  for(int i = 0; i < m; i++) {
    int d;
    cin >> d;
    for(int j = 0; j < n; j++) {
      if(a[j] == d) {
        swap(a[j], tmp);
      }
    }
  }
  for(const auto &p : a) {
    cout << p << '\n';
  }

  return 0;
}