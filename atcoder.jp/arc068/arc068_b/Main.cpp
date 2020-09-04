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
  map<int, int> mp;
  int ans = n;
  for(int i = 0; i < n; i++) {
    int tmp;
    cin >> tmp;
    mp[tmp]++;
  }
  int cnt = 0;
  for(auto &p : mp) {
    cnt += p.second - 1;
  }
  if(cnt % 2 != 0) {
    cnt++;
  }
  ans -= cnt;
  cout << ans << endl;
  return 0;
}