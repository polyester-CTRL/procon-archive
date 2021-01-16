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
  ll n, k;
  cin >> n >> k;
  vector<ll> a(n), box(n + 10, 0);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
    box[a[i]]++;
  }
  ll mini = min(box[0], k);
  ll ans = 0;
  for(ll i = 0; i < n; i++) {
    if(box[i] < mini) {
      ans += (mini - box[i]) * i;
      mini = box[i];
    }
  }
  cout << ans << endl;

  return 0;
}