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
  ll n;
  cin >> n;
  ll sum = 1;
  if(n == 1) {
    cout << "Aoki\n";
  }
  for(ll i = 1; sum < n; i++) {
    sum += (ll)pow(4, i);
    if(sum >= n) {
      cout << "Takahashi\n";
      return 0;
    }
    sum += (ll)pow(4, i);
    if(sum >= n) {
      cout << "Aoki\n";
      return 0;
    }
  }
  return 0;
}