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
  vector<int> a(n, 0);
  for(int i = 0; i < n; i++) {
    string tmp;
    cin >> tmp;
    if(tmp == "OR") {
      a[i] = 1;
    }
  }
  reverse(a.begin(), a.end());
  ll ans = 1;
  for(int i = 0; i < n; i++) {
    if(a[i] == 1) {
      ans += (ll)pow(2, n - i);
    }
  }
  cout << ans << endl;
  return 0;
}