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
  vector<ll> a(25, 0);
  a[0] = 100;
  a[1] = 100;
  a[2] = 200;
  for(int i = 3; i <= 20; i++) {
    a[i] = a[i - 1] + a[i - 2] + a[i - 3];
  }
  cout << a[19] << endl;
  return 0;
}