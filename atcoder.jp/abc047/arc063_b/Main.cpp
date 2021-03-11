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
  ll t;
  cin >> n >> t;
  vector<ll> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  ll mini = 1001001001;
  ll maxi = 0;
  ll cnt = 0;
  for(int i = 0; i < n; i++) {
    if(mini >= a[i]) {
      mini = a[i];
    } else {
      if(maxi < a[i] - mini) {
        maxi = a[i] - mini;
        cnt = 1;
      } else if(maxi == a[i] - mini) {
        cnt++;
      }
    }
  }
  cout << cnt << endl;
  return 0;
}