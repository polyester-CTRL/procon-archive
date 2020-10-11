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
  vector<ll> a(4);
  for(int i = 0; i < 4; i++) {
    cin >> a[i];
  }
  for(int bit = 0; bit < (1 << 4); bit++) {
    ll sum = 0, sum1 = 0;
    for(int i = 0; i < 4; i++) {
      if((bit >> i) & 1) {
        sum += a[i];
      } else {
        sum1 += a[i];
      }
    }
    if(sum1 == sum) {
      cout << "Yes\n";
      return 0;
    }
  }
  cout << "No\n";
  return 0;
}