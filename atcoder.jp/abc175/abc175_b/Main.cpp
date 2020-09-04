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
  vector<ll> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  ll ans = 0;
  for(int i = 0; i < n; i++) {
    for(int j = i + 1; j < n; j++) {
      for(int k = j + 1; k < n; k++) {
        if(a[i] == a[j] || a[j] == a[k] || a[k] == a[i]) {
          continue;
        }
        vector<ll> tmp;
        tmp.push_back(a[i]);
        tmp.push_back(a[j]);
        tmp.push_back(a[k]);
        sort(tmp.begin(), tmp.end());
        if(tmp[0] + tmp[1] > tmp[2]) {
          ans++;
        }
      }
    }
  }
  cout << ans << endl;
  return 0;
}