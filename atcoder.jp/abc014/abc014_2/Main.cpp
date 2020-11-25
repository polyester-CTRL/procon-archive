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
  ll x;
  cin >> n >> x;
  int sum = 0;
  for(int i = 0; i < n; i++) {
    int a;
    cin >> a;
    if(x >> i & 1) {
      sum += a;
    }
  }
  cout << sum << endl;
  return 0;
}