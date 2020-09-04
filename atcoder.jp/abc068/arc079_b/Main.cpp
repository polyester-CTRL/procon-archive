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
  ll k;
  cin >> k;
  ll a[50] = {};

  for(int i = 0; i < min(k, (ll)50); i++) {
    a[i] = 50 - i - 1;
  }
  for(int i = 0; i < 50; i++) {
    a[i] += k / 50;
  }
  for(int i = 0; i < k % 50; i++) {
    a[i] += 1;
  }
  cout << 50 << endl;
  for(int i = 0; i < 50; i++) {
    cout << a[i] << " ";
  }
  cout << endl;
  return 0;
}