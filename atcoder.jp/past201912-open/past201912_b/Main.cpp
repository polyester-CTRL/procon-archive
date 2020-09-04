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
  for(int i = 1; i < n; i++) {
    if(a[i - 1] == a[i]) {
      cout << "stay\n";
    } else if(a[i - 1] > a[i]) {
      cout << "down " << a[i - 1] - a[i] << '\n';
    } else {
      cout << "up " << a[i] - a[i - 1] << '\n';
    }
  }
  return 0;
}