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
  int n;
  cin >> n;
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for(int i = 1; i < n; i++) {
    int num = (a[i] - a[i - 1]) > 0 ? 1 : -1;
    for(int j = 0; j < abs(a[i] - a[i - 1]); j++) {
      cout << a[i - 1] + num * j << " ";
    }
  }
  cout << a[n - 1] << " ";
  cout << endl;
  return 0;
}