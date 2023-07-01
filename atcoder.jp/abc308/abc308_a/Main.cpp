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
  int n = 8;
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for(int i = 0; i < n - 1; i++) {
    if(a[i] > a[i + 1]) {
      cout << "No\n";
      return 0;
    }
  }
  for(int i = 0; i < n; i++) {
    if(a[i] < 100 || a[i] > 675) {
      cout << "No\n";
      return 0;
    }
  }
  for(int i = 0; i < n; i++) {
    if(a[i] % 25 != 0) {
      cout << "No\n";
      return 0;
    }
  }
  cout << "Yes\n";
  return 0;
}