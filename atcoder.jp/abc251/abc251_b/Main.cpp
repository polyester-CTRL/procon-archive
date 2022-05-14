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
int main() {
  int n;
  cin >> n;
  int w;
  cin >> w;
  vector<int> a(n);
  for(int i = 0; i < n; i++) {
    cin >> a[i];
  }
  vector<ll> mp(4000000, 0);
  ll sum = 0;
  for(int i = 0; i < n; i++) {
    mp[a[i]]++;
    for(int j = i + 1; j < n; j++) {
      mp[a[i] + a[j]]++;
      for(int k = j + 1; k < n; k++) {
        mp[a[i] + a[j] + a[k]]++;
      }
    }
  }
  for(int i = 0; i <= w; i++) {
    if(mp[i] > 0) {
      sum++;
    }
  }
  cout << sum << endl;

  return 0;
}