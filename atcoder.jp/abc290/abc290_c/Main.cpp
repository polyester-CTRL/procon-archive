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
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  int m = -1;
  for(int i = 0; i < n; i++) {
    if(a[i] == m + 1 && k > 0) {
      m++;
      k--;
    } else if(a[i] == m) {
      continue;
    }
  }
  cout << m + 1 << endl;
  return 0;
}