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
  int ans = 0, maxi = 0;
  for(int i = 2; i <= 1000; i++) {
    int cnt = 0;
    for(int j = 0; j < n; j++) {
      if(a[j] % i == 0)
        cnt++;
    }
    if(cnt > maxi) {
      maxi = cnt;
      ans = i;
    }
  }
  cout << ans << endl;
  return 0;
}