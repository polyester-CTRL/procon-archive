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
  vector<ll> x(n), y(n);
  for(int i = 0; i < n; i++) {
    cin >> x[i] >> y[i];
  }
  map<pair<ll, ll>, int> mp;
  for(int i = 0; i < n; i++) {
    for(int j = 0; j < n; j++) {
      if(i == j) {
        continue;
      }
      mp[{(x[i] - x[j]), (y[i] - y[j])}]++;
    }
  }
  int maxi = 0;
  for(auto p : mp) {
    maxi = max(maxi, p.second);
  }
  cout << n - maxi << endl;
  return 0;
}