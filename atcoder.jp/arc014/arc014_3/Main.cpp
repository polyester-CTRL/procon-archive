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
  string s;
  cin >> n >> s;
  int a[3] = {};
  for(int i = 0; i < n; i++) {
    if(s[i] == 'R') {
      a[0]++;
    } else if(s[i] == 'G') {
      a[1]++;
    } else {
      a[2]++;
    }
  }
  int ans = 0;
  for(int i = 0; i < 3; i++) {
    if(a[i] % 2 != 0) {
      ans++;
    }
  }
  cout << ans << endl;
  return 0;
}