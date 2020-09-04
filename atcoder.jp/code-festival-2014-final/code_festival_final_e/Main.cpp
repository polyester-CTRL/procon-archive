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
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  if(n < 3) {
    cout << 0 << endl;
    return 0;
  }
  int idx = 0;
  while(idx < n && a[idx] == a[idx + 1]) {
    idx++;
  }
  if(idx == n) {
    cout << 0 << endl;
    return 0;
  }
  bool next = (a[idx] < a[idx + 1]) ? true : false;
  int ans = 0;
  a.push_back(*a.rbegin());
  for(int i = 0; i < n; i++) {
    if(next == true && a[i] > a[i + 1]) {
      ans++;
      next = false;
    } else if(next == false && a[i] < a[i + 1]) {
      ans++;
      next = true;
    }
  }
  if(ans == 0) {
    cout << 0 << endl;
  } else {
    cout << ans + 2 << endl;
  }
  return 0;
}