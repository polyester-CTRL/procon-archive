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
  ll a, b, c;
  cin >> a >> b >> c;
  ll d = gcd(a, gcd(b, c));
  cout << a / d + b / d + c / d - 3 << endl;
  return 0;
}