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
  int n = 6;
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  sort(a.begin(), a.end());
  cout << a[3] << endl;
  return 0;
}