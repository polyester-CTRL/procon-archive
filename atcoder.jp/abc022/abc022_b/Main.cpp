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
  int ans = 0;
  for(int i = 0; i < n; i++) {
    int tmp;
    cin >> tmp;
    if(mp[tmp] >= 1) {
      ans++;
    } else {
      mp[tmp] = 1;
    }
  }
  cout << ans << endl;
  return 0;
}