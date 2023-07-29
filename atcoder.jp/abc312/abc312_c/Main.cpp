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
int func(vector<int> a, vector<int> b, int num) {
  int cnt = 0;
  for(int i = 0; i < a.size(); i++) {
    if(a[i] <= num) {
      cnt++;
    }
  }
  for(int i = 0; i < b.size(); i++) {
    if(b[i] >= num) {
      cnt--;
    }
  }
  return cnt;
}
int main() {
  int n, m;
  cin >> n >> m;
  vector<int> a(n), b(m);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  for(int i = 0; i < m; i++) {
    cin >> b[i];
  }
  int ng = 0, ok = 1000000002;
  while(abs(ok - ng) > 1) {
    int mid = (ok + ng) / 2;
    if(func(a, b, mid) >= 0) {
      ok = mid;
    } else {
      ng = mid;
    }
  }
  cout << ok << endl;

  return 0;
}