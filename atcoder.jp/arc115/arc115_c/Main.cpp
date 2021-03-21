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
  vector<ll> a(n + 10, 0);
  a[1] = 1;
  for(int i = 2; i <= n; i++) {
    if(a[i] == 0) {
      a[i] = 2;
    }
    for(int j = i * 2; j <= n; j += i) {
      a[j] = a[i] + 1;
    }
  }
  for(int i = 1; i <= n; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
  return 0;
}