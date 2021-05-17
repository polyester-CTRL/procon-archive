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
  vector<pair<int, string>> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i].second >> a[i].first;
  }
  sort(a.begin(), a.end());
  cout << a[n - 2].second << endl;
  return 0;
}