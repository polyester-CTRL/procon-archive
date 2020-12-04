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
  vector<int> a(3), b(3);
  for(int i = 0; i < 3; i++) {
    cin >> a[i];
  }
  for(int i = 0; i < 3; i++) {
    cin >> b[i];
  }
  for(int i = 0; i < 3; i++) {
    b.push_back(b[i]);
  }
  int ans = 0;
  for(int i = 0; i < 3; i++) {
    int num = 1;
    for(int j = 0; j < 3; j++) {
      num *= a[j] / b[i + j];
    }
    ans = max(ans, num);
  }
  reverse(b.begin(), b.end());
  for(int i = 0; i < 3; i++) {
    int num = 1;
    for(int j = 0; j < 3; j++) {
      num *= a[j] / b[i + j];
    }
    ans = max(ans, num);
  }
  cout << ans << endl;
  return 0;
}