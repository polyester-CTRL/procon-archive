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
  ll a = 1, b = 1, c;
  for(int i = 0; i < n; i++) {
    c = a;
    a += b;
    b = c;
  }
  cout << a << " " << b << endl;
  return 0;
}