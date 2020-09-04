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
  int ans = 1;
  for(int i = 0; i < n; i++) {
    if(a[i] % 2 != 0) {
      ans = 0;
    }
  }
  if(ans == 0) {
    cout << "first\n";
  } else {
    cout << "second\n";
  }
  return 0;
}